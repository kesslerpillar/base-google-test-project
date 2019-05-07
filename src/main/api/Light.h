//
// Created by david.b.kessler on 2019-05-07.
//

#ifndef LIGHT_CONTROLLER_LIGHT_H
#define LIGHT_CONTROLLER_LIGHT_H


class Light {
    public:
        virtual void turnOn() = 0;
        virtual void turnOff() = 0;
};


#endif //LIGHT_CONTROLLER_LIGHT_H
