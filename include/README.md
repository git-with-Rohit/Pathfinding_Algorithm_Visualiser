# Include Directory

This directory contains the header files for the Pathfinding Algorithm Visualizer project. Each file provides the public interface for various components of the project, including application logic, algorithms, GUI components, and utility functions.

## File Overview

### `Application.h`
- **Description:** Defines the `Application` class, which manages the main application logic, including initialization, event processing, updating, and rendering.
- **Key Classes:** `Application`

### `AStar.h`
- **Description:** Defines the `AStar` class, which implements the A* pathfinding algorithm.
- **Key Classes:** `AStar`

### `Dijkstra.h`
- **Description:** Defines the `Dijkstra` class, which implements Dijkstra's pathfinding algorithm.
- **Key Classes:** `Dijkstra`

### `Common.h`
- **Description:** Provides common definitions and utilities used by the pathfinding algorithms, including the `Point` and `Node` structures, and utility functions for handling grid neighbors and calculating distances.
- **Key Classes and Structures:** `Point`, `Node`
- **Key Functions:** `getNeighbors`, `distance`

### `Window.h`
- **Description:** Defines the `Window` class, which manages the SFML window, including event handling, clearing, and displaying the window.
- **Key Classes:** `Window`

### `Renderer.h`
- **Description:** Defines the `Renderer` class, which handles drawing operations by collecting drawable objects and rendering them to the window.
- **Key Classes:** `Renderer`

### `EventHandler.h`
- **Description:** Defines the `EventHandler` class, which manages event handling for the window, including processing input events.
- **Key Classes:** `EventHandler`

### `Timer.h`
- **Description:** Defines the `Timer` class, a utility for measuring elapsed time using the high-resolution clock.
- **Key Classes:** `Timer`

### `Logger.h`
- **Description:** Defines the `Logger` class, a utility for logging messages to a file and console.
- **Key Classes:** `Logger`

## Usage

To use these headers in your project, include the relevant header file in your source code. For example:

```cpp
#include "Application.h"
#include "AStar.h"
#include "Dijkstra.h"
#include "Window.h"
#include "Renderer.h"
#include "EventHandler.h"
#include "Timer.h"
#include "Logger.h"
#include "Common.h"
```
These headers define the interfaces for the classes and functions used throughout the Pathfinding Algorithm Visualizer project, enabling you to build and extend the application's functionality efficiently.