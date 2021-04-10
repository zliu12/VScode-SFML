/**
 * Project 1 - Input Box Label Implementation
 *
 * Copyright (c) [2021], Zhao Liu.
 */

#include "InputBoxLabel.h"

// Default constructor
InputBoxLabel::InputBoxLabel() {
  loadFont();
  boxLabel.setFont(font);
  setLabelContent("TEXT INPUT BOX");
  setLabelSize(100);
  setLabelPosition(350, 495);
}

// Load font
void InputBoxLabel::loadFont() {
  font.loadFromFile("OpenSans-Bold copy.ttf");
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
void InputBoxLabel::setLabelPosition(float x, float y) {
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