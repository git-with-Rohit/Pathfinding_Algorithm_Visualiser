#include "Renderer.h"

Renderer::Renderer(Window& window)
: mWindow(window) {}

void Renderer::draw(const sf::Drawable& drawable) {
    mDrawables.push_back(&drawable);
}

void Renderer::render() {
    mWindow.clear();
    for (const auto& drawable : mDrawables) {
        mWindow.getRenderWindow().draw(*drawable);
    }
    mWindow.display();
    mDrawables.clear(); // Clear drawables after rendering
}
