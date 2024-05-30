# Pathfinding Algorithm Visualiser

![C++](https://img.shields.io/badge/C%2B%2B-17-blue.svg)
![Python](https://img.shields.io/badge/Python-3.8-blue.svg)
![SFML](https://img.shields.io/badge/SFML-2.5-green.svg)
![CMake](https://img.shields.io/badge/CMake-3.10+-blue.svg)
![Linux](https://img.shields.io/badge/Linux-Ubuntu%2020.04+-orange.svg)
![Docker](https://img.shields.io/badge/Docker-19.03+-blue.svg)

## Overview

The Pathfinding Algorithm Visualiser is a graphical application that demonstrates the functionality of various pathfinding algorithms, such as A* and Dijkstra's. This project leverages C++, Python, SFML, and other modern technologies to provide a visual and interactive way to understand and analyse pathfinding algorithms.

## Features

- Visualise A* and Dijkstra's pathfinding algorithms
- Interactive GUI using SFML
- Real-time algorithm performance metrics
- Comprehensive logging and timing utilities
- Modular and extensible codebase

## Technology Stack

- **Programming Languages:** C++17, Python 3.8
- **Graphics Library:** SFML 2.5
- **Build System:** CMake 3.10+
- **Operating System:** Linux (Ubuntu 20.04+)
- **Containerisation:** Docker 19.03+

## Installation

### Prerequisites

Ensure you have the following installed:

- CMake 3.10+
- SFML 2.5
- GCC 9.4+ or Clang 10+
- Docker (optional, for containerised builds)

### Steps

1. **Clone the Repository:**
   ```bash
   git clone https://github.com/git-with-Rohit/Pathfinding_Algorithm_Visualiser.git
   cd Pathfinding_Algorithm_Visualiser
    ```

2. **Build the Project:**
    ```bash
    ./scripts/build.sh
    ```

3. **Run the Application:**
    ```bash
    ./scripts/run.sh
    ```

4. **Clean the Build:**
    ```bash
    ./scripts/clean.sh
    ```

## Usage

### Running Locally

Ensure you have an X server running and the \`DISPLAY\` environment variable set correctly. For example:
    ```bash
    export DISPLAY=:0
    ./scripts/run.sh
    ```

### Running in a Docker Container

To run the application inside a Docker container with X11 forwarding:
1. **Build the Docker Image:**
    ```bash
   docker build -t pathfinding-visualiser .
    ```

2. **Run the Docker Container:**
    ```bash
   docker run -it --rm -e DISPLAY=$DISPLAY -v /tmp/.X11-unix:/tmp/.X11-unix pathfinding-visualiser
    ```

## Project Structure

 ```plaintext
Pathfinding_Algorithm_Visualiser/
├── README.md
├── LICENSE
├── .gitignore
├── docs/
│   ├── design.md
│   ├── user_guide.md
│   ├── api_reference.md
│   └── images/
├── src/
│   ├── main.cpp
│   ├── app/
│   │   ├── Application.cpp
│   │   ├── Application.h
│   │   └── main.cpp
│   ├── algorithms/
│   │   ├── AStar.cpp
│   │   ├── AStar.h
│   │   ├── Dijkstra.cpp
│   │   ├── Dijkstra.h
│   │   └── Common.h
│   ├── gui/
│   │   ├── Window.cpp
│   │   ├── Window.h
│   │   ├── Renderer.cpp
│   │   ├── Renderer.h
│   │   ├── EventHandler.cpp
│   │   └── EventHandler.h
│   └── utils/
│       ├── Timer.cpp
│       ├── Timer.h
│       └── Logger.cpp
│       └── Logger.h
├── include/
│   ├── Application.h
│   ├── AStar.h
│   ├── Dijkstra.h
│   ├── Window.h
│   ├── Renderer.h
│   ├── EventHandler.h
│   ├── Timer.h
│   └── Logger.h
├── tests/
│   ├── test_main.cpp
│   ├── test_AStar.cpp
│   ├── test_Dijkstra.cpp
│   └── test_Renderer.cpp
├── third_party/
│   └── SFML/
│       ├── include/
│       └── lib/
├── cmake/
│   └── FindSFML.cmake
├── CMakeLists.txt
└── scripts/
    ├── build.sh
    ├── run.sh
    └── clean.sh
 ```

## Contribution

Contributions are welcome! Please read the [contributing guidelines](docs/contributing.md) before submitting a pull request.

## License

This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for details.

## Acknowledgements

- [SFML](https://www.sfml-dev.org/)
- [CMake](https://cmake.org/)
- [Docker](https://www.docker.com/)

---

Feel free to open issues or pull requests if you have any questions or suggestions!
"""