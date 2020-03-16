/***************
CTAG TBD >>to be determined<< is an open source eurorack synthesizer module.

A project conceived within the Creative Technologies Arbeitsgruppe of
Kiel University of Applied Sciences: https://www.creative-technologies.de

(c) 2020 by Robert Manzke. All rights reserved.

The CTAG TBD software is licensed under the GNU General Public License
(GPL 3.0), available here: https://www.gnu.org/licenses/gpl-3.0.txt

The CTAG TBD hardware design is released under the Creative Commons
Attribution-NonCommercial-ShareAlike 4.0 International (CC BY-NC-SA 4.0).
Details here: https://creativecommons.org/licenses/by-nc-sa/4.0/

CTAG TBD is provided "as is" without any express or implied warranties.

License and copyright details for specific submodules are included in their
respective component folders / files if different from this license.
***************/


#include "ctagSoundProcessor.hpp"
#include <atomic>
#include <string>
#include <cmath>

namespace CTAG {
    namespace SP {
        class ctagSoundProcessorStrampDly : public ctagSoundProcessor {
        public:
            void Process(const ProcessData &);

            ~ctagSoundProcessorStrampDly();

            ctagSoundProcessorStrampDly();

            const char *GetCStrID() const;

        private:
            void setParamValueInternal(const string id, const string key, const int val) override;

            void loadPresetInternal() override;

            void mute();

// autogenerated code here
// sectionHpp
const string id = "strampdly";
atomic<int32_t> mode, trig_mode;
atomic<int32_t> freeze, trig_freeze;
atomic<int32_t> bypass, trig_bypass;
atomic<int32_t> length, cv_length;
atomic<int32_t> feedback, cv_feedback;
atomic<int32_t> pan, cv_pan;
atomic<int32_t> wvol, cv_wvol;
atomic<int32_t> dvol, cv_dvol;
atomic<int32_t> gain, cv_gain;
// sectionHpp




            float *bufL, *bufR;
            uint32_t bufLen;
            uint32_t pos;
            float sampleRate, msMaxLength, msLength;
            float fFeedback, fPan, fWetVolume, fDryVolume;
            uint32_t tapOffset;
            float fTapOffset;
            const float mFac = 4.f / M_PI;
        };
    }
}