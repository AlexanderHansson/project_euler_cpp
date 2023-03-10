#!/usr/bin/env bash

for test in install/utest/*; do
    echo
    echo "RUNNING ${test}"
    $test
    echo "-----------------------------"
done

