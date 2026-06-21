# CLAUDE.md

This file provides guidance to Claude Code (claude.ai/code) when working with code in this repository.

## What this is

A C++ project template built on Chromium's toolchain — `mini_chromium` (Chromium's low-level `base` routines), GN + Ninja for builds, and googletest for unit tests. The sample target is a trivial `hello` program; the value of this repo is the wiring (GN config, DEPS, CI), not the code. New projects clone this and replace the `hello`/`hello_static` targets.

## Prerequisites

Builds require `depot_tools` on PATH (provides `gclient`, `gn`, `autoninja`):

```bash
git clone https://chromium.googlesource.com/chromium/tools/depot_tools.git
export PATH=$PWD/depot_tools:$PATH
```

## Common commands

```bash
# Fetch all dependencies declared in DEPS (googletest, mini_chromium, gn, ninja, buildtools).
# Run this first, and again after editing DEPS.
gclient sync

# Generate the Ninja build files for an output directory.
gn gen out/Debug

# Build and run the main executable.
autoninja -C out/Debug hello
./out/Debug/hello

# Build and run the full unit test suite.
autoninja -C out/Debug hello_unittest
./out/Debug/hello_unittest

# Run a single test case (googletest filter).
./out/Debug/hello_unittest --gtest_filter=SampleTest.TestGetStaticText
```

There is no separate lint step; formatting follows `.clang-format` (`BasedOnStyle: Chromium`), and `clang-format` is supplied via CIPD.

## Architecture

- **`.gn`** points GN at **`build/BUILDCONFIG.gn`**, which sets the default toolchain to mini_chromium's `gcc_like_toolchain` and applies mini_chromium's default configs to every target type (`executable`, `static_library`, `test`, etc.). The build is debug by default (`is_debug = true`).
- **`build/test.gni`** defines the `test()` template used in `BUILD.gn`. It is just an `executable` with `testonly = true` — there is no test runner framework beyond googletest's own `main`.
- **`BUILD.gn`** (root) declares the targets. The pattern is: business logic lives in a `static_library` (`hello_static`), the `executable` (`hello`) and the `test` (`hello_unittest`) both depend on it. Test targets add `include_dirs = [ "src" ]` and depend on `//third_party/googletest:gtest`.
- **`DEPS`** pins exact revisions of mini_chromium, googletest, buildtools, and CIPD versions of `gn` and `ninja`. Dependency changes happen here, not via a package manager. `gclient sync` materializes them into `third_party/` and `buildtools/`.

## Adding code

1. Add sources under `src/` and (for shared logic) declare them in a `static_library` in `BUILD.gn`.
2. Have the `executable` depend on that library via `deps`.
3. Add tests under `test/`, declared with the `test()` template, depending on the library and `//third_party/googletest:gtest`.

## CI

`.github/workflows/main.yml` runs on push/PR to `main` across `ubuntu-latest` and `macOS-latest`. It clones `depot_tools`, runs `gclient sync`, then builds and runs both `hello` and `hello_unittest`. CI builds into `out/` (no `Debug` suffix) — the output directory name is arbitrary. DEPS-fetched dirs are cached against `hashFiles('DEPS')`.
