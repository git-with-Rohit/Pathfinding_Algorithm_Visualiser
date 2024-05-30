#ifndef APPLICATION_H
#define APPLICATION_H

#include <SFML/Graphics.hpp>

class Application {
public:
    Application();
    void run();

private:
    void processEvents();
    void update();
    void render();

    sf::RenderWindow mWindow;
    sf::CircleShape mPlayer;
};

#endif // APPLICATION_H
