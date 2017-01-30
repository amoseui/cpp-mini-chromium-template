#!/bin/bash

mkdir build
pushd build
cmake ..
make
./test/example
popd
