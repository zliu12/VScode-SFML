/**
 * Project 1 - Type Implementation
 *
 * Copyright (c) [2021], Zhao Liu.
 */

#include "Typing.h"
#include <iostream>
#include <string>
// #define DELETE_KEY 8

// Default constructor
Typing::Typing() {
  loadTypingFont();
  txt.setFont(typingfont);
  setCharSize(200);
  setCharColor(sf::Color::White);
}

// Load font
void Typing::loadTypingFont() {
  typingfont.loadFromFile("OpenSans-Bold copy.ttf");
  if (!typingfont.loadFromFile("OpenSans-Bold copy.ttf")) {
    std::cout << "Fail to load typing font." << std::endl;
    return;
  }
}

// Set font
void Typing::setTypingFont() {
  txt.setFont(typingfont);
}

// Set character size
void Typing::setCharSize(unsigned charSize) {
  txt.setCharacterSize(charSize);
}

// Set typing position
void Typing::setCharPos(float x, float y) {
  txt.setPosition(sf::Vector2f(x, y));
}

// Set character color
void Typing::setCharColor(sf::Color color) {
  txt.setFillColor(color);
}

// Get text bound width
float Typing::getTxtWidth() {
  return txt.getGlobalBounds().width;
}

// Get text bound height
float Typing::getTxtHeight() {
  return txt.getGlobalBounds().height;
}

// Delete input character
void Typing::deleteInputChar(sf::RenderWindow& window, sf::Event event) {
  if (str.getSize() > 0) {
    str.erase(str.getSize() - 1);
  }
}

// From the sf::Drawable class, draw the txt
void Typing::draw(sf::RenderTarget& window, sf::RenderStates states) const {
  window.draw(txt);
}

// From EventHandler, take care of the event
void Typing::addEventHandler(sf::RenderWindow& window, sf::Event event) {
  // Allow to type if HIDDEN is false
  if (States::checkIfStateEnabled(HIDDEN)) {
    return;
  }
  else {
    if (event.type == sf::Event::TextEntered) {
      // If the space key is pressed, typing in a new line
      if (event.text.unicode == 13) {
        str += "\n";
        str += event.text.unicode;
      }
      else if (event.text.unicode == 8) {
        deleteInputChar(window, event);
      }
      else if (event.text.unicode < 128) {
        str += event.text.unicode;
      }  
    }   
  }
  /*
  else if (event.type == sf::Event::TextEntered) {
    // If the space key is pressed, typing in a new line
    if (event.text.unicode == 13) {
      str += "\n";
      str += event.text.unicode;
    }
    if (event.text.unicode == 8) {
      deleteInputChar(window, event);
    }
    else if (event.text.unicode < 128) {
      str += event.text.unicode;
    }  
  }   
  */
}


// Update the typing content
void Typing::update() {
  txt.setString(str);
}

// From SnapshotInterface
Snapshot& Typing::getSnapshot() {}
void Typing::applySnapshot(const Snapshot& snapshot) {}