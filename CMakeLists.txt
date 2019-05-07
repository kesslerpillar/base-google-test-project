cmake_minimum_required(VERSION 3.5)

# Set the project name
project (light-controller)

# Add an library for the example classes
add_library(example_google_test
        src/main/LightController.cpp
        src/main/api/LightSwitch.h src/main/api/Light.h)


#############################################
# Unit tests

add_subdirectory(3rd_party/google-test)

# enable CTest testing
enable_testing()

# Add a testing executable
add_executable(unit_tests src/test/LightControllerTest.cpp src/main/api/LightSwitch.h src/test/TestLightSwitch.cpp src/test/TestLight.cpp)

target_link_libraries(unit_tests
    example_google_test
    GTest::GTest 
    GTest::Main
)

add_test(test_all unit_tests)
