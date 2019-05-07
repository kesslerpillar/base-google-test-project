//
// Created by david.b.kessler on 2019-05-07.
//

#ifndef GOOGLE_TEST_EXAMPLE_LIGHTSWITCH_H
#define GOOGLE_TEST_EXAMPLE_LIGHTSWITCH_H


class LightSwitch {
private:
    bool state;

    public:
        virtual bool isOn() = 0;
};


#endif //GOOGLE_TEST_EXAMPLE_LIGHTSWITCH_H
