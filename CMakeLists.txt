cmake_minimum_required(VERSION 3.10)

# Set the project name and version
project(PathfindingAlgorithmVisualizer VERSION 1.0)

# Specify the C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Find SFML
find_package(SFML 2.5 COMPONENTS system window graphics REQUIRED)

# Include directories
include_directories(include)

# Add the executable
add_executable(PathfindingAlgorithmVisualizer
    src/main.cpp
    src/app/Application.cpp
    src/algorithms/AStar.cpp
    src/algorithms/Dijkstra.cpp
    src/algorithms/Common.cpp
    src/gui/Window.cpp
    src/gui/Renderer.cpp
    src/gui/EventHandler.cpp
    src/utils/Timer.cpp
    src/utils/Logger.cpp
)

# Link SFML libraries
target_link_libraries(PathfindingAlgorithmVisualizer sfml-system sfml-window sfml-graphics)
