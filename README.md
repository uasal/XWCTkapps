# XWCToolkit apps repo template

This is a template for creating an apps repository that build on the [XWCToolkit](https://github.com/uasal/XWCToolkit).

## 1. Dependencies

- XWCToolkit

## 2. Adding apps

Copy the template repository [XWCTkapps](https://github.com/uasal/XWCTkapps) as a new repository. To add a new app to this new repository, copy the templateCtrl folder and follow the instructions in the templateCtrl's README.md. Each app folder implements a single app. See [ESCapps](https://github.com/uasal/ESCapps/) for an example.

If telemetry is implemented in an app, follow the steps in the XWCTk's telemetry documentation, but applied to the app repository (i.e. create and edit the files in this repository's logger folder).

<b>IMPORTANT:</b> The XWCTK library expects to find apps repositories in the dir pointed to by `XWCTK_APPS_PATH` (`/opt/MagAOX/apps` by default). If new telemetry types are implemented in the apps repository, the apps repositories need to be copied at `XWCTK_APPS_PATH` before building the apps and the XWCTK library. In this case the correct successions of steps is:
- copy all apps repos at `XWCTK_APPS_PATH` (or set `XWCTK_APPS_PATH` to where the apps repos are)
- build and install XWCTK
- build and install the apps repos 

## 3. Software Configuration

For a standard build and install:
```
mkdir build
cd build
cmake ..
cmake --build .
cmake --install
```

However, various defaults can be changed with build options.

#### 3.1 Paths

The following options are avialable on build. They do not need to be set, but can be used to override relevant defaults.

| Name                        | Default                  | Description |
|-----------------------------|--------------------------|-------------|
| `XWCTK_PREFIX`              | `/opt/MagAOX`            | Base directory for MagAOX vendor, packages, configs, drivers, apps & logs.
|                             |                          | This should match the path the XWCTK was build with |


## 4. Building

The `logger` and `template` folders are excluded by default from the build.
The system builds and installs targets for all other folder.

## 5. Software Install

Install requires root privileges.

## 6. Documentation

The code is more-or-less carefully documented with doxygen.

## 7. To-Do