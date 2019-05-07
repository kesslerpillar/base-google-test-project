# Base Google Test Project
This is a base project for Google Test projects.  

## Installation
1. `git clone https://github.com/kesslerpillar/base-google-test-project.git`
1. open with [CLion](https://www.jetbrains.com/clion/)
1. Run > Run 'unit_tests'

### Expected Output
```
~/git/base-google-test-project/cmake-build-debug/unit_tests
Running main() from gtest_main.cc
[==========] Running 2 tests from 1 test case.
[----------] Global test environment set-up.
[----------] 2 tests from ReverseTests
[ RUN      ] ReverseTests.simple
[       OK ] ReverseTests.simple (0 ms)
[ RUN      ] ReverseTests.empty
[       OK ] ReverseTests.empty (0 ms)
[----------] 2 tests from ReverseTests (0 ms total)

[----------] Global test environment tear-down
[==========] 2 tests from 1 test case ran. (0 ms total)
[  PASSED  ] 2 tests.

Process finished with exit code 0
```
