#include "LightController.h"


LightController::LightController(LightSwitch *aSwitch) {

}

void LightController::update(std::vector<std::shared_ptr<Light> > &lights) {

    for(int i = 0; i < lights.size(); i++){
        lights[i]->turnOn();
    }

}