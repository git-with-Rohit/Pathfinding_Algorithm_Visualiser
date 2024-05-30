#!/bin/bash

# Create a build directory if it doesn't exist
if [ ! -d "build" ]; then
    mkdir build
fi

# Navigate to the build directory
cd build

# Run CMake to generate Makefiles and then build the project
cmake ..
make

# Navigate back to the root directory
cd ..
