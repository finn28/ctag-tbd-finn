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
#include "mifx/chorus.h"

namespace CTAG {
    namespace SP {
        class ctagSoundProcessorMIChorus : public ctagSoundProcessor {
        public:
            virtual void Process(const ProcessData &) override;

            ~ctagSoundProcessorMIChorus();

           virtual void Init() override;

        private:

            virtual void knowYourself() override;

            // private attributes could go here
            mifx::Chorus fx;
            float *fx_buffer;
            // autogenerated code here
            // sectionHpp
            atomic<int32_t> depth, cv_depth;
            atomic<int32_t> amount, cv_amount;
            // sectionHpp


        };
    }
}