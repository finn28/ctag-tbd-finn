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

#include <atomic>
#include "ctagSoundProcessor.hpp"
#include "filters/ctagDiodeLadderFilter.hpp"
#include "filters/ctagDiodeLadderFilter2.hpp"
#include "filters/ctagDiodeLadderFilter3.hpp"
#include "filters/ctagDiodeLadderFilter4.hpp"
#include "filters/ctagDiodeLadderFilter5.hpp"
#include "filters//ctagFilterBase.hpp"
#include "braids/analog_oscillator.h"
#include "braids/signature_waveshaper.h"
#include "braids/macro_oscillator.h"
#include "braids/settings.h"
#include "helpers/ctagADEnv.hpp"

using namespace CTAG::SP::HELPERS;

namespace CTAG {
    namespace SP {
        class ctagSoundProcessorTBD03 : public ctagSoundProcessor {
        public:
            virtual void Process(const ProcessData &) override;

           virtual void Init() override;

        private:

            virtual void knowYourself() override;

            // private attributes could go here
            std::unique_ptr<ctagFilterBase> filt[5];
            ctagADEnv adVCA, adVCF;
            braids::MacroOscillator osc;
            braids::SignatureWaveshaper ws;
            uint8_t sync[32] = {0};
            bool pre_trig = false;
            bool isAccent = false;
            float pre_eg_val = 0.f;
            float pre_pitch_val = 0.f;
            // autogenerated code here
// sectionHpp
	atomic<int32_t> trigger, trig_trigger;
	atomic<int32_t> sync_trig, trig_sync_trig;
	atomic<int32_t> pitch, cv_pitch;
	atomic<int32_t> shape, cv_shape;
	atomic<int32_t> param_0, cv_param_0;
	atomic<int32_t> param_1, cv_param_1;
	atomic<int32_t> gain, cv_gain;
	atomic<int32_t> filter_type, cv_filter_type;
	atomic<int32_t> cutoff, cv_cutoff;
	atomic<int32_t> resonance, cv_resonance;
	atomic<int32_t> envelope, cv_envelope;
	atomic<int32_t> saturation, cv_saturation;
	atomic<int32_t> drive, cv_drive;
	atomic<int32_t> accent, trig_accent;
	atomic<int32_t> accent_level, cv_accent_level;
	atomic<int32_t> slide, trig_slide;
	atomic<int32_t> slide_level, cv_slide_level;
	atomic<int32_t> decay_vca, cv_decay_vca;
	atomic<int32_t> decay_vcf, cv_decay_vcf;
	atomic<int32_t> p0_amt, cv_p0_amt;
	atomic<int32_t> p1_amt, cv_p1_amt;
	// sectionHpp
        };
    }
}