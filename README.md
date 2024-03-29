# eigen-example

## About

This is an example project using [Eigen](http://eigen.tuxfamily.org/index.php?title=Main_Page).

## Directoris

The directory structure is based on [The Pitchfork Layout (PFL)](https://api.csswg.org/bikeshed/?force=1&url=https://raw.githubusercontent.com/vector-of-bool/pitchfork/develop/data/spec.bs).
(but there are some differences.)

- `include/` : Contains public header files for users.
- `src/` : Contains source files (including private header files and cmake scripts).
- `test/` : Contains test files.
- `examples/` : Contains example files.
- `external/` : Contains source files and libraries from external projects.
- `data/` : Contains not explicitly code files.
- `tool/` : Contains scripts and tools.
  - `cmake/` : Contains CMake scripts.
- `doc/` : Contains documents.

The following directories are not included in the repository, but there names are reserved.

- `build/` : Temporary build directory.
- `install/` : Temporary install directory.

## How to setup Eigen

(Instead of using a package manager, you may download source files of Eigen and place it in `external/` directory.)

### Linux

1. Install Eigen from package manager.

```bash
sudo apt install libeigen3-dev
```

2. use `find_package` in CMakeLists.txt

```cmake
find_package(Eigen3 REQUIRED)
```
