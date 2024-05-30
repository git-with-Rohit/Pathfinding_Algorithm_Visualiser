#ifndef WINDOW_H
#define WINDOW_H

#include <SFML/Graphics.hpp>

/**
 * @class Window
 * @brief Manages the SFML window.
 * 
 * This class is responsible for creating and managing the window using SFML.
 * It handles window events, clearing, and displaying the window.
 */
class Window {
public:
    /**
     * @brief Constructs a new Window object.
     * 
     * @param title The title of the window.
     * @param width The width of the window.
     * @param height The height of the window.
     */
    Window(const std::string& title, int width, int height);

    /**
     * @brief Polls and processes window events.
     */
    void pollEvents();

    /**
     * @brief Clears the window.
     */
    void clear();

    /**
     * @brief Displays the window.
     */
    void display();

    /**
     * @brief Checks if the window is open.
     * 
     * @return true if the window is open, false otherwise.
     */
    bool isOpen() const;

    /**
     * @brief Closes the window.
     */
    void close();

    /**
     * @brief Gets the SFML RenderWindow.
     * 
     * @return A reference to the SFML RenderWindow.
     */
    sf::RenderWindow& getRenderWindow();

private:
    sf::RenderWindow mWindow;
};

#endif // WINDOW_H
