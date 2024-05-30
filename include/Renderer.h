#ifndef RENDERER_H
#define RENDERER_H

#include <SFML/Graphics.hpp>
#include "Window.h"

/**
 * @class Renderer
 * @brief Handles drawing operations.
 * 
 * This class is responsible for drawing drawable objects to the window.
 * It collects drawable objects and renders them in a batch.
 */
class Renderer {
public:
    /**
     * @brief Constructs a new Renderer object.
     * 
     * @param window A reference to the Window object.
     */
    Renderer(Window& window);

    /**
     * @brief Adds a drawable object to the render queue.
     * 
     * @param drawable The drawable object to be added.
     */
    void draw(const sf::Drawable& drawable);

    /**
     * @brief Renders all drawable objects to the window.
     */
    void render();

private:
    Window& mWindow;
    std::vector<const sf::Drawable*> mDrawables;
};

#endif // RENDERER_H
