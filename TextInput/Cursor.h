/**
 * Cursor - Header
 *
 * Copyright (c) [2021], John Liu.
 */

#ifndef CURSOR_H_
#define CURSOR_H_
#include <iostream>
#include "SFML/Graphics.hpp"

class Cursor : public sf::Drawable, public sf::Transformable {
  private:
    sf::RectangleShape cursor;
    sf::Clock clock;
    float timeInterval = 0.5;

  public:
    // Default constructor
    Cursor();

    // Check if mouse pauses inside the input box
    static bool hovered(sf::RectangleShape &box, sf::RenderWindow &window);

    // Check if left-click the input box
    static bool clickBox(sf::RectangleShape &box, sf::RenderWindow &window);

    // Check if left-click other window area
    static bool clickWindow(sf::RenderWindow &window, sf::Event event);

    // Make cursor blink
    void blinkCursor();

    // Set cursor position
    void setCursorPosition(float x, float y);

    // Set cursor size
    void setCursorSize(float x, float y);

    // Event handler
    void addEventHandler(sf::RenderWindow &window, sf::Event event);

    // Virtual draw function
    void draw(sf::RenderTarget &window, sf::RenderStates state) const override;

    // Update function
    void update();
};


#endif  // CURSOR_H_