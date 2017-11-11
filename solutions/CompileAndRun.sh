#!/bin/bash
# Compile and run script for C++

fileName=$1
exeName=$2
g++ ./$fileName -o ./../build/$exeName && ./../build/$exeName