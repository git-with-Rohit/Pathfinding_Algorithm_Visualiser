#include "Application.h"

Application::Application()
: mWindow(sf::VideoMode(800, 600), "Pathfinding Algorithm Visualizer")
, mPlayer() {
    mPlayer.setRadius(40.f);
    mPlayer.setPosition(100.f, 100.f);
    mPlayer.setFillColor(sf::Color::Cyan);
}

void Application::run() {
    while (mWindow.isOpen()) {
        processEvents();
        update();
        render();
    }
}

void Application::processEvents() {
    sf::Event event;
    while (mWindow.pollEvent(event)) {
        if (event.type == sf::Event::Closed) {
            mWindow.close();
        }
    }
}

void Application::update() {
    // Update the position of the player based on user input
    float moveSpeed = 0.1f;
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::W)) {
        mPlayer.move(0.f, -moveSpeed);
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::S)) {
        mPlayer.move(0.f, moveSpeed);
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::A)) {
        mPlayer.move(-moveSpeed, 0.f);
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::D)) {
        mPlayer.move(moveSpeed, 0.f);
    }
}

void Application::render() {
    mWindow.clear();
    mWindow.draw(mPlayer);
    mWindow.display();
}
