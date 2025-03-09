#!/bin/bash

BUILD_DIR="build"

usage() {
  echo "Usage: $0 {generate|build|run}"
  exit 1
}

generate() {
  cmake -B $BUILD_DIR -DCMAKE_BUILD_TYPE=Debug -DCMAKE_EXPORT_COMPILE_COMMANDS=ON
}

build() {
  cmake --build $BUILD_DIR --parallel 4
}

run() {
  ./build/bin/velocity
}

case "$1" in
    generate)
        generate
        ;;
    build)
        build "$2"
        ;;
    run)
        run
        ;;
    *)
        usage
        ;;
esac
