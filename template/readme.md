Adding An application {#page_module_appadd}
==========

[TOC]

------------------------------------------------------------------------

# Introduction

This document describes how to add an application to the MagAO-X source code.

# 1. Code

Start by copying the folder `templateCtrl` to a new folder with the name of the app, e.g. `hardwareCtrl`.

The three basic files for any application are the header, the main program file, and the CMakeLists.txt.  In the new `hardwareCtrl` folder, rename `templateCtrl.hpp` and `templateCtrl.cpp` to `hardwareCtrl.hpp` and `hardwareCtrl.cpp` (substituting the appropriate name for the new application for `hardwareCtrl`).  

Now in `CMakeLists.txt`, `hardwareCtrl.hpp` and `hardwareCtrl.cpp`, change `templateCtrl` to `hardwareCtrl` (you should be able to use find-all and replace).  

If all replacement is done correctly, the application will build with only warnings if you:
- make a new `build` folder and change into it
- type `cmake ..` on the command line.
- type `cmake --build .` on the command line.

Next edit the code in the `.hpp` file to implement the application.  You can also edit the CMakeLists.txt adding additional libraries, or perhaps another header.  You will typically not need to edit any code in the `.cpp` file other than replacing `templateCtrl` as above.

If you want to build a version with debug information and no optimization, type `make debug` on the command line.

# 2. Build System Integration

To cause the new app to be built, add it to the appropriate list of apps in the top level CMakeLists.txt.  Pay attention to which machine you expect the app to run on.

# 3. Tests

The file `tests/templateCtrl_test.cpp` should have its name changed to (example) `tests/hardwareCtrl_test.cpp`.  Implement any unit tests in this file.

Add the `*_test.cpp` file to the top level `tests/testMagAOX.cpp` file, and to the `tests/Makefile` `TEST_INCLUDES` dependency list.

# 4. Software Documentation

Document your code with doxygen.  Be sure that `templateCtrl` was changed to the application name in all documentation blocks in the source code, including the group definitions and `\ingroup` directives.

# 5. Final Steps

Delete this `readme.md` from the new application folder.

Commit all of the new files.

Use your new application to find planets.
