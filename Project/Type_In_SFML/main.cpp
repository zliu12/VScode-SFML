/**
 * SFML Project - Type In SFML
 *
 * Copyright (c) [2021], Zhao Liu.
 */

#include <SFML/Graphics.hpp>
#include "typeInSFML.h"
#include <iostream>

int main() {
  // Create a 2000 x 1000 window
  sf::RenderWindow window;
  window.create(sf::VideoMode(2000, 1000), "Type In SFML", sf::Style::Default);
  // Set the window's position
  window.setPosition(sf::Vector2i(500, 500));

  // Create a PrintTextTyped object
  PrintTextTyped typing;

  // While the window is open
  while (window.isOpen()) {
    sf::Event event;
    while (window.pollEvent(event)) {
      if (event.type == sf::Event::Closed) {
        window.close();
      }

      // Detect when a key is pressed on the keyboard and concatenates the
      // character to the sf::Text object
      typing.addEventHandler(window, event);
    }

    // For updates, if any, needed after an event is handled and before the 
    // object is drawn on the screen
    typing.update();

    // Clear the screen
    window.clear();

    // Draw typing to the screen
    window.draw(typing);

    // Display the typing
    window.display();
  }
  
  return 0;
}
