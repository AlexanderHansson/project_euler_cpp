#!/usr/bin/env bash

mkdir -p build
mkdir -p install
pushd build
cmake ..
make -j $(nproc --ignore 2)
make install
popd

echo "Done.. Please see the install directory"
