//
// Created by david.b.kessler on 2019-05-07.
//

#include "../main/api/Light.h"

class TestLight : public Light{

private:
    int turnedOnCount;
    int turnedOffCount;

public:
    TestLight(){
       turnedOnCount = 0;
       turnedOffCount = 0;
    }

    void turnOn() {
        turnedOnCount++;
    }

    void turnOff() {
        turnedOffCount++;
    }

    int getTurnOnCount(){
        return turnedOnCount;
    }

    int getTurnOffCount(){
        return turnedOffCount;
    }
};