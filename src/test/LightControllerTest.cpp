#include <string>
#include "../main/LightController.h"
#include "../main/api/LightSwitch.h"
#include "../main/api/Light.h"
#include "./TestLightSwitch.cpp"
#include "./TestLight.cpp"

#include <gtest/gtest.h>
#include <memory>
#include <vector>
using namespace std;

class LightControllerTest : public ::testing::Test
{
};

TEST_F(LightControllerTest, shouldTurnOnLights )
{
    vector<shared_ptr<Light> > lights(2);

    TestLight *firstLight = new TestLight();
    TestLight *secondLight = new TestLight();

    lights[0].reset(firstLight);
    lights[1].reset(secondLight);

    TestLightSwitch lightSwitch = TestLightSwitch(true);

    LightController lightController(&lightSwitch);
    lightController.update(lights);

    EXPECT_EQ(0, firstLight->getTurnOffCount());
    EXPECT_EQ(0, secondLight->getTurnOffCount());

    EXPECT_EQ(1, firstLight->getTurnOnCount());
    EXPECT_EQ(1, secondLight->getTurnOnCount());
}

TEST_F(LightControllerTest, shouldTurnOffLights )
{
    vector<shared_ptr<Light> > lights(2);

    TestLight *firstLight = new TestLight();
    TestLight *secondLight = new TestLight();

    lights[0].reset(firstLight);
    lights[1].reset(secondLight);

    TestLightSwitch lightSwitch = TestLightSwitch(false);

    LightController lightController(&lightSwitch);
    lightController.update(lights);

    EXPECT_EQ(1, firstLight->getTurnOffCount());
    EXPECT_EQ(1, secondLight->getTurnOffCount());

    EXPECT_EQ(0, firstLight->getTurnOnCount());
    EXPECT_EQ(0, secondLight->getTurnOnCount());
}

