#!/usr/bin/env bash

mkdir -p build
mkdir -p install
pushd build
cmake ..
make
make install
popd

echo "Done.. Please see the install directory"
