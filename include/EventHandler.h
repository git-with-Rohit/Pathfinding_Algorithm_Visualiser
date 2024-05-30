#ifndef EVENTHANDLER_H
#define EVENTHANDLER_H

#include <SFML/Graphics.hpp>
#include "Window.h"

/**
 * @class EventHandler
 * @brief Manages event handling for the window.
 * 
 * This class is responsible for polling and processing events
 * such as window closing and input events.
 */
class EventHandler {
public:
    /**
     * @brief Constructs a new EventHandler object.
     * 
     * @param window A reference to the Window object.
     */
    EventHandler(Window& window);

    /**
     * @brief Handles window events.
     */
    void handleEvents();

private:
    Window& mWindow;
};

#endif // EVENTHANDLER_H
