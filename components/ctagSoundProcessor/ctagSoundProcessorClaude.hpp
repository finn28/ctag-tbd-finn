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
#include "clouds/dsp/granular_processor.h"

namespace CTAG {
    namespace SP {
        class ctagSoundProcessorClaude : public ctagSoundProcessor {
        public:
            virtual void Process(const ProcessData &) override;
           virtual void Init() override;
            virtual ~ctagSoundProcessorClaude();

        private:
            virtual void knowYourself() override;
            clouds::GranularProcessor processor;
            const int memLen = 112640;
            //const int memLen = 118784;
            //const int memLen = 44100*2*2;
            const int ccmLen = 65536 - 128;
            uint8_t* block_mem;
            uint8_t* block_ccm;
            bool preTrigger = false;
            bool isTriggered = false;

            // private attributes could go here
            // autogenerated code here
            // sectionHpp
	atomic<int32_t> trigger, trig_trigger;
	atomic<int32_t> freeze, trig_freeze;
	atomic<int32_t> reverse, trig_reverse;
	atomic<int32_t> mode, cv_mode;
	atomic<int32_t> quality, cv_quality;
	atomic<int32_t> position, cv_position;
	atomic<int32_t> size, cv_size;
	atomic<int32_t> pitch, cv_pitch;
	atomic<int32_t> density, cv_density;
	atomic<int32_t> texture, cv_texture;
	atomic<int32_t> feedback, cv_feedback;
	atomic<int32_t> width, cv_width;
	atomic<int32_t> reverb, cv_reverb;
	atomic<int32_t> drywet, cv_drywet;
	// sectionHpp
        };
    }
}