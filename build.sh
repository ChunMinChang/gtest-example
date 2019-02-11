#!/bin/sh

git submodule update --init --recursive

BUILD='build'
mkdir -p $BUILD
cd $BUILD

cmake ..

make