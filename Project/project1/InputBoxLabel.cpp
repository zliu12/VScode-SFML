/**
 * Project 1 - Input Box Label Implementation
 *
 * Copyright (c) [2021], Zhao Liu.
 */

#include "InputBoxLabel.h"
#include <iostream>

// Default constructor
InputBoxLabel::InputBoxLabel() {
  loadFont();
  boxLabel.setFont(labelFont);
  setLabelContent("TEXT INPUT BOX");
  setLabelSize(100);
  setLabelPos(350, 495);
}

// Load font
void InputBoxLabel::loadFont() {
  labelFont.loadFromFile("OpenSans-Bold copy.ttf");
  if (!labelFont.loadFromFile("OpenSans-Bold copy.ttf")) {
    std::cout << "Fail to load label font." << std::endl;
    return;
  }
}

// Set font
void InputBoxLabel::setLabelFont() {
  boxLabel.setFont(labelFont);
}

// Set label content
void InputBoxLabel::setLabelContent(std::string labelContent) {
  boxLabel.setString(labelContent);
}

// Set label size
void InputBoxLabel::setLabelSize(unsigned lableSize) {
  boxLabel.setCharacterSize(lableSize);
}

// Set label position
void InputBoxLabel::setLabelPos(float x, float y) {
  boxLabel.setPosition(sf::Vector2f(x, y));
}

// From the sf::Drawable class
void InputBoxLabel::draw(sf::RenderTarget& window, sf::RenderStates states) const {
  window.draw(boxLabel);
}

// From EventHandler
void InputBoxLabel::addEventHandler(sf::RenderWindow& window, sf::Event event) {}
void InputBoxLabel::update() {}

// From SnapshotInterface
Snapshot& InputBoxLabel::getSnapshot() {}
void InputBoxLabel::applySnapshot(const Snapshot& snapshot) {}