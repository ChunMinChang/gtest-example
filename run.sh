#!/bin/sh

sh clean.sh && sh build.sh

BUILD='build'

cd $BUILD

./test_dummy