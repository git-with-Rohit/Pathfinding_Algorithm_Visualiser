#include "catch.hpp"
#include "Renderer.h"
#include "Window.h"
#include <SFML/Graphics.hpp>

TEST_CASE("Renderer Functionality") {
    Window window("Test Window", 800, 600);
    Renderer renderer(window);

    sf::CircleShape shape(50);
    shape.setFillColor(sf::Color::Green);

    renderer.draw(shape);
    renderer.render();

    REQUIRE(window.isOpen());
}
