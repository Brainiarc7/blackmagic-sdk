/* -LICENSE-START-
** Copyright (c) 2020 Blackmagic Design
**  
** Permission is hereby granted, free of charge, to any person or organization 
** obtaining a copy of the software and accompanying documentation (the 
** "Software") to use, reproduce, display, distribute, sub-license, execute, 
** and transmit the Software, and to prepare derivative works of the Software, 
** and to permit third-parties to whom the Software is furnished to do so, in 
** accordance with:
** 
** (1) if the Software is obtained from Blackmagic Design, the End User License 
** Agreement for the Software Development Kit (“EULA”) available at 
** https://www.blackmagicdesign.com/EULA/DeckLinkSDK; or
** 
** (2) if the Software is obtained from any third party, such licensing terms 
** as notified by that third party,
** 
** and all subject to the following:
** 
** (3) the copyright notices in the Software and this entire statement, 
** including the above license grant, this restriction and the following 
** disclaimer, must be included in all copies of the Software, in whole or in 
** part, and all derivative works of the Software, unless such copies or 
** derivative works are solely in the form of machine-executable object code 
** generated by a source language processor.
** 
** (4) THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS 
** OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, 
** FITNESS FOR A PARTICULAR PURPOSE, TITLE AND NON-INFRINGEMENT. IN NO EVENT 
** SHALL THE COPYRIGHT HOLDERS OR ANYONE DISTRIBUTING THE SOFTWARE BE LIABLE 
** FOR ANY DAMAGES OR OTHER LIABILITY, WHETHER IN CONTRACT, TORT OR OTHERWISE, 
** ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER 
** DEALINGS IN THE SOFTWARE.
** 
** A copy of the Software is available free of charge at 
** https://www.blackmagicdesign.com/desktopvideo_sdk under the EULA.
** 
** -LICENSE-END-
*/

#ifndef BMD_DECKLINKAPI_v11_5_H
#define BMD_DECKLINKAPI_v11_5_H

#include "DeckLinkAPI.h"

BMD_CONST REFIID IID_IDeckLinkVideoFrameMetadataExtensions_v11_5	= /* D5973DC9-6432-46D0-8F0B-2496F8A1238F */ {0xD5,0x97,0x3D,0xC9,0x64,0x32,0x46,0xD0,0x8F,0x0B,0x24,0x96,0xF8,0xA1,0x23,0x8F};

/* Enum BMDDeckLinkFrameMetadataID - DeckLink Frame Metadata ID */

typedef uint32_t BMDDeckLinkFrameMetadataID_v11_5;
enum _BMDDeckLinkFrameMetadataID_v11_5 {
    bmdDeckLinkFrameMetadataCintelFilmType_v11_5                       = /* 'cfty' */ 0x63667479,	// Current film type
    bmdDeckLinkFrameMetadataCintelFilmGauge_v11_5                      = /* 'cfga' */ 0x63666761,	// Current film gauge
    bmdDeckLinkFrameMetadataCintelKeykodeLow_v11_5                     = /* 'ckkl' */ 0x636B6B6C,	// Raw keykode value - low 64 bits
    bmdDeckLinkFrameMetadataCintelKeykodeHigh_v11_5                    = /* 'ckkh' */ 0x636B6B68,	// Raw keykode value - high 64 bits
    bmdDeckLinkFrameMetadataCintelTile1Size_v11_5                      = /* 'ct1s' */ 0x63743173,	// Size in bytes of compressed raw tile 1
    bmdDeckLinkFrameMetadataCintelTile2Size_v11_5                      = /* 'ct2s' */ 0x63743273,	// Size in bytes of compressed raw tile 2
    bmdDeckLinkFrameMetadataCintelTile3Size_v11_5                      = /* 'ct3s' */ 0x63743373,	// Size in bytes of compressed raw tile 3
    bmdDeckLinkFrameMetadataCintelTile4Size_v11_5                      = /* 'ct4s' */ 0x63743473,	// Size in bytes of compressed raw tile 4
    bmdDeckLinkFrameMetadataCintelImageWidth_v11_5                     = /* 'IWPx' */ 0x49575078,	// Width in pixels of image
    bmdDeckLinkFrameMetadataCintelImageHeight_v11_5                    = /* 'IHPx' */ 0x49485078,	// Height in pixels of image
    bmdDeckLinkFrameMetadataCintelLinearMaskingRedInRed_v11_5          = /* 'mrir' */ 0x6D726972,	// Red in red linear masking parameter
    bmdDeckLinkFrameMetadataCintelLinearMaskingGreenInRed_v11_5        = /* 'mgir' */ 0x6D676972,	// Green in red linear masking parameter
    bmdDeckLinkFrameMetadataCintelLinearMaskingBlueInRed_v11_5         = /* 'mbir' */ 0x6D626972,	// Blue in red linear masking parameter
    bmdDeckLinkFrameMetadataCintelLinearMaskingRedInGreen_v11_5        = /* 'mrig' */ 0x6D726967,	// Red in green linear masking parameter
    bmdDeckLinkFrameMetadataCintelLinearMaskingGreenInGreen_v11_5      = /* 'mgig' */ 0x6D676967,	// Green in green linear masking parameter
    bmdDeckLinkFrameMetadataCintelLinearMaskingBlueInGreen_v11_5       = /* 'mbig' */ 0x6D626967,	// Blue in green linear masking parameter
    bmdDeckLinkFrameMetadataCintelLinearMaskingRedInBlue_v11_5         = /* 'mrib' */ 0x6D726962,	// Red in blue linear masking parameter
    bmdDeckLinkFrameMetadataCintelLinearMaskingGreenInBlue_v11_5       = /* 'mgib' */ 0x6D676962,	// Green in blue linear masking parameter
    bmdDeckLinkFrameMetadataCintelLinearMaskingBlueInBlue_v11_5        = /* 'mbib' */ 0x6D626962,	// Blue in blue linear masking parameter
    bmdDeckLinkFrameMetadataCintelLogMaskingRedInRed_v11_5             = /* 'mlrr' */ 0x6D6C7272,	// Red in red log masking parameter
    bmdDeckLinkFrameMetadataCintelLogMaskingGreenInRed_v11_5           = /* 'mlgr' */ 0x6D6C6772,	// Green in red log masking parameter
    bmdDeckLinkFrameMetadataCintelLogMaskingBlueInRed_v11_5            = /* 'mlbr' */ 0x6D6C6272,	// Blue in red log masking parameter
    bmdDeckLinkFrameMetadataCintelLogMaskingRedInGreen_v11_5           = /* 'mlrg' */ 0x6D6C7267,	// Red in green log masking parameter
    bmdDeckLinkFrameMetadataCintelLogMaskingGreenInGreen_v11_5         = /* 'mlgg' */ 0x6D6C6767,	// Green in green log masking parameter
    bmdDeckLinkFrameMetadataCintelLogMaskingBlueInGreen_v11_5          = /* 'mlbg' */ 0x6D6C6267,	// Blue in green log masking parameter
    bmdDeckLinkFrameMetadataCintelLogMaskingRedInBlue_v11_5            = /* 'mlrb' */ 0x6D6C7262,	// Red in blue log masking parameter
    bmdDeckLinkFrameMetadataCintelLogMaskingGreenInBlue_v11_5          = /* 'mlgb' */ 0x6D6C6762,	// Green in blue log masking parameter
    bmdDeckLinkFrameMetadataCintelLogMaskingBlueInBlue_v11_5           = /* 'mlbb' */ 0x6D6C6262,	// Blue in blue log masking parameter
    bmdDeckLinkFrameMetadataCintelFilmFrameRate_v11_5                  = /* 'cffr' */ 0x63666672,	// Film frame rate
    bmdDeckLinkFrameMetadataCintelOffsetToApplyHorizontal_v11_5        = /* 'otah' */ 0x6F746168,	// Horizontal offset (pixels) to be applied to image
    bmdDeckLinkFrameMetadataCintelOffsetToApplyVertical_v11_5          = /* 'otav' */ 0x6F746176,	// Vertical offset (pixels) to be applied to image
    bmdDeckLinkFrameMetadataCintelGainRed_v11_5                        = /* 'LfRd' */ 0x4C665264,	// Red gain parameter to apply after log
    bmdDeckLinkFrameMetadataCintelGainGreen_v11_5                      = /* 'LfGr' */ 0x4C664772,	// Green gain parameter to apply after log
    bmdDeckLinkFrameMetadataCintelGainBlue_v11_5                       = /* 'LfBl' */ 0x4C66426C,	// Blue gain parameter to apply after log
    bmdDeckLinkFrameMetadataCintelLiftRed_v11_5                        = /* 'GnRd' */ 0x476E5264,	// Red lift parameter to apply after log and gain
    bmdDeckLinkFrameMetadataCintelLiftGreen_v11_5                      = /* 'GnGr' */ 0x476E4772,	// Green lift parameter to apply after log and gain
    bmdDeckLinkFrameMetadataCintelLiftBlue_v11_5                       = /* 'GnBl' */ 0x476E426C,	// Blue lift parameter to apply after log and gain
    bmdDeckLinkFrameMetadataCintelHDRGainRed_v11_5                     = /* 'HGRd' */ 0x48475264,	// Red gain parameter to apply to linear data for HDR Combination
    bmdDeckLinkFrameMetadataCintelHDRGainGreen_v11_5                   = /* 'HGGr' */ 0x48474772,	// Green gain parameter to apply to linear data for HDR Combination
    bmdDeckLinkFrameMetadataCintelHDRGainBlue_v11_5                    = /* 'HGBl' */ 0x4847426C,	// Blue gain parameter to apply to linear data for HDR Combination
	bmdDeckLinkFrameMetadataCintel16mmCropRequired_v11_5               = /* 'c16c' */ 0x63313663,	// The image should be cropped to 16mm size
    bmdDeckLinkFrameMetadataCintelInversionRequired_v11_5              = /* 'cinv' */ 0x63696E76,	// The image should be colour inverted
    bmdDeckLinkFrameMetadataCintelFlipRequired_v11_5                   = /* 'cflr' */ 0x63666C72,	// The image should be flipped horizontally
    bmdDeckLinkFrameMetadataCintelFocusAssistEnabled_v11_5             = /* 'cfae' */ 0x63666165,	// Focus Assist is currently enabled
    bmdDeckLinkFrameMetadataCintelKeykodeIsInterpolated_v11_5          = /* 'kkii' */ 0x6B6B6969	// The keykode for this frame is interpolated from nearby keykodes
};

/* Interface IDeckLinkVideoFrameMetadataExtensions - Optional interface implemented on IDeckLinkVideoFrame to support frame metadata such as HDMI HDR information */

class BMD_PUBLIC IDeckLinkVideoFrameMetadataExtensions_v11_5 : public IUnknown
{
public:
    virtual HRESULT GetInt (/* in */ BMDDeckLinkFrameMetadataID_v11_5 metadataID, /* out */ int64_t *value) = 0;
    virtual HRESULT GetFloat (/* in */ BMDDeckLinkFrameMetadataID_v11_5 metadataID, /* out */ double *value) = 0;
    virtual HRESULT GetFlag (/* in */ BMDDeckLinkFrameMetadataID_v11_5 metadataID, /* out */ bool* value) = 0;
    virtual HRESULT GetString (/* in */ BMDDeckLinkFrameMetadataID_v11_5 metadataID, /* out */ const char **value) = 0;

protected:
    virtual ~IDeckLinkVideoFrameMetadataExtensions_v11_5 () {} // call Release method to drop reference count
};

#endif /* defined(BMD_DECKLINKAPI_v11_5_H) */
