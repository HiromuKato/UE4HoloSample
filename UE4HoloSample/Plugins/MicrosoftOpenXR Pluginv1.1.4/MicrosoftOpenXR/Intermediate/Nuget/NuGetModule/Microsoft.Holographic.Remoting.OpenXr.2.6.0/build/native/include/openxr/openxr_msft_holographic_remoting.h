#pragma once

////////////////////////////////////////////////////////////////////////////////
// Copyright (C) Microsoft Corporation.  All Rights Reserved

#ifdef __cplusplus
extern "C"
{
#endif

#define XR_MSFT_holographic_remoting                1
#define XR_MSFT_holographic_remoting_SPEC_VERSION   2
#define XR_MSFT_HOLOGRAPHIC_REMOTING_EXTENSION_NAME "XR_MSFT_holographic_remoting"

    XR_DEFINE_HANDLE(XrRemotingDataChannelMSFT)
    XR_DEFINE_ATOM(XrRemotingPacketIdMSFT)

    // Extension number: 66 / Enum subrange base: 65000

    // extends XrObjectType
    typedef enum XrRemotingObjectType
    {
        XR_REMOTING_OBJECT_TYPE_DATA_CHANNEL_MSFT = 1000065000,
        XR_REMOTING_OBJECT_TYPE_MAX_ENUM = 0x7FFFFFFF
    } XrRemotingObjectType;

    // extends XrStructureType
    typedef enum XrRemotingStructureType
    {
        XR_TYPE_REMOTING_REMOTE_CONTEXT_PROPERTIES_MSFT = 1000065000,
        XR_TYPE_REMOTING_CONNECT_INFO_MSFT = 1000065001,
        XR_TYPE_REMOTING_LISTEN_INFO_MSFT = 1000065002,
        XR_TYPE_REMOTING_DISCONNECT_INFO_MSFT = 1000065003,
        XR_TYPE_REMOTING_EVENT_DATA_LISTENING_MSFT = 1000065004,
        XR_TYPE_REMOTING_EVENT_DATA_CONNECTED_MSFT = 1000065005,
        XR_TYPE_REMOTING_EVENT_DATA_DISCONNECTED_MSFT = 1000065006,
        XR_TYPE_REMOTING_AUTHENTICATION_TOKEN_REQUEST_MSFT = 1000065007,
        XR_TYPE_REMOTING_CERTIFICATE_DATA_MSFT = 1000065008,
        XR_TYPE_REMOTING_CERTIFICATE_VALIDATION_RESULT_MSFT = 1000065009,
        XR_TYPE_REMOTING_SERVER_CERTIFICATE_VALIDATION_MSFT = 1000065010,
        XR_TYPE_REMOTING_AUTHENTICATION_TOKEN_VALIDATION_MSFT = 1000065011,
        XR_TYPE_REMOTING_SERVER_CERTIFICATE_REQUEST_MSFT = 1000065012,
        XR_TYPE_REMOTING_SECURE_CONNECTION_CLIENT_CALLBACKS_MSFT = 1000065013,
        XR_TYPE_REMOTING_SECURE_CONNECTION_SERVER_CALLBACKS_MSFT = 1000065014,
        XR_TYPE_EVENT_DATA_REMOTING_DATA_CHANNEL_CREATED_MSFT = 1000065015,
        XR_TYPE_EVENT_DATA_REMOTING_DATA_CHANNEL_OPENED_MSFT = 1000065016,
        XR_TYPE_EVENT_DATA_REMOTING_DATA_CHANNEL_DATA_RECEIVED_MSFT = 1000065017,
        XR_TYPE_EVENT_DATA_REMOTING_DATA_CHANNEL_CLOSED_MSFT = 1000065018,
        XR_TYPE_REMOTING_DATA_CHANNEL_CREATE_INFO_MSFT = 1000065019,
        XR_TYPE_REMOTING_DATA_CHANNEL_STATE_MSFT = 1000065020,
        XR_TYPE_REMOTING_DATA_CHANNEL_SEND_DATA_INFO_MSFT = 1000065021,
        XR_TYPE_REMOTING_MAX_ENUM = 0x7FFFFFFF
    } XrRemotingStructureType;

    // extends XrResult
    typedef enum XrRemotingResult
    {
        XR_ERROR_REMOTING_NOT_DISCONNECTED_MSFT = -1000065000,
        XR_ERROR_REMOTING_CODEC_NOT_FOUND_MSFT = -1000065001,
        XR_ERROR_REMOTING_CALLBACK_ERROR_MSFT = -1000065002,
        XR_ERROR_REMOTING_DEPTH_BUFFER_STREAM_DISABLED_MSFT = -1000065003,
        XR_ERROR_REMOTING_DATA_CHANNEL_INVALID_ID_MSFT = -1000065004,
        XR_ERROR_REMOTING_DATA_CHANNEL_CLOSED_MSFT = -1000065005,
        XR_ERROR_REMOTING_DATA_CHANNEL_OPEN_PENDING_MSFT = -1000065006,
        XR_ERROR_REMOTING_DATA_CHANNEL_ID_ALREADY_IN_USE_MSFT = -1000065007,
        XR_ERROR_REMOTING_DATA_CHANNEL_INVALID_DATA_MSFT = -1000065008,
        XR_ERROR_REMOTING_DATA_CHANNEL_PACKET_EXPIRED_MSFT = -100006509,
        XR_ERROR_REMOTING_MAX_ENUM = 0x7FFFFFFF
    } XrRemotingResult;

    typedef enum XrRemotingDisconnectReasonMSFT
    {
        XR_REMOTING_DISCONNECT_REASON_NONE_MSFT = 0,
        XR_REMOTING_DISCONNECT_REASON_UNKNOWN_MSFT = 1,
        XR_REMOTING_DISCONNECT_REASON_NO_SERVER_CERTIFICATE_MSFT = 2,
        XR_REMOTING_DISCONNECT_REASON_HANDSHAKE_PORT_BUSY_MSFT = 3,
        XR_REMOTING_DISCONNECT_REASON_HANDSHAKE_UNREACHABLE_MSFT = 4,
        XR_REMOTING_DISCONNECT_REASON_HANDSHAKE_CONNECTION_FAILED_MSFT = 5,
        XR_REMOTING_DISCONNECT_REASON_AUTHENTICATION_FAILED_MSFT = 6,
        XR_REMOTING_DISCONNECT_REASON_REMOTING_VERSION_MISMATCH_MSFT = 7,
        XR_REMOTING_DISCONNECT_REASON_INCOMPATIBLE_TRANSPORT_PROTOCOLS_MSFT = 8,
        XR_REMOTING_DISCONNECT_REASON_HANDSHAKE_FAILED_MSFT = 9,
        XR_REMOTING_DISCONNECT_REASON_TRANSPORT_PORT_BUSY_MSFT = 10,
        XR_REMOTING_DISCONNECT_REASON_TRANSPORT_UNREACHABLE_MSFT = 11,
        XR_REMOTING_DISCONNECT_REASON_TRANSPORT_CONNECTION_FAILED_MSFT = 12,
        XR_REMOTING_DISCONNECT_REASON_PROTOCOL_VERSION_MISMATCH_MSFT = 13,
        XR_REMOTING_DISCONNECT_REASON_PROTOCOL_ERROR_MSFT = 14,
        XR_REMOTING_DISCONNECT_REASON_VIDEO_CODEC_NOT_AVAILABLE_MSFT = 15,
        XR_REMOTING_DISCONNECT_REASON_CANCELED_MSFT = 16,
        XR_REMOTING_DISCONNECT_REASON_CONNECTION_LOST_MSFT = 17,
        XR_REMOTING_DISCONNECT_REASON_DEVICE_LOST_MSFT = 18,
        XR_REMOTING_DISCONNECT_REASON_DISCONNECT_REQUEST_MSFT = 19,
        XR_REMOTING_DISCONNECT_REASON_HANDSHAKE_NETWORK_UNREACHABLE_MSFT = 20,
        XR_REMOTING_DISCONNECT_REASON_HANDSHAKE_CONNECTION_REFUSED_MSFT = 21,
        XR_REMOTING_DISCONNECT_REASON_VIDEO_FORMAT_NOT_AVAILABLE_MSFT = 22,
        XR_REMOTING_DISCONNECT_REASON_PEER_DISCONNECT_REQUEST_MSFT = 23,
        XR_REMOTING_DISCONNECT_REASON_PEER_DISCONNECT_TIMEOUT_MSFT = 24,
        XR_REMOTING_DISCONNECT_REASON_SESSION_OPEN_TIMEOUT_MSFT = 25,
        XR_REMOTING_DISCONNECT_REASON_REMOTING_HANDSHAKE_TIMEOUT_MSFT = 26,
        XR_REMOTING_DISCONNECT_REASON_INTERNAL_ERROR_MSFT = 27,
        XR_REMOTING_DISCONNECT_REASON_MAX_ENUM = 0x7FFFFFFF
    } XrRemotingDisconnectReasonMSFT;

    typedef enum XrRemotingConnectionStateMSFT
    {
        XR_REMOTING_CONNECTION_STATE_DISCONNECTED_MSFT = 0,
        XR_REMOTING_CONNECTION_STATE_CONNECTING_MSFT = 1,
        XR_REMOTING_CONNECTION_STATE_CONNECTED_MSFT = 2,
        XR_REMOTING_CONNECTION_STATE_MAX_ENUM = 0x7FFFFFFF
    } XrRemotingConnectionStateMSFT;

    typedef enum XrRemotingVideoCodecMSFT
    {
        XR_REMOTING_VIDEO_CODEC_ANY_MSFT = 0,
        XR_REMOTING_VIDEO_CODEC_H264_MSFT = 1,
        XR_REMOTING_VIDEO_CODEC_H265_MSFT = 2,
        XR_REMOTING_VIDEO_CODEC_MAX_ENUM = 0x7FFFFFFF
    } XrRemotingVideoCodecMSFT;

    typedef enum XrRemotingDepthBufferStreamResolutionMSFT
    {
        XR_REMOTING_DEPTH_BUFFER_STREAM_RESOLUTION_HALF_MSFT = 0,
        XR_REMOTING_DEPTH_BUFFER_STREAM_RESOLUTION_FULL_MSFT = 1,
        XR_REMOTING_DEPTH_BUFFER_STREAM_RESOLUTION_QUARTER_MSFT = 2,
        XR_REMOTING_DEPTH_BUFFER_STREAM_RESOLUTION_DISABLED_MSFT = 3,
        XR_REMOTING_DEPTH_BUFFER_STREAM_RESOLUTION_MAX_ENUM = 0x7FFFFFFF
    } XrRemotingDepthBufferStreamResolutionMSFT;

    typedef enum XrRemotingCertificateNameValidationResultMSFT
    {
        XR_REMOTING_CERTIFICATE_NAME_VALIDATION_RESULT_NOT_CHECKED_MSFT = 0,
        XR_REMOTING_CERTIFICATE_NAME_VALIDATION_RESULT_MATCH_MSFT = 1,
        XR_REMOTING_CERTIFICATE_NAME_VALIDATION_RESULT_MISMATCH_MSFT = 2,
        XR_REMOTING_CERTIFICATE_NAME_VALIDATION_RESULT_MAX_ENUM = 0x7FFFFFFF
    } XrRemotingCertificateNameValidationResultMSFT;

    typedef enum XrRemotingDataChannelPriorityMSFT
    {
        XR_REMOTING_DATA_CHANNEL_PRIORITY_LOW_MSFT = 0,
        XR_REMOTING_DATA_CHANNEL_PRIORITY_MEDIUM_MSFT = 1,
        XR_REMOTING_DATA_CHANNEL_PRIORITY_HIGH_MSFT = 2
    } XrRemotingDataChannelPriorityMSFT;

    typedef enum XrRemotingDataChannelClosedReasonMSFT
    {
        XR_REMOTING_DATA_CHANNEL_CLOSED_REASON_PROTOCOL_MSFT = 0,
        XR_REMOTING_DATA_CHANNEL_CLOSED_REASON_ERROR_MSFT = 1
    } XrRemotingDataChannelClosedReasonMSFT;

    typedef enum XrRemotingDataChannelStatusMSFT
    {
        XR_REMOTING_DATA_CHANNEL_STATUS_OPEN_PENDING_MSFT = 0,
        XR_REMOTING_DATA_CHANNEL_STATUS_OPENED_MSFT = 1,
        XR_REMOTING_DATA_CHANNEL_STATUS_CLOSED_MSFT = 2
    } XrRemotingDataChannelStatusMSFT;

    typedef struct XrRemotingRemoteContextPropertiesMSFT
    {
        XrStructureType type;
        void* next;
        uint32_t maxBitrateKbps;
        XrBool32 enableAudio;
        XrRemotingVideoCodecMSFT videoCodec;
        XrRemotingDepthBufferStreamResolutionMSFT depthBufferStreamResolution;
    } XrRemotingRemoteContextPropertiesMSFT;

    typedef struct XrRemotingConnectInfoMSFT
    {
        XrStructureType type;
        void* next;
        const char* remoteHostName;
        uint16_t remotePort;
        XrBool32 secureConnection;
    } XrRemotingConnectInfoMSFT;

    typedef struct XrRemotingListenInfoMSFT
    {
        XrStructureType type;
        void* next;
        const char* listenInterface;
        uint16_t handshakeListenPort;
        uint16_t transportListenPort;
        XrBool32 secureConnection;
    } XrRemotingListenInfoMSFT;

    typedef struct XrRemotingDisconnectInfoMSFT
    {
        XrStructureType type;
        const void* next;
    } XrRemotingDisconnectInfoMSFT;

    typedef struct XrRemotingEventDataListeningMSFT
    {
        XrStructureType type;
        const void* next;
        uint16_t listeningPort;
    } XrEventDataRemoteContextListeningMSFT;

    typedef struct XrRemotingEventDataConnectedMSFT
    {
        XrStructureType type;
        const void* next;
    } XrEventDataRemoteContextConnectedMSFT;

    typedef struct XrRemotingEventDataDisconnectedMSFT
    {
        XrStructureType type;
        const void* next;
        XrRemotingDisconnectReasonMSFT disconnectReason;
    } XrEventDataRemoteContextDisconnectedMSFT;

    typedef struct XrRemotingAuthenticationTokenRequestMSFT
    {
        XrStructureType type;
        const void* next;
        void* context;
        uint32_t tokenCapacityIn;
        uint32_t tokenSizeOut;
        char* tokenBuffer;
    } XrRemotingAuthenticationTokenRequestMSFT;

    typedef struct XrRemotingCertificateDataMSFT
    {
        XrStructureType type;
        const void* next;
        uint32_t size;
        const uint8_t* data;
    } XrRemotingCertificateDataMSFT;

    typedef struct XrRemotingCertificateValidationResultMSFT
    {
        XrStructureType type;
        const void* next;
        XrBool32 trustedRoot;
        XrBool32 revoked;
        XrBool32 expired;
        XrBool32 wrongUsage;
        XrRemotingCertificateNameValidationResultMSFT nameValidationResult;
        XrBool32 revocationCheckFailed;
        XrBool32 invalidCertOrChain;
    } XrRemotingCertificateValidationResultMSFT;

    typedef struct XrRemotingServerCertificateValidationMSFT
    {
        XrStructureType type;
        const void* next;
        void* context;
        const char* hostName;
        XrBool32 forceRevocationCheck;
        uint32_t numCertificates;
        const XrRemotingCertificateDataMSFT* certificates;
        XrRemotingCertificateValidationResultMSFT* systemValidationResult;
        XrRemotingCertificateValidationResultMSFT validationResultOut;
    } XrRemotingServerCertificateValidationMSFT;

    typedef struct XrRemotingAuthenticationTokenValidationMSFT
    {
        XrStructureType type;
        const void* next;
        void* context;
        const char* token;
        XrBool32 tokenValidOut;
    } XrRemotingAuthenticationTokenValidationMSFT;

    typedef struct XrRemotingServerCertificateRequestMSFT
    {
        XrStructureType type;
        const void* next;
        void* context;
        uint32_t certStoreCapacityIn;
        uint32_t certStoreSizeOut;
        uint8_t* certStoreBuffer;
        uint32_t keyPassphraseCapacityIn;
        uint32_t keyPassphraseSizeOut;
        char* keyPassphraseBuffer;
        uint32_t subjectNameCapacityIn;
        uint32_t subjectNameSizeOut;
        char* subjectNameBuffer;
    } XrRemotingServerCertificateRequestMSFT;

    typedef struct XrRemotingDataChannelCreateInfoMSFT
    {
        XrStructureType type;
        const void* next;
        XrRemotingDataChannelPriorityMSFT channelPriority;
        uint8_t channelId;
    } XrRemotingDataChannelCreateInfoMSFT;

    typedef struct XrRemotingDataChannelStateMSFT
    {
        XrStructureType type;
        const void* next;
        uint32_t sendQueueSize;
        XrRemotingDataChannelStatusMSFT connectionStatus;
    } XrRemotingDataChannelStateMSFT;

    typedef struct XrRemotingDataChannelSendDataInfoMSFT
    {
        XrStructureType type;
        const void* next;
        uint8_t* data;
        uint32_t size;
        XrBool32 guaranteedDelivery;
    } XrRemotingDataChannelSendDataInfoMSFT;

    typedef struct XrEventDataRemotingDataChannelCreatedMSFT
    {
        XrStructureType type;
        const void* next;
        uint8_t channelId;
        XrRemotingDataChannelMSFT channel;
    } XrEventDataRemotingDataChannelCreatedMSFT;

    typedef struct XrEventDataRemotingDataChannelOpenedMSFT
    {
        XrStructureType type;
        const void* next;
        XrRemotingDataChannelMSFT channel;
    } XrEventDataRemotingDataChannelOpenedMSFT;

    typedef struct XrEventDataRemotingDataChannelDataReceivedMSFT
    {
        XrStructureType type;
        const void* next;
        XrRemotingDataChannelMSFT channel;
        uint32_t size;
        XrRemotingPacketIdMSFT packetId;
    } XrEventDataRemotingDataChannelDataReceivedMSFT;

    typedef struct XrEventDataRemotingDataChannelClosedMSFT
    {
        XrStructureType type;
        const void* next;
        XrRemotingDataChannelMSFT channel;
        XrRemotingDataChannelClosedReasonMSFT closedReason;
    } XrEventDataRemotingDataChannelClosedMSFT;

    // Secure connection callback functions (typedef only, no prototype)
    typedef XrResult(XRAPI_PTR* PFN_xrRemotingRequestAuthenticationTokenCallbackMSFT)(
        XrRemotingAuthenticationTokenRequestMSFT* authenticationTokenRequest);
    typedef XrResult(XRAPI_PTR* PFN_xrRemotingValidateServerCertificateCallbackMSFT)(
        XrRemotingServerCertificateValidationMSFT* serverCertificateValidation);
    typedef XrResult(XRAPI_PTR* PFN_xrRemotingValidateAuthenticationTokenCallbackMSFT)(
        XrRemotingAuthenticationTokenValidationMSFT* authenticationTokenValidation);
    typedef XrResult(XRAPI_PTR* PFN_xrRemotingRequestServerCertificateCallbackMSFT)(
        XrRemotingServerCertificateRequestMSFT* serverCertificateRequest);

    typedef struct XrRemotingSecureConnectionClientCallbacksMSFT
    {
        XrStructureType type;
        void* next;
        void* context;
        PFN_xrRemotingRequestAuthenticationTokenCallbackMSFT requestAuthenticationTokenCallback;
        PFN_xrRemotingValidateServerCertificateCallbackMSFT validateServerCertificateCallback;
        XrBool32 performSystemValidation;
    } XrRemotingSecureConnectionClientCallbacksMSFT;

    typedef struct XrRemotingSecureConnectionServerCallbacksMSFT
    {
        XrStructureType type;
        void* next;
        void* context;
        PFN_xrRemotingRequestServerCertificateCallbackMSFT requestServerCertificateCallback;
        PFN_xrRemotingValidateAuthenticationTokenCallbackMSFT validateAuthenticationTokenCallback;
        const char* authenticationRealm;
    } XrRemotingSecureConnectionServerCallbacksMSFT;

    // Remoting extension callable functions
    typedef XrResult(XRAPI_PTR* PFN_xrRemotingSetContextPropertiesMSFT)(
        XrInstance instance, XrSystemId systemId, const XrRemotingRemoteContextPropertiesMSFT* contextProperties);
    typedef XrResult(XRAPI_PTR* PFN_xrRemotingConnectMSFT)(
        XrInstance instance, XrSystemId systemId, const XrRemotingConnectInfoMSFT* connectInfo);
    typedef XrResult(XRAPI_PTR* PFN_xrRemotingListenMSFT)(
        XrInstance instance, XrSystemId systemId, const XrRemotingListenInfoMSFT* listenInfo);
    typedef XrResult(XRAPI_PTR* PFN_xrRemotingDisconnectMSFT)(
        XrInstance instance, XrSystemId systemId, const XrRemotingDisconnectInfoMSFT* disconnectInfo);
    typedef XrResult(XRAPI_PTR* PFN_xrRemotingGetConnectionStateMSFT)(
        XrInstance instance,
        XrSystemId systemId,
        XrRemotingConnectionStateMSFT* connectionState,
        XrRemotingDisconnectReasonMSFT* lastDisconnectReason);

    typedef XrResult(XRAPI_PTR* PFN_xrRemotingSetSecureConnectionClientCallbacksMSFT)(
        XrInstance instance, XrSystemId systemId, const XrRemotingSecureConnectionClientCallbacksMSFT* secureConnectionClientCallbacks);
    typedef XrResult(XRAPI_PTR* PFN_xrRemotingSetSecureConnectionServerCallbacksMSFT)(
        XrInstance instance, XrSystemId systemId, const XrRemotingSecureConnectionServerCallbacksMSFT* secureConnectionServerCallbacks);

    typedef XrResult(XRAPI_PTR* PFN_xrCreateRemotingDataChannelMSFT)(
        XrInstance instance,
        XrSystemId systemId,
        const XrRemotingDataChannelCreateInfoMSFT* channelInfo,
        XrRemotingDataChannelMSFT* channel);
    typedef XrResult(XRAPI_PTR* PFN_xrDestroyRemotingDataChannelMSFT)(XrRemotingDataChannelMSFT channel);
    typedef XrResult(XRAPI_PTR* PFN_xrGetRemotingDataChannelStateMSFT)(
        XrRemotingDataChannelMSFT channel, XrRemotingDataChannelStateMSFT* channelState);
    typedef XrResult(XRAPI_PTR* PFN_xrSendRemotingDataMSFT)(
        XrRemotingDataChannelMSFT channel, const XrRemotingDataChannelSendDataInfoMSFT* sendDataInfo);
    typedef XrResult(XRAPI_PTR* PFN_xrRetrieveRemotingDataMSFT)(
        XrRemotingDataChannelMSFT channel,
        XrRemotingPacketIdMSFT packetId,
        uint32_t dataBytesCapacityInput,
        uint32_t* dataBytesCountOutput,
        uint8_t* data);

#ifndef XR_NO_PROTOTYPES
    XRAPI_ATTR XrResult XRAPI_CALL xrRemotingSetContextPropertiesMSFT(
        XrInstance instance, XrSystemId systemId, const XrRemotingRemoteContextPropertiesMSFT* contextProperties);

    XRAPI_ATTR XrResult XRAPI_CALL
        xrRemotingConnectMSFT(XrInstance instance, XrSystemId systemId, const XrRemotingConnectInfoMSFT* connectInfo);

    XRAPI_ATTR XrResult XRAPI_CALL
        xrRemotingListenMSFT(XrInstance instance, XrSystemId systemId, const XrRemotingListenInfoMSFT* listenInfo);

    XRAPI_ATTR XrResult XRAPI_CALL
        xrRemotingDisconnectMSFT(XrInstance instance, XrSystemId systemId, const XrRemotingDisconnectInfoMSFT* disconnectInfo);

    XRAPI_ATTR XrResult XRAPI_CALL xrRemotingGetConnectionStateMSFT(
        XrInstance instance,
        XrSystemId systemId,
        XrRemotingConnectionStateMSFT* connectionState,
        XrRemotingDisconnectReasonMSFT* lastDisconnectReason);

    XRAPI_ATTR XrResult XRAPI_CALL xrRemotingSetSecureConnectionClientCallbacksMSFT(
        XrInstance instance, XrSystemId systemId, const XrRemotingSecureConnectionClientCallbacksMSFT* secureConnectionClientCallbacks);

    XRAPI_ATTR XrResult XRAPI_CALL xrRemotingSetSecureConnectionServerCallbacksMSFT(
        XrInstance instance, XrSystemId systemId, const XrRemotingSecureConnectionServerCallbacksMSFT* secureConnectionServerCallbacks);

    XRAPI_ATTR XrResult XRAPI_CALL xrCreateRemotingDataChannelMSFT(
        XrInstance instance,
        XrSystemId systemId,
        const XrRemotingDataChannelCreateInfoMSFT* channelInfo,
        XrRemotingDataChannelMSFT* channel);

    XRAPI_ATTR XrResult XRAPI_CALL xrDestroyRemotingDataChannelMSFT(XrRemotingDataChannelMSFT channel);

    XRAPI_ATTR XrResult XRAPI_CALL
        xrGetRemotingDataChannelStateMSFT(XrRemotingDataChannelMSFT channel, XrRemotingDataChannelStateMSFT* channelState);

    XRAPI_ATTR XrResult XRAPI_CALL
        xrSendRemotingDataMSFT(XrRemotingDataChannelMSFT channel, const XrRemotingDataChannelSendDataInfoMSFT* sendDataInfo);

    XRAPI_ATTR XrResult XRAPI_CALL xrRetrieveRemotingDataMSFT(
        XrRemotingDataChannelMSFT channel,
        XrRemotingPacketIdMSFT packetId,
        uint32_t dataBytesCapacityInput,
        uint32_t* dataBytesCountOutput,
        uint8_t* dataBytes);
#endif

#ifdef __cplusplus
}
#endif
