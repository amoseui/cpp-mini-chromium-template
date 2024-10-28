# cpp-mini-chromium-template
[![build](https://github.com/amoseui/cpp-mini-chromium-template/workflows/actions/badge.svg?branch=main)](https://github.com/amoseui/cpp-mini-chromium-template/actions/workflows/main.yml)

cpp-mini-chromium-template is a C++ project template with mini_chromium.

- [mini_chromium](https://chromium.googlesource.com/chromium/mini_chromium) is a small collection of useful low-level ([base](https://chromium.googlesource.com/chromium/src/base/)) routines from the [Chromium](https://www.chromium.org/Home/) open-source project.
- [googletest](https://github.com/google/googletest)
- [GN](https://gn.googlesource.com/gn/) and [Ninja](https://ninja-build.org)
- [GitHub Actions](https://github.com/features/actions)

### Prerequisites
```bash
$ git clone https://chromium.googlesource.com/chromium/tools/depot_tools.git
$ export PATH=$DEPOT_TOOLS:$PATH
```

### Sync
```bash
$ git clone git@github.com:amoseui/cpp-mini-chromium-template.git
$ cd cpp-mini-chromium-template
$ gclient sync
```

### Build
```bash
$ gn gen out/Debug
$ autoninja -C out/Debug hello
```

### Run
```bash
$ ./out/Debug/hello
```

### Test
```bash
$ gn gen out/Debug
$ autoninja -C out/Debug hello_unittest
$ ./out/Debug/hello_unittest
```
