#include "LightController.h"

LightController::LightController(std::shared_ptr<LightSwitch>& lightSwitch) : lightSwitch (lightSwitch) {
}

void LightController::update(std::vector<std::shared_ptr<Light> > &lights) {

    for(int i = 0; i < lights.size(); i++){
        if(lightSwitch->isOn()){
            lights[i]->turnOn();
        }else{
            lights[i]->turnOff();
        }
    }

}