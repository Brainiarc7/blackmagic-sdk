/* -LICENSE-START-
** Copyright (c) 2017 Blackmagic Design
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

#ifndef BMD_DECKLINKAPIVIDEOENCODERINPUT_v10_11_H
#define BMD_DECKLINKAPIVIDEOENCODERINPUT_v10_11_H

#include "DeckLinkAPI.h"
#include "DeckLinkAPI_v10_11.h"

// Type Declarations
BMD_CONST REFIID IID_IDeckLinkEncoderInput_v10_11                        = /* 270587DA-6B7D-42E7-A1F0-6D853F581185 */ {0x27,0x05,0x87,0xDA,0x6B,0x7D,0x42,0xE7,0xA1,0xF0,0x6D,0x85,0x3F,0x58,0x11,0x85};

/* Interface IDeckLinkEncoderInput_v10_11 - Created by QueryInterface from IDeckLink. */

class IDeckLinkEncoderInput_v10_11 : public IUnknown
{
public:
    virtual HRESULT DoesSupportVideoMode (/* in */ BMDDisplayMode displayMode, /* in */ BMDPixelFormat pixelFormat, /* in */ BMDVideoInputFlags flags, /* out */ BMDDisplayModeSupport_v10_11 *result, /* out */ IDeckLinkDisplayMode **resultDisplayMode) = 0;
    virtual HRESULT GetDisplayModeIterator (/* out */ IDeckLinkDisplayModeIterator **iterator) = 0;

    /* Video Input */

    virtual HRESULT EnableVideoInput (/* in */ BMDDisplayMode displayMode, /* in */ BMDPixelFormat pixelFormat, /* in */ BMDVideoInputFlags flags) = 0;
    virtual HRESULT DisableVideoInput (void) = 0;
    virtual HRESULT GetAvailablePacketsCount (/* out */ uint32_t *availablePacketsCount) = 0;
    virtual HRESULT SetMemoryAllocator (/* in */ IDeckLinkMemoryAllocator *theAllocator) = 0;

    /* Audio Input */

    virtual HRESULT EnableAudioInput (/* in */ BMDAudioFormat audioFormat, /* in */ BMDAudioSampleRate sampleRate, /* in */ BMDAudioSampleType sampleType, /* in */ uint32_t channelCount) = 0;
    virtual HRESULT DisableAudioInput (void) = 0;
    virtual HRESULT GetAvailableAudioSampleFrameCount (/* out */ uint32_t *availableSampleFrameCount) = 0;

    /* Input Control */

    virtual HRESULT StartStreams (void) = 0;
    virtual HRESULT StopStreams (void) = 0;
    virtual HRESULT PauseStreams (void) = 0;
    virtual HRESULT FlushStreams (void) = 0;
    virtual HRESULT SetCallback (/* in */ IDeckLinkEncoderInputCallback *theCallback) = 0;

    /* Hardware Timing */

    virtual HRESULT GetHardwareReferenceClock (/* in */ BMDTimeScale desiredTimeScale, /* out */ BMDTimeValue *hardwareTime, /* out */ BMDTimeValue *timeInFrame, /* out */ BMDTimeValue *ticksPerFrame) = 0;

protected:
    virtual ~IDeckLinkEncoderInput_v10_11 () {} // call Release method to drop reference count
};

#endif /* defined(BMD_DECKLINKAPIVIDEOENCODERINPUT_v10_11_H) */
