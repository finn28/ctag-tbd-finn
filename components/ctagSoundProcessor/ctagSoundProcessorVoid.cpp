#include "ctagSoundProcessorVoid.hpp"

using namespace CTAG::SP;

void ctagSoundProcessorVoid::Process(const ProcessData &data) {
}

void ctagSoundProcessorVoid::Init() {
    // construct internal data model
    knowYourself();
    model = std::make_unique<ctagSPDataModel>(id, isStereo);
    LoadPreset(0);
}

ctagSoundProcessorVoid::~ctagSoundProcessorVoid() {
}

void ctagSoundProcessorVoid::knowYourself(){
    // autogenerated code here
    // sectionCpp0
	pMapPar.emplace("dummy", [&](const int val){ dummy = val;});
	pMapTrig.emplace("dummy", [&](const int val){ trig_dummy = val;});
	isStereo = false;
	id = "Void";
	// sectionCpp0
}