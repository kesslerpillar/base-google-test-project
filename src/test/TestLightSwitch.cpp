//
// Created by david.b.kessler on 2019-05-07.
//

#include "../main/api/LightSwitch.h"

class TestLightSwitch : public LightSwitch{

    private:
        bool state;

    public:
        TestLightSwitch(bool defaultState){
            state = defaultState;
        }

        bool isOn() {
            return state;
        }
};
