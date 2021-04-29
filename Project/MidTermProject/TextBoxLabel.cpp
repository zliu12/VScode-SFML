/**
 * Project 1 - Input Box Label Implementation
 *
 * Copyright (c) [2021], Zhao Liu.
 */

#include "TextBoxLabel.h"
#include <iostream>

// Default constructor
TextBoxLabel::TextBoxLabel() {
  loadFont();
  boxLabel.setFont(labelFont);
  // setLabelContent("TEXT INPUT BOX");
  // setLabelSize(100);
  // setLabelPos(350, 120);
}

// Load font
void TextBoxLabel::loadFont() {
  labelFont.loadFromFile("OpenSans-Bold.ttf");
  if (!labelFont.loadFromFile("OpenSans-Bold.ttf")) {
    std::cout << "Fail to load label font." << std::endl;
    return;
  }
}

// Set font
void TextBoxLabel::setLabelFont() {
  boxLabel.setFont(labelFont);
}

// Set label content
void TextBoxLabel::setLabelContent(std::string labelContent) {
  boxLabel.setString(labelContent);
}

// Set label size
void TextBoxLabel::setLabelSize(unsigned lableSize) {
  boxLabel.setCharacterSize(lableSize);
}

// Set label position
void TextBoxLabel::setLabelPos(float x, float y) {
  boxLabel.setPosition(sf::Vector2f(x, y));
}

// From the sf::Drawable class
void TextBoxLabel::draw(sf::RenderTarget& window, sf::RenderStates states) const {
  window.draw(boxLabel);
}

// From EventHandler
void TextBoxLabel::addEventHandler(sf::RenderWindow& window, sf::Event event) {}
void TextBoxLabel::update() {}

// From SnapshotInterface
Snapshot& TextBoxLabel::getSnapshot() {}
void TextBoxLabel::applySnapshot(const Snapshot& snapshot) {}