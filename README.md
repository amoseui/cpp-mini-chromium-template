# ruffcpp

[![Build Status](https://travis-ci.org/amoseui/ruffcpp.svg?branch=master)](https://travis-ci.org/amoseui/ruffcpp)

```bash
# Prerequisites
$ git clone https://chromium.googlesource.com/chromium/tools/depot_tools.git
$ export PATH=$DEPOT_TOOLS:$PATH

# Sync
$ git clone git@github.com:amoseui/ruffcpp.git
$ cd ruffcpp
$ gclient sync

# Build
$ gn gen out/Debug
$ ninja -C out/Debug ${TARGET}
```
