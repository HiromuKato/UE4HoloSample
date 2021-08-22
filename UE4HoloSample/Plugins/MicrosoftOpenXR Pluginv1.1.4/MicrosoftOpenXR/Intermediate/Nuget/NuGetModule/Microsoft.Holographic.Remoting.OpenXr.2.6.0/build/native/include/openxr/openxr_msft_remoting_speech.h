#pragma once

////////////////////////////////////////////////////////////////////////////////
// Copyright (C) Microsoft Corporation.  All Rights Reserved

#ifdef __cplusplus
extern "C"
{
#endif

    XR_DEFINE_ATOM(XrRemotingSpeechPacketIdMSFT);

#define XR_MSFT_holographic_remoting_speech                1
#define XR_MSFT_holographic_remoting_speech_SPEC_VERSION   2
#define XR_MSFT_HOLOGRAPHIC_REMOTING_SPEECH_EXTENSION_NAME "XR_MSFT_holographic_remoting_speech"

#define XR_MAX_SPEECH_LANGUAGE_NAME_SIZE_MSFT            32
#define XR_MAX_SPEECH_RECOGNIZER_STATE_MESSAGE_SIZE_MSFT 32

    // Extension number: 145 / Enum subrange base: 144000

    // extends XrStructureType
    typedef enum XrRemotingSpeechStructureType
    {
        XR_TYPE_REMOTING_SPEECH_INIT_INFO_MSFT = 1000144000,
        XR_TYPE_EVENT_DATA_REMOTING_SPEECH_RECOGNIZER_STATE_CHANGED_MSFT = 1000144001,
        XR_TYPE_EVENT_DATA_REMOTING_SPEECH_RECOGNIZED_MSFT = 1000144002,
        XR_TYPE_REMOTING_SPEECH_MAX_ENUM = 0x7FFFFFFF
    } XrRemotingSpeechStructureType;

    // extends XrResult
    typedef enum XrRemotingSpeechResult
    {
        XR_ERROR_REMOTING_SPEECH_ALREADY_INITIALIZED_MSFT = -1000144000,
        XR_ERROR_REMOTING_SPEECH_PACKET_EXPIRED_MSFT = -1000144001,
        XR_ERROR_REMOTING_SPEECH_MAX_ENUM = 0x7FFFFFFF
    } XrRemotingSpeechResult;

    typedef enum XrRemotingSpeechRecognizerStateMSFT
    {
        XR_REMOTING_SPEECH_RECOGNIZER_STATE_INITIALIZING_MSFT = 0,
        XR_REMOTING_SPEECH_RECOGNIZER_STATE_INITIALIZED_MSFT = 1,
        XR_REMOTING_SPEECH_RECOGNIZER_STATE_INITIALIZATION_FAILED_MSFT = 2,
        XR_REMOTING_SPEECH_RECOGNIZER_STATE_STARTED_MSFT = 3,
        XR_REMOTING_SPEECH_RECOGNIZER_STATE_STOPPED_MSFT = 4,
        XR_REMOTING_SPEECH_RECOGNIZER_STATE_MAX_ENUM_MSFT = 5
    } XrRemotingSpeechRecognizerStateMSFT;

    typedef enum XrRemotingSpeechRecognitionConfidenceMSFT
    {
        XR_REMOTING_SPEECH_RECOGNITION_CONFIDENCE_HIGH_MSFT = 0,
        XR_REMOTING_SPEECH_RECOGNITION_CONFIDENCE_MEDIUM_MSFT = 1,
        XR_REMOTING_SPEECH_RECOGNITION_CONFIDENCE_LOW_MSFT = 2,
        XR_REMOTING_SPEECH_RECOGNITION_CONFIDENCE_MAX_ENUM_MSFT = 3
    } XrRemotingSpeechRecognitionConfidenceMSFT;

    typedef struct XrRemotingSpeechInitInfoMSFT
    {
        XrStructureType type;
        const void* next;
        char language[XR_MAX_SPEECH_LANGUAGE_NAME_SIZE_MSFT];
        uint32_t grammarFileSize;
        uint8_t* grammarFileContent;
        uint32_t dictionaryEntriesCount;
        const char** dictionaryEntries;
    } XrRemotingSpeechInitInfoMSFT;

    typedef struct XrEventDataRemotingSpeechRecognizerStateChangedMSFT
    {
        XrStructureType type;
        const void* next;
        XrRemotingSpeechRecognizerStateMSFT speechRecognizerState;
        char stateMessage[XR_MAX_SPEECH_RECOGNIZER_STATE_MESSAGE_SIZE_MSFT];
    } XrEventDataRemotingSpeechRecognizerStateChangedMSFT;

    typedef struct XrEventDataRemotingSpeechRecognizedMSFT
    {
        XrStructureType type;
        const void* next;
        XrRemotingSpeechPacketIdMSFT packetId;
        XrRemotingSpeechRecognitionConfidenceMSFT confidence;
        float rawConfidence;
    } XrEventDataRemotingSpeechRecognizedMSFT;

    typedef XrResult(XRAPI_PTR* PFN_xrInitializeRemotingSpeechMSFT)(XrSession session, const XrRemotingSpeechInitInfoMSFT* speechInitInfo);

    typedef XrResult(XRAPI_PTR* PFN_xrRetrieveRemotingSpeechRecognizedTextMSFT)(
        XrSession session,
        XrRemotingSpeechPacketIdMSFT packetId,
        uint32_t dataBytesCapacityInput,
        uint32_t* dataBytesCountOutput,
        char* dataBytes);

#ifndef XR_NO_PROTOTYPES
    XRAPI_ATTR XrResult XRAPI_CALL xrInitializeRemotingSpeechMSFT(XrSession session, const XrRemotingSpeechInitInfoMSFT* speechInitInfo);

    XRAPI_ATTR XrResult XRAPI_CALL xrRetrieveRemotingSpeechRecognizedTextMSFT(
        XrSession session,
        XrRemotingSpeechPacketIdMSFT packetId,
        uint32_t dataBytesCapacityInput,
        uint32_t* dataBytesCountOutput,
        char* dataBytes);
#endif

#ifdef __cplusplus
}
#endif
