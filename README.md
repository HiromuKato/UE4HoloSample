# UE4HoloSample

UE4 で HoloLens 2 の各種機能をレベルに分けて実装したサンプル集です。

## 動作確認環境
- Unreal Engine
  - 4.27.0
- HoloLens 2
  - バージョン：21H1
  - OS ビルド：20348.1014

**Windows Mixed Reality プラグインは無効にし、 Microsoft OpenXR Plugin を有効にしています**

## ビルド・デプロイ手順

1. UE4HoloSample\ThirdParty\HoloLensWinrtDLL\HoloLensWinrtDLL.vcxproj を Visual Studio で開き、ARM64, Release でビルドし、dllを生成します

2. メニューの Edit > Project Settins... を選択し、Platforms > HoloLens の Packaging > Signing Certificate の Generate new ボタンを押下し、表示されたダイアログで None を選択して証明書を作成します

3. メニューの File > Package Project > HoloLens を選択して任意のフォルダにパッケージを作成します

    パッケージ作成中に以下のような Char.h に関するエラーが出た場合は、

    ```
    UATHelper: Packaging (HoloLens):     C:\Program Files\Epic Games\UE_4.27\Engine\Source\Runtime\Core\Public\Misc/Char.h(1): error C4819: �t�@�C���́A���݂̃R�[�h �y�[�W (932) �ŕ\���ł��Ȃ�������܂�ł��܂��B�f�[�^�̑�����h�����߂ɁA�t�@�C���� Unicode �`���ŕۑ����Ă��������B
    ```

    Char.h をVisual Studio で開き、以下のコメントを削除してください
  
    ```cpp
    /**
    * Avoid sign extension problems with signed characters smaller than int
    *
    * E.g. 'Ö' - 'A' is negative since the char 'Ö' (0xD6) is negative and gets
    * sign-extended to the 32-bit int 0xFFFFFFD6 before subtraction happens.
    *
    * Mainly needed for subtraction and addition.
    */
    ```

4. デバイスポータルからパッケージをインストールします

## BasicLevel

MRアプリを作るための基本的な準備を済ませた状態のサンプル

- キューブを掴んで移動や拡大縮小ができる(UxtGenericManipulator)

[![BasicLevel](http://img.youtube.com/vi/t-U9aFP4d_0/0.jpg)](http://www.youtube.com/watch?v=t-U9aFP4d_0 "BasicLevel")

## EyeTracking

アイトラッキングのサンプル

- 視線の方向に青いラインが描画される

**実機でのみ動作します（以前はストリーミングで動作しましたが、現在 IsEyeTrackerConnected がストリーミングだと False になります）**

[![EyeTracking](http://img.youtube.com/vi/b8a6w-cYvTk/0.jpg)](http://www.youtube.com/watch?v=b8a6w-cYvTk "EyeTracking")

## HandTracking

ハンドトラッキングのサンプル

- 手の位置にハンドメッシュを描画する

[![HandTracking](http://img.youtube.com/vi/LOlRYw0nFRI/0.jpg)](http://www.youtube.com/watch?v=LOlRYw0nFRI "HandTracking")

## MRCapture

Mixed Reality Capture のサンプル

**UE4.27, OpenXR において現状実機で動作確認できていません**

- カメラで撮影した映像をキューブのマテリアルに反映する

[![MRCapture](http://img.youtube.com/vi/vMT8NL94Ap0/0.jpg)](http://www.youtube.com/watch?v=vMT8NL94Ap0 "MRCapture")

## QRCodeTracking

QRコードトラッキングのサンプル

- QRコードの中心を追跡し点を描画する

[![QRCodeTracking](http://img.youtube.com/vi/zLLtCiH9-bM/0.jpg)](http://www.youtube.com/watch?v=zLLtCiH9-bM "QRCodeTracking")

## SpatialAnchor

SpatialAnchor のサンプル

**実機でのみ動作します**

- アンカーの保存・読み込みを行い、読み込んだ位置にキューブを表示する

## SpatialAudio

空間オーディオのサンプル

- 球の位置からホワイトノイズが再生される

**パッケージ作成時に Microsoft OpenXR Plugin プラグインと MicrosoftSpatialSound プラグインが競合してエラーがでるため、MicrosoftSpatialSoundを無効にしています。そのため現在動作しません**

[![SpatialAudio](http://img.youtube.com/vi/pzE_PEUYVyg/0.jpg)](http://www.youtube.com/watch?v=pzE_PEUYVyg "SpatialAudio")

## SpatialMapping

空間マッピングのサンプル

- 空間マッピングを描画する

[![SpatialMapping](http://img.youtube.com/vi/AeqeetWMEZI/0.jpg)](http://www.youtube.com/watch?v=AeqeetWMEZI "SpatialMapping")

## SpeechInput

音声入力のサンプル

- SetRed, SetGreenの音声を認識してキューブの色を変える

[![SpeechInput](http://img.youtube.com/vi/0JVHpk3xBuI/0.jpg)](http://www.youtube.com/watch?v=0JVHpk3xBuI "SpeechInput")


## SystemKeyboard

システムキーボードのサンプル

**UE4.27, OpenXR において現状実機で動作確認できていません**


## WinRT

ファイルダイアログを開き HoloLens の Document 配下にテキストを保存するサンプル

**実機でのみ動作します**

[![WinRT](http://img.youtube.com/vi/eDfY3qRIejM/0.jpg)](http://www.youtube.com/watch?v=eDfY3qRIejM "WinRT")