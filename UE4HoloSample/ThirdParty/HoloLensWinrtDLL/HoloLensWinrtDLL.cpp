#include "pch.h"
#include "HoloLensWinrtDLL.h"

#include <winrt/Windows.Storage.h>
#include <winrt/Windows.Storage.Streams.h>
#include <winrt/Windows.Storage.Pickers.h>
#include <winrt/Windows.Foundation.h>
#include <winrt/Windows.Foundation.Collections.h>

#include <string>
#include <vector>
#include <thread>

class SaveGameManager
{
public:
	SaveGameManager()
	{
	}

	~SaveGameManager()
	{
		// Wait for currently running thread to complete before terminating.
		if (m_thread.joinable())
		{
			m_thread.join();
		}
	}

	void SaveGame()
	{
		OpenFileDialogueAction();
	}

private:
	winrt::Windows::Storage::StorageFile m_file = winrt::Windows::Storage::StorageFile(nullptr);
	std::thread m_thread;

	winrt::Windows::Foundation::IAsyncAction OpenFileDialogueAction()
	{
		std::vector<winrt::hstring> extensions;
		extensions.push_back(L".txt");

		auto picker = winrt::Windows::Storage::Pickers::FileSavePicker();

		// FileSavePicker needs a file type to open without errors.
		picker.FileTypeChoices().Insert(L"Plain Text",
			winrt::single_threaded_vector<winrt::hstring>(
				std::move(extensions)));

		// Opening the FilePicker must be done on the Game UI thread.
		// Any other IAsyncOperations should be done on a background thread.
		m_file = co_await picker.PickSaveFileAsync();

		if (m_file)
		{
			// Unreal's game thread is an STA, async tasks need to run on
			// a background MTA thread, or waiting on them will deadlock.    
			std::thread thread([this]() { RunThread(); });
			m_thread = std::move(thread);
		}
	}

	void RunThread()
	{
		// Ensure this thread is an MTA
		winrt::init_apartment();
		Run().get();
	}

	winrt::Windows::Foundation::IAsyncAction Run()
	{
		co_await winrt::Windows::Storage::FileIO::WriteTextAsync(
			m_file, L"Hello WinRT");
	}
};

// sgm is declared outside of OpenFileDialogue so it doesn't
// get destroyed when OpenFileDialogue goes out of scope.
SaveGameManager sgm;

void HoloLensWinrtDLL::OpenFileDialogue()
{
	sgm.SaveGame();
}
