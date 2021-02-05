// Fill out your copyright notice in the Description page of Project Settings.

#include "WinRTSampleActor.h"
#include "HoloLensWinrtDll.h"

#include <ppltasks.h>

// Sets default values
AWinRTSampleActor::AWinRTSampleActor()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void AWinRTSampleActor::BeginPlay()
{
	Super::BeginPlay();

	// キーが -1 の場合、上書きされずに常に新メッセージとして表示される
	const int32 AlwaysAddKey = -1;
	GEngine->AddOnScreenDebugMessage(AlwaysAddKey, 5.0f, FColor::Yellow, "AWinRTSampleActor::BeginPlay");

	// Gets path to DLL location
	const FString BinDir = FPaths::ProjectDir() /
		"ThirdParty" / "HoloLensWinrtDLL" /
		"ARM64" / "Release" / "HoloLensWinrtDLL";

	// Loads DLL into application
	void* dllHandle = FPlatformProcess::GetDllHandle(
		*(BinDir / "HoloLensWinrtDLL.dll"));

}

// Called every frame
void AWinRTSampleActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AWinRTSampleActor::OpenFileDialogue()
{
	/*
	UE_LOG(LogTemp, Display, TEXT("ログ出力サンプル"));
	const int32 AlwaysAddKey = -1;
	GEngine->AddOnScreenDebugMessage(AlwaysAddKey, 5.0f, FColor::Yellow, "AWinRTSampleActor::OpenFileDialogue");
	*/
#if PLATFORM_HOLOLENS
	HoloLensWinrtDLL::OpenFileDialogue();
#endif
}
