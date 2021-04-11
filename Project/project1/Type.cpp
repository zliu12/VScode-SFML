/**
 * Project 1 - Type Implementation
 *
 * Copyright (c) [2021], Zhao Liu.
 */

#include "Type.h"
#include <iostream>
#define DELETE_KEY 8

// Default constructor
Type::Type() {
  loadTypingFont();
  txt.setFont(typingfont);
  txt.setCharacterSize(100);
  txt.setFillColor(sf::Color::White);
  txt.setPosition(1000, 1000);
}

// Load font
void Type::loadTypingFont() {
  typingfont.loadFromFile("OpenSans-Bold copy.ttf");
  if (!typingfont.loadFromFile("OpenSans-Bold copy.ttf")) {
    std::cout << "Fail to load typing font." << std::endl;
    return;
  }
}

  // Load font
  void loadTypingFont();

  // Set font
  void setTypingFont();

  // Set character size
  void setCharSize();

  // Set typing position
  void setCharPos();

  // Set character color
  void setCharColor();
  
// Delete input character
void Type::deleteInputChar(sf::RenderWindow& window, sf::Event event) {
  if (str.getSize() > 0) {
    str.erase(str.getSize() - 1);
  } else {
    return;
  }
}

// From the sf::Drawable class, draw the txt
void Type::draw(sf::RenderTarget& window, sf::RenderStates states) const {
  window.draw(txt);
}

// From EventHandler, take care of the event
void Type::addEventHandler(sf::RenderWindow& window, sf::Event event) {
  if (event.type == sf::Event::TextEntered) {
    if (event.text.unicode == 8) {
      deleteInputChar(window, event);
    } 
    else if (event.text.unicode < 128) {
      str += event.text.unicode;
    }
  }
}

// Update the typing content
void Type::update() {
  txt.setString(str + "_");
}

// From SnapshotInterface
Snapshot& Type::getSnapshot() {}
void Type::applySnapshot(const Snapshot& snapshot) {}