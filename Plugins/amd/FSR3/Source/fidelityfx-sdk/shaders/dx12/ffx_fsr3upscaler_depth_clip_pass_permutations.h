#include "ffx_fsr3upscaler_depth_clip_pass_6115006ed66fc2bde3890c76e349d15c.h"
#include "ffx_fsr3upscaler_depth_clip_pass_5d5a7ab5d5522dde4eb03bca426949d0.h"
#include "ffx_fsr3upscaler_depth_clip_pass_fa05276fcb3f840703361c4410938c92.h"
#include "ffx_fsr3upscaler_depth_clip_pass_5017ac480c5c4ed736eb9fd65c23d22b.h"
#include "ffx_fsr3upscaler_depth_clip_pass_1c56ac076161be2de47682d35507439a.h"
#include "ffx_fsr3upscaler_depth_clip_pass_939e99b53a59a6e3ade552bf0bab8b94.h"
#include "ffx_fsr3upscaler_depth_clip_pass_da349cc79c4358c2e655cc3eaac52325.h"
#include "ffx_fsr3upscaler_depth_clip_pass_083c02a59706deeec4a321871872363a.h"

typedef union ffx_fsr3upscaler_depth_clip_pass_PermutationKey {
    struct {
        uint32_t FFX_FSR3UPSCALER_OPTION_REPROJECT_USE_LANCZOS_TYPE : 1;
        uint32_t FFX_FSR3UPSCALER_OPTION_HDR_COLOR_INPUT : 1;
        uint32_t FFX_FSR3UPSCALER_OPTION_LOW_RESOLUTION_MOTION_VECTORS : 1;
        uint32_t FFX_FSR3UPSCALER_OPTION_JITTERED_MOTION_VECTORS : 1;
        uint32_t FFX_FSR3UPSCALER_OPTION_INVERTED_DEPTH : 1;
        uint32_t FFX_FSR3UPSCALER_OPTION_APPLY_SHARPENING : 1;
    };
    uint32_t index;
} ffx_fsr3upscaler_depth_clip_pass_PermutationKey;

typedef struct ffx_fsr3upscaler_depth_clip_pass_PermutationInfo {
    const uint32_t       blobSize;
    const unsigned char* blobData;


    const uint32_t  numConstantBuffers;
    const char**    constantBufferNames;
    const uint32_t* constantBufferBindings;
    const uint32_t* constantBufferCounts;
    const uint32_t* constantBufferSpaces;

    const uint32_t  numSRVTextures;
    const char**    srvTextureNames;
    const uint32_t* srvTextureBindings;
    const uint32_t* srvTextureCounts;
    const uint32_t* srvTextureSpaces;

    const uint32_t  numUAVTextures;
    const char**    uavTextureNames;
    const uint32_t* uavTextureBindings;
    const uint32_t* uavTextureCounts;
    const uint32_t* uavTextureSpaces;

    const uint32_t  numSRVBuffers;
    const char**    srvBufferNames;
    const uint32_t* srvBufferBindings;
    const uint32_t* srvBufferCounts;
    const uint32_t* srvBufferSpaces;

    const uint32_t  numUAVBuffers;
    const char**    uavBufferNames;
    const uint32_t* uavBufferBindings;
    const uint32_t* uavBufferCounts;
    const uint32_t* uavBufferSpaces;

    const uint32_t  numSamplers;
    const char**    samplerNames;
    const uint32_t* samplerBindings;
    const uint32_t* samplerCounts;
    const uint32_t* samplerSpaces;

    const uint32_t  numRTAccelerationStructures;
    const char**    rtAccelerationStructureNames;
    const uint32_t* rtAccelerationStructureBindings;
    const uint32_t* rtAccelerationStructureCounts;
    const uint32_t* rtAccelerationStructureSpaces;
} ffx_fsr3upscaler_depth_clip_pass_PermutationInfo;

static const uint32_t g_ffx_fsr3upscaler_depth_clip_pass_IndirectionTable[] = {
    2,
    2,
    2,
    2,
    5,
    5,
    5,
    5,
    0,
    0,
    0,
    0,
    1,
    1,
    1,
    1,
    7,
    7,
    7,
    7,
    3,
    3,
    3,
    3,
    4,
    4,
    4,
    4,
    6,
    6,
    6,
    6,
    2,
    2,
    2,
    2,
    5,
    5,
    5,
    5,
    0,
    0,
    0,
    0,
    1,
    1,
    1,
    1,
    7,
    7,
    7,
    7,
    3,
    3,
    3,
    3,
    4,
    4,
    4,
    4,
    6,
    6,
    6,
    6,
};

static const ffx_fsr3upscaler_depth_clip_pass_PermutationInfo g_ffx_fsr3upscaler_depth_clip_pass_PermutationInfo[] = {
    { g_ffx_fsr3upscaler_depth_clip_pass_6115006ed66fc2bde3890c76e349d15c_size, g_ffx_fsr3upscaler_depth_clip_pass_6115006ed66fc2bde3890c76e349d15c_data, 1, g_ffx_fsr3upscaler_depth_clip_pass_6115006ed66fc2bde3890c76e349d15c_CBVResourceNames, g_ffx_fsr3upscaler_depth_clip_pass_6115006ed66fc2bde3890c76e349d15c_CBVResourceBindings, g_ffx_fsr3upscaler_depth_clip_pass_6115006ed66fc2bde3890c76e349d15c_CBVResourceCounts, g_ffx_fsr3upscaler_depth_clip_pass_6115006ed66fc2bde3890c76e349d15c_CBVResourceSpaces, 9, g_ffx_fsr3upscaler_depth_clip_pass_6115006ed66fc2bde3890c76e349d15c_TextureSRVResourceNames, g_ffx_fsr3upscaler_depth_clip_pass_6115006ed66fc2bde3890c76e349d15c_TextureSRVResourceBindings, g_ffx_fsr3upscaler_depth_clip_pass_6115006ed66fc2bde3890c76e349d15c_TextureSRVResourceCounts, g_ffx_fsr3upscaler_depth_clip_pass_6115006ed66fc2bde3890c76e349d15c_TextureSRVResourceSpaces, 2, g_ffx_fsr3upscaler_depth_clip_pass_6115006ed66fc2bde3890c76e349d15c_TextureUAVResourceNames, g_ffx_fsr3upscaler_depth_clip_pass_6115006ed66fc2bde3890c76e349d15c_TextureUAVResourceBindings, g_ffx_fsr3upscaler_depth_clip_pass_6115006ed66fc2bde3890c76e349d15c_TextureUAVResourceCounts, g_ffx_fsr3upscaler_depth_clip_pass_6115006ed66fc2bde3890c76e349d15c_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, g_ffx_fsr3upscaler_depth_clip_pass_6115006ed66fc2bde3890c76e349d15c_SamplerResourceNames, g_ffx_fsr3upscaler_depth_clip_pass_6115006ed66fc2bde3890c76e349d15c_SamplerResourceBindings, g_ffx_fsr3upscaler_depth_clip_pass_6115006ed66fc2bde3890c76e349d15c_SamplerResourceCounts, g_ffx_fsr3upscaler_depth_clip_pass_6115006ed66fc2bde3890c76e349d15c_SamplerResourceSpaces, 0, 0, 0, 0, 0, },
    { g_ffx_fsr3upscaler_depth_clip_pass_5d5a7ab5d5522dde4eb03bca426949d0_size, g_ffx_fsr3upscaler_depth_clip_pass_5d5a7ab5d5522dde4eb03bca426949d0_data, 1, g_ffx_fsr3upscaler_depth_clip_pass_5d5a7ab5d5522dde4eb03bca426949d0_CBVResourceNames, g_ffx_fsr3upscaler_depth_clip_pass_5d5a7ab5d5522dde4eb03bca426949d0_CBVResourceBindings, g_ffx_fsr3upscaler_depth_clip_pass_5d5a7ab5d5522dde4eb03bca426949d0_CBVResourceCounts, g_ffx_fsr3upscaler_depth_clip_pass_5d5a7ab5d5522dde4eb03bca426949d0_CBVResourceSpaces, 9, g_ffx_fsr3upscaler_depth_clip_pass_5d5a7ab5d5522dde4eb03bca426949d0_TextureSRVResourceNames, g_ffx_fsr3upscaler_depth_clip_pass_5d5a7ab5d5522dde4eb03bca426949d0_TextureSRVResourceBindings, g_ffx_fsr3upscaler_depth_clip_pass_5d5a7ab5d5522dde4eb03bca426949d0_TextureSRVResourceCounts, g_ffx_fsr3upscaler_depth_clip_pass_5d5a7ab5d5522dde4eb03bca426949d0_TextureSRVResourceSpaces, 2, g_ffx_fsr3upscaler_depth_clip_pass_5d5a7ab5d5522dde4eb03bca426949d0_TextureUAVResourceNames, g_ffx_fsr3upscaler_depth_clip_pass_5d5a7ab5d5522dde4eb03bca426949d0_TextureUAVResourceBindings, g_ffx_fsr3upscaler_depth_clip_pass_5d5a7ab5d5522dde4eb03bca426949d0_TextureUAVResourceCounts, g_ffx_fsr3upscaler_depth_clip_pass_5d5a7ab5d5522dde4eb03bca426949d0_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, g_ffx_fsr3upscaler_depth_clip_pass_5d5a7ab5d5522dde4eb03bca426949d0_SamplerResourceNames, g_ffx_fsr3upscaler_depth_clip_pass_5d5a7ab5d5522dde4eb03bca426949d0_SamplerResourceBindings, g_ffx_fsr3upscaler_depth_clip_pass_5d5a7ab5d5522dde4eb03bca426949d0_SamplerResourceCounts, g_ffx_fsr3upscaler_depth_clip_pass_5d5a7ab5d5522dde4eb03bca426949d0_SamplerResourceSpaces, 0, 0, 0, 0, 0, },
    { g_ffx_fsr3upscaler_depth_clip_pass_fa05276fcb3f840703361c4410938c92_size, g_ffx_fsr3upscaler_depth_clip_pass_fa05276fcb3f840703361c4410938c92_data, 1, g_ffx_fsr3upscaler_depth_clip_pass_fa05276fcb3f840703361c4410938c92_CBVResourceNames, g_ffx_fsr3upscaler_depth_clip_pass_fa05276fcb3f840703361c4410938c92_CBVResourceBindings, g_ffx_fsr3upscaler_depth_clip_pass_fa05276fcb3f840703361c4410938c92_CBVResourceCounts, g_ffx_fsr3upscaler_depth_clip_pass_fa05276fcb3f840703361c4410938c92_CBVResourceSpaces, 9, g_ffx_fsr3upscaler_depth_clip_pass_fa05276fcb3f840703361c4410938c92_TextureSRVResourceNames, g_ffx_fsr3upscaler_depth_clip_pass_fa05276fcb3f840703361c4410938c92_TextureSRVResourceBindings, g_ffx_fsr3upscaler_depth_clip_pass_fa05276fcb3f840703361c4410938c92_TextureSRVResourceCounts, g_ffx_fsr3upscaler_depth_clip_pass_fa05276fcb3f840703361c4410938c92_TextureSRVResourceSpaces, 2, g_ffx_fsr3upscaler_depth_clip_pass_fa05276fcb3f840703361c4410938c92_TextureUAVResourceNames, g_ffx_fsr3upscaler_depth_clip_pass_fa05276fcb3f840703361c4410938c92_TextureUAVResourceBindings, g_ffx_fsr3upscaler_depth_clip_pass_fa05276fcb3f840703361c4410938c92_TextureUAVResourceCounts, g_ffx_fsr3upscaler_depth_clip_pass_fa05276fcb3f840703361c4410938c92_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, g_ffx_fsr3upscaler_depth_clip_pass_fa05276fcb3f840703361c4410938c92_SamplerResourceNames, g_ffx_fsr3upscaler_depth_clip_pass_fa05276fcb3f840703361c4410938c92_SamplerResourceBindings, g_ffx_fsr3upscaler_depth_clip_pass_fa05276fcb3f840703361c4410938c92_SamplerResourceCounts, g_ffx_fsr3upscaler_depth_clip_pass_fa05276fcb3f840703361c4410938c92_SamplerResourceSpaces, 0, 0, 0, 0, 0, },
    { g_ffx_fsr3upscaler_depth_clip_pass_5017ac480c5c4ed736eb9fd65c23d22b_size, g_ffx_fsr3upscaler_depth_clip_pass_5017ac480c5c4ed736eb9fd65c23d22b_data, 1, g_ffx_fsr3upscaler_depth_clip_pass_5017ac480c5c4ed736eb9fd65c23d22b_CBVResourceNames, g_ffx_fsr3upscaler_depth_clip_pass_5017ac480c5c4ed736eb9fd65c23d22b_CBVResourceBindings, g_ffx_fsr3upscaler_depth_clip_pass_5017ac480c5c4ed736eb9fd65c23d22b_CBVResourceCounts, g_ffx_fsr3upscaler_depth_clip_pass_5017ac480c5c4ed736eb9fd65c23d22b_CBVResourceSpaces, 9, g_ffx_fsr3upscaler_depth_clip_pass_5017ac480c5c4ed736eb9fd65c23d22b_TextureSRVResourceNames, g_ffx_fsr3upscaler_depth_clip_pass_5017ac480c5c4ed736eb9fd65c23d22b_TextureSRVResourceBindings, g_ffx_fsr3upscaler_depth_clip_pass_5017ac480c5c4ed736eb9fd65c23d22b_TextureSRVResourceCounts, g_ffx_fsr3upscaler_depth_clip_pass_5017ac480c5c4ed736eb9fd65c23d22b_TextureSRVResourceSpaces, 2, g_ffx_fsr3upscaler_depth_clip_pass_5017ac480c5c4ed736eb9fd65c23d22b_TextureUAVResourceNames, g_ffx_fsr3upscaler_depth_clip_pass_5017ac480c5c4ed736eb9fd65c23d22b_TextureUAVResourceBindings, g_ffx_fsr3upscaler_depth_clip_pass_5017ac480c5c4ed736eb9fd65c23d22b_TextureUAVResourceCounts, g_ffx_fsr3upscaler_depth_clip_pass_5017ac480c5c4ed736eb9fd65c23d22b_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, g_ffx_fsr3upscaler_depth_clip_pass_5017ac480c5c4ed736eb9fd65c23d22b_SamplerResourceNames, g_ffx_fsr3upscaler_depth_clip_pass_5017ac480c5c4ed736eb9fd65c23d22b_SamplerResourceBindings, g_ffx_fsr3upscaler_depth_clip_pass_5017ac480c5c4ed736eb9fd65c23d22b_SamplerResourceCounts, g_ffx_fsr3upscaler_depth_clip_pass_5017ac480c5c4ed736eb9fd65c23d22b_SamplerResourceSpaces, 0, 0, 0, 0, 0, },
    { g_ffx_fsr3upscaler_depth_clip_pass_1c56ac076161be2de47682d35507439a_size, g_ffx_fsr3upscaler_depth_clip_pass_1c56ac076161be2de47682d35507439a_data, 1, g_ffx_fsr3upscaler_depth_clip_pass_1c56ac076161be2de47682d35507439a_CBVResourceNames, g_ffx_fsr3upscaler_depth_clip_pass_1c56ac076161be2de47682d35507439a_CBVResourceBindings, g_ffx_fsr3upscaler_depth_clip_pass_1c56ac076161be2de47682d35507439a_CBVResourceCounts, g_ffx_fsr3upscaler_depth_clip_pass_1c56ac076161be2de47682d35507439a_CBVResourceSpaces, 9, g_ffx_fsr3upscaler_depth_clip_pass_1c56ac076161be2de47682d35507439a_TextureSRVResourceNames, g_ffx_fsr3upscaler_depth_clip_pass_1c56ac076161be2de47682d35507439a_TextureSRVResourceBindings, g_ffx_fsr3upscaler_depth_clip_pass_1c56ac076161be2de47682d35507439a_TextureSRVResourceCounts, g_ffx_fsr3upscaler_depth_clip_pass_1c56ac076161be2de47682d35507439a_TextureSRVResourceSpaces, 2, g_ffx_fsr3upscaler_depth_clip_pass_1c56ac076161be2de47682d35507439a_TextureUAVResourceNames, g_ffx_fsr3upscaler_depth_clip_pass_1c56ac076161be2de47682d35507439a_TextureUAVResourceBindings, g_ffx_fsr3upscaler_depth_clip_pass_1c56ac076161be2de47682d35507439a_TextureUAVResourceCounts, g_ffx_fsr3upscaler_depth_clip_pass_1c56ac076161be2de47682d35507439a_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, g_ffx_fsr3upscaler_depth_clip_pass_1c56ac076161be2de47682d35507439a_SamplerResourceNames, g_ffx_fsr3upscaler_depth_clip_pass_1c56ac076161be2de47682d35507439a_SamplerResourceBindings, g_ffx_fsr3upscaler_depth_clip_pass_1c56ac076161be2de47682d35507439a_SamplerResourceCounts, g_ffx_fsr3upscaler_depth_clip_pass_1c56ac076161be2de47682d35507439a_SamplerResourceSpaces, 0, 0, 0, 0, 0, },
    { g_ffx_fsr3upscaler_depth_clip_pass_939e99b53a59a6e3ade552bf0bab8b94_size, g_ffx_fsr3upscaler_depth_clip_pass_939e99b53a59a6e3ade552bf0bab8b94_data, 1, g_ffx_fsr3upscaler_depth_clip_pass_939e99b53a59a6e3ade552bf0bab8b94_CBVResourceNames, g_ffx_fsr3upscaler_depth_clip_pass_939e99b53a59a6e3ade552bf0bab8b94_CBVResourceBindings, g_ffx_fsr3upscaler_depth_clip_pass_939e99b53a59a6e3ade552bf0bab8b94_CBVResourceCounts, g_ffx_fsr3upscaler_depth_clip_pass_939e99b53a59a6e3ade552bf0bab8b94_CBVResourceSpaces, 9, g_ffx_fsr3upscaler_depth_clip_pass_939e99b53a59a6e3ade552bf0bab8b94_TextureSRVResourceNames, g_ffx_fsr3upscaler_depth_clip_pass_939e99b53a59a6e3ade552bf0bab8b94_TextureSRVResourceBindings, g_ffx_fsr3upscaler_depth_clip_pass_939e99b53a59a6e3ade552bf0bab8b94_TextureSRVResourceCounts, g_ffx_fsr3upscaler_depth_clip_pass_939e99b53a59a6e3ade552bf0bab8b94_TextureSRVResourceSpaces, 2, g_ffx_fsr3upscaler_depth_clip_pass_939e99b53a59a6e3ade552bf0bab8b94_TextureUAVResourceNames, g_ffx_fsr3upscaler_depth_clip_pass_939e99b53a59a6e3ade552bf0bab8b94_TextureUAVResourceBindings, g_ffx_fsr3upscaler_depth_clip_pass_939e99b53a59a6e3ade552bf0bab8b94_TextureUAVResourceCounts, g_ffx_fsr3upscaler_depth_clip_pass_939e99b53a59a6e3ade552bf0bab8b94_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, g_ffx_fsr3upscaler_depth_clip_pass_939e99b53a59a6e3ade552bf0bab8b94_SamplerResourceNames, g_ffx_fsr3upscaler_depth_clip_pass_939e99b53a59a6e3ade552bf0bab8b94_SamplerResourceBindings, g_ffx_fsr3upscaler_depth_clip_pass_939e99b53a59a6e3ade552bf0bab8b94_SamplerResourceCounts, g_ffx_fsr3upscaler_depth_clip_pass_939e99b53a59a6e3ade552bf0bab8b94_SamplerResourceSpaces, 0, 0, 0, 0, 0, },
    { g_ffx_fsr3upscaler_depth_clip_pass_da349cc79c4358c2e655cc3eaac52325_size, g_ffx_fsr3upscaler_depth_clip_pass_da349cc79c4358c2e655cc3eaac52325_data, 1, g_ffx_fsr3upscaler_depth_clip_pass_da349cc79c4358c2e655cc3eaac52325_CBVResourceNames, g_ffx_fsr3upscaler_depth_clip_pass_da349cc79c4358c2e655cc3eaac52325_CBVResourceBindings, g_ffx_fsr3upscaler_depth_clip_pass_da349cc79c4358c2e655cc3eaac52325_CBVResourceCounts, g_ffx_fsr3upscaler_depth_clip_pass_da349cc79c4358c2e655cc3eaac52325_CBVResourceSpaces, 9, g_ffx_fsr3upscaler_depth_clip_pass_da349cc79c4358c2e655cc3eaac52325_TextureSRVResourceNames, g_ffx_fsr3upscaler_depth_clip_pass_da349cc79c4358c2e655cc3eaac52325_TextureSRVResourceBindings, g_ffx_fsr3upscaler_depth_clip_pass_da349cc79c4358c2e655cc3eaac52325_TextureSRVResourceCounts, g_ffx_fsr3upscaler_depth_clip_pass_da349cc79c4358c2e655cc3eaac52325_TextureSRVResourceSpaces, 2, g_ffx_fsr3upscaler_depth_clip_pass_da349cc79c4358c2e655cc3eaac52325_TextureUAVResourceNames, g_ffx_fsr3upscaler_depth_clip_pass_da349cc79c4358c2e655cc3eaac52325_TextureUAVResourceBindings, g_ffx_fsr3upscaler_depth_clip_pass_da349cc79c4358c2e655cc3eaac52325_TextureUAVResourceCounts, g_ffx_fsr3upscaler_depth_clip_pass_da349cc79c4358c2e655cc3eaac52325_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, g_ffx_fsr3upscaler_depth_clip_pass_da349cc79c4358c2e655cc3eaac52325_SamplerResourceNames, g_ffx_fsr3upscaler_depth_clip_pass_da349cc79c4358c2e655cc3eaac52325_SamplerResourceBindings, g_ffx_fsr3upscaler_depth_clip_pass_da349cc79c4358c2e655cc3eaac52325_SamplerResourceCounts, g_ffx_fsr3upscaler_depth_clip_pass_da349cc79c4358c2e655cc3eaac52325_SamplerResourceSpaces, 0, 0, 0, 0, 0, },
    { g_ffx_fsr3upscaler_depth_clip_pass_083c02a59706deeec4a321871872363a_size, g_ffx_fsr3upscaler_depth_clip_pass_083c02a59706deeec4a321871872363a_data, 1, g_ffx_fsr3upscaler_depth_clip_pass_083c02a59706deeec4a321871872363a_CBVResourceNames, g_ffx_fsr3upscaler_depth_clip_pass_083c02a59706deeec4a321871872363a_CBVResourceBindings, g_ffx_fsr3upscaler_depth_clip_pass_083c02a59706deeec4a321871872363a_CBVResourceCounts, g_ffx_fsr3upscaler_depth_clip_pass_083c02a59706deeec4a321871872363a_CBVResourceSpaces, 9, g_ffx_fsr3upscaler_depth_clip_pass_083c02a59706deeec4a321871872363a_TextureSRVResourceNames, g_ffx_fsr3upscaler_depth_clip_pass_083c02a59706deeec4a321871872363a_TextureSRVResourceBindings, g_ffx_fsr3upscaler_depth_clip_pass_083c02a59706deeec4a321871872363a_TextureSRVResourceCounts, g_ffx_fsr3upscaler_depth_clip_pass_083c02a59706deeec4a321871872363a_TextureSRVResourceSpaces, 2, g_ffx_fsr3upscaler_depth_clip_pass_083c02a59706deeec4a321871872363a_TextureUAVResourceNames, g_ffx_fsr3upscaler_depth_clip_pass_083c02a59706deeec4a321871872363a_TextureUAVResourceBindings, g_ffx_fsr3upscaler_depth_clip_pass_083c02a59706deeec4a321871872363a_TextureUAVResourceCounts, g_ffx_fsr3upscaler_depth_clip_pass_083c02a59706deeec4a321871872363a_TextureUAVResourceSpaces, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, g_ffx_fsr3upscaler_depth_clip_pass_083c02a59706deeec4a321871872363a_SamplerResourceNames, g_ffx_fsr3upscaler_depth_clip_pass_083c02a59706deeec4a321871872363a_SamplerResourceBindings, g_ffx_fsr3upscaler_depth_clip_pass_083c02a59706deeec4a321871872363a_SamplerResourceCounts, g_ffx_fsr3upscaler_depth_clip_pass_083c02a59706deeec4a321871872363a_SamplerResourceSpaces, 0, 0, 0, 0, 0, },
};

