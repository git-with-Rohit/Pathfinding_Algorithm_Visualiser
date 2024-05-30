#include "Window.h"

Window::Window(const std::string& title, int width, int height)
: mWindow(sf::VideoMode(width, height), title) {}

void Window::pollEvents() {
    sf::Event event;
    while (mWindow.pollEvent(event)) {
        if (event.type == sf::Event::Closed) {
            mWindow.close();
        }
    }
}

void Window::clear() {
    mWindow.clear();
}

void Window::display() {
    mWindow.display();
}

bool Window::isOpen() const {
    return mWindow.isOpen();
}

void Window::close() {
    mWindow.close();
}

sf::RenderWindow& Window::getRenderWindow() {
    return mWindow;
}
