#!/bin/bash

# Check if the build directory exists
if [ -d "build" ]; then
    # Remove the build directory and its contents
    rm -rf build
    echo "Build directory and contents have been removed."
else
    echo "Build directory does not exist."
fi
