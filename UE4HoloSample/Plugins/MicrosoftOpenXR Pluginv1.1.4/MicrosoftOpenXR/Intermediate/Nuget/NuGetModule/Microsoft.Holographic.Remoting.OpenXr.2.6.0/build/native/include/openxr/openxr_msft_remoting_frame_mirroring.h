#pragma once

////////////////////////////////////////////////////////////////////////////////
// Copyright (C) Microsoft Corporation.  All Rights Reserved

#ifdef __cplusplus
extern "C"
{
#endif

#define XR_MSFT_holographic_remoting_frame_mirroring                1
#define XR_MSFT_holographic_remoting_frame_mirroring_SPEC_VERSION   1
#define XR_MSFT_HOLOGRAPHIC_REMOTING_FRAME_MIRRORING_EXTENSION_NAME "XR_MSFT_holographic_remoting_frame_mirroring"

    // Extension number: 101 / Enum subrange base: 100000

    typedef enum RemotingFrameMirroringStructureType
    {
        XR_TYPE_REMOTING_FRAME_MIRROR_IMAGE_D3D11_MSFT = 1000100000,
        XR_TYPE_REMOTING_FRAME_MIRROR_IMAGE_D3D12_MSFT = 1000100001,
        XR_TYPE_REMOTING_FRAME_MIRROR_IMAGE_INFO_MSFT = 1000100002,
        XR_TYPE_REMOTING_FRAME_MIRROR_IMAGE_MAX_ENUM = 0x7FFFFFFF
    } RemotingFrameMirroringStructureType;

    typedef struct XrRemotingFrameMirrorImageBaseHeaderMSFT
    {
        XrStructureType type;
        const void* XR_MAY_ALIAS next;
    } XrRemotingFrameMirrorImageBaseHeaderMSFT;

#ifdef XR_USE_GRAPHICS_API_D3D11
    typedef struct XrRemotingFrameMirrorImageD3D11MSFT
    {
        XrStructureType type;
        const void* XR_MAY_ALIAS next;
        ID3D11Texture2D* texture;
    } XrRemotingFrameMirrorImageD3D11MSFT;
#endif // XR_USE_GRAPHICS_API_D3D11

#ifdef XR_USE_GRAPHICS_API_D3D12
    typedef struct XrRemotingFrameMirrorImageD3D12MSFT
    {
        XrStructureType type;
        const void* XR_MAY_ALIAS next;
        ID3D12Resource* texture;
        D3D12_RESOURCE_STATES stateBefore;
        D3D12_RESOURCE_STATES stateAfter;
    } XrRemotingFrameMirrorImageD3D12MSFT;
#endif // XR_USE_GRAPHICS_API_D3D12

    typedef struct XrRemotingFrameMirrorImageInfoMSFT
    {
        XrStructureType type;
        const void* XR_MAY_ALIAS next;
        const XrRemotingFrameMirrorImageBaseHeaderMSFT* image;
    } XrRemotingFrameMirrorImageInfoMSFT;

#ifdef __cplusplus
}
#endif
