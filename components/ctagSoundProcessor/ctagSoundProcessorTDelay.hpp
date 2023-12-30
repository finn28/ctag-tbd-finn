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
#include "airwindows/TDelay.hpp"

namespace CTAG {
    namespace SP {
        class ctagSoundProcessorTDelay : public ctagSoundProcessor {
        public:
            virtual void Process(const ProcessData &) override;
           virtual void Init() override;
            virtual ~ctagSoundProcessorTDelay();

        private:
            virtual void knowYourself() override;
            airwindows::TDelay tdelay;
            float preDelay = 0.f;
            float preDepth = 0.f;
            float preLNFT = 0.f;
            // private attributes could go here
            // autogenerated code here
            // sectionHpp
	atomic<int32_t> bypass, trig_bypass;
	atomic<int32_t> depth, cv_depth;
	atomic<int32_t> delay, cv_delay;
	atomic<int32_t> feedback, cv_feedback;
	atomic<int32_t> lnft, cv_lnft;
	atomic<int32_t> dry, cv_dry;
	atomic<int32_t> wet, cv_wet;
	// sectionHpp
        };
    }
}