/**
 * Cursor - Header
 *
 * Copyright (c) [2021], John Liu.
 */

#ifndef CURSOR_H_
#define CURSOR_H_
#include <iostream>
#include "SFML/Graphics.hpp"

class Cursor : public sf::Drawable, sf::Transformable{
  private:
    sf::RectangleShape textBox;
    sf::RectangleShape cursor;
    sf::Clock clock;
    float blinkInterval = 0.3;
    bool showCursor;

  public:
    // Default constructor
    Cursor();

    // Check if mouse rests inside the textBox
    static bool hovered(sf::RectangleShape &box, sf::RenderWindow &window);

    // Check if left-click the textBox
    static bool clickBox(sf::RectangleShape box, sf::RenderWindow &window);

    // Check if left-click the window
    static bool clickWindow(sf::RenderWindow &window, sf::Event event);

    // Make cursor blink
    void blinkCursor();

    // Event handler
    void addEventHandler(sf::RenderWindow &window, sf::Event event);

    // Draw function
    void draw(sf::RenderTarget &window, sf::RenderStates state) const override;

    // Update function
    void update();

};


#endif  // CURSOR_H_