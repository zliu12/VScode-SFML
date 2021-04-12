/**
 * Type In SFML - Implementation
 *
 * Copyright (c) [2021], Zhao Liu.
 */

#include <SFML/Graphics.hpp>
#include <iostream>
#include "typeInSFML.h"

// Default constructor
PrintTextTyped::PrintTextTyped() {
  loadFont();
  txt.setFont(font);
  txt.setCharacterSize(100);                // txt size: 100 pts
  txt.setPosition(100.0f, 200.0f);          // txt position: 100, 200
  txt.setFillColor(sf::Color::White);       // txt color: while
  txt.setStyle(sf::Text::Bold);             // txt style: bold
}

// Load the font
void PrintTextTyped::loadFont() {
  font.loadFromFile("OpenSans-Bold.ttf");
  if (!font.loadFromFile("OpenSans-Bold.ttf")) {
    std::cout << "Fail to load the font." << std::endl;
  }
}

// Virtual draw function
void PrintTextTyped::draw(sf::RenderTarget& window, sf::RenderStates states) const {
  window.draw(txt, states);
}

// Take care the event
void PrintTextTyped::addEventHandler(sf::RenderWindow& window, sf::Event event) {
  if (event.type == sf::Event::TextEntered) {
    if (event.text.unicode == '\b') {
      str.erase(str.getSize() - 1, 1);
    } else if (event.text.unicode < 128) {
      str += event.text.unicode;
    }
  }
}

// Update the typing content
void PrintTextTyped::update() {
  txt.setString(str);
}
