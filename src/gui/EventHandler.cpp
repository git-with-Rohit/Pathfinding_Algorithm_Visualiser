#include "EventHandler.h"

EventHandler::EventHandler(Window& window)
: mWindow(window) {}

void EventHandler::handleEvents() {
    sf::Event event;
    while (mWindow.getRenderWindow().pollEvent(event)) {
        if (event.type == sf::Event::Closed) {
            mWindow.close();
        }
        // Handle other events like keyboard and mouse input here
    }
}
