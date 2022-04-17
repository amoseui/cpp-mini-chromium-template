# cpp-mini-chromium-template
[![build](https://github.com/amoseui/cpp-mini-chromium-template/workflows/actions/badge.svg?branch=master)](https://github.com/amoseui/cpp-mini-chromium-template/actions/workflows/main.yml)

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
$ ninja -C out/Debug ${TARGET}
```

### Run
```bash
$ ./out/Debug/${TARGET}
```
