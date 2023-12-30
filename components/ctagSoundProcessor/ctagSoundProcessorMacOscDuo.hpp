/***************
CTAG TBD >>to be determined<< is an open source eurorack synthesizer module.

A project conceived within the Creative Technologies Arbeitsgruppe of
Kiel University of Applied Sciences: https://www.creative-technologies.de

(c) 2023 by Robert Manzke. All rights reserved.

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

#include "braids/analog_oscillator.h"
#include "braids/signature_waveshaper.h"
#include "braids/macro_oscillator.h"
#include "braids/settings.h"
#include "braids/quantizer.h"
#include "helpers/ctagADSREnv.hpp"
#include "helpers/ctagSineSource.hpp"

namespace CTAG {
    namespace SP {
        class ctagSoundProcessorMacOscDuo : public ctagSoundProcessor {
        public:
            virtual void Process(const ProcessData &) override;
           virtual void Init() override;
            virtual ~ctagSoundProcessorMacOscDuo();

        private:
            virtual void knowYourself() override;

            // private attributes could go here

            // private attributes could go here
            braids::MacroOscillator osc[2];
            braids::SignatureWaveshaper ws[2];
            braids::Quantizer quantizer[2];
            CTAG::SP::HELPERS::ctagADSREnv envelope[2];
            CTAG::SP::HELPERS::ctagADSREnv envelopeHighRes[2];
            CTAG::SP::HELPERS::ctagSineSource lfo;
            CTAG::SP::HELPERS::ctagSineSource lfoHighRes;
            const uint8_t sync1[32] = {0};
            const uint8_t sync2[32] = {0};
            float smoothp0[2] {0.f, 0.f}, smoothp1[2] {0.f, 0.f};
            bool prevTrigger[2] = {false, false};
            const uint16_t bit_reduction_masks[7] = {
                    0xc000,
                    0xe000,
                    0xf000,
                    0xf800,
                    0xff00,
                    0xfff0,
                    0xffff};

            // autogenerated code here
            // sectionHpp
	atomic<int32_t> shape, cv_shape;
	atomic<int32_t> gain1, cv_gain1;
	atomic<int32_t> gain2, cv_gain2;
	atomic<int32_t> pitch1, cv_pitch1;
	atomic<int32_t> pitch2, cv_pitch2;
	atomic<int32_t> tune1, cv_tune1;
	atomic<int32_t> tune2, cv_tune2;
	atomic<int32_t> decimation, cv_decimation;
	atomic<int32_t> bit_reduction, cv_bit_reduction;
	atomic<int32_t> q_scale, cv_q_scale;
	atomic<int32_t> param_0, cv_param_0;
	atomic<int32_t> param_1, cv_param_1;
	atomic<int32_t> waveshaping, cv_waveshaping;
	atomic<int32_t> enableEG1, trig_enableEG1;
	atomic<int32_t> enableEG2, trig_enableEG2;
	atomic<int32_t> attack, cv_attack;
	atomic<int32_t> decay, cv_decay;
	atomic<int32_t> sustain, cv_sustain;
	atomic<int32_t> release, cv_release;
	atomic<int32_t> lfo_f, cv_lfo_f;
	atomic<int32_t> fm_amt1, cv_fm_amt1;
	atomic<int32_t> fm_amt2, cv_fm_amt2;
	atomic<int32_t> am_amt, cv_am_amt;
	atomic<int32_t> p0_amt, cv_p0_amt;
	atomic<int32_t> p1_amt, cv_p1_amt;
	// sectionHpp
        };
    }
}