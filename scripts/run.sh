#!/bin/bash

# Check if the build directory exists
if [ ! -d "build" ]; then
    echo "Build directory does not exist. Please run build.sh first."
    exit 1
fi

# Navigate to the build directory and run the application
cd build
./PathfindingAlgorithmVisualizer

# Navigate back to the root directory
cd ..
