# ruffcpp

[![CircleCI](https://circleci.com/gh/amoseui/ruffcpp/tree/master.svg?style=shield)](https://circleci.com/gh/amoseui/ruffcpp/tree/master)

### Prerequisites
```bash
$ git clone https://chromium.googlesource.com/chromium/tools/depot_tools.git
$ export PATH=$DEPOT_TOOLS:$PATH
```

### Sync
```bash
$ git clone git@github.com:amoseui/ruffcpp.git
$ cd ruffcpp
$ gclient sync
```

### Build
```bash
$ gn gen out/Debug
$ ninja -C out/Debug ${TARGET}
```
