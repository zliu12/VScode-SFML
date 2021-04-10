/**
 * Create a Box for Text Input - Implementaion
 *
 * Copyright (c) [2021], Zhao Liu.
 */

#include "TextInputBox.h"

// Default constructor
TextInputBox::TextInputBox() {
  // Set size to 1500 x 1000
  rectangleInputBox.setSize(sf::Vector2f(1750, 250));
  rectangleInputBox.setPosition(sf::Vector2f(375, 625));
  // Set filled color to black
  rectangleInputBox.setFillColor(sf::Color::Black);
  // Set outline color to white
  rectangleInputBox.setOutlineColor(sf::Color::White);
  // Set outline thickness
  rectangleInputBox.setOutlineThickness(25);
}

// Draw function
void TextInputBox::draw(sf::RenderTarget& window, sf::RenderStates state) const {
  window.draw(rectangleInputBox);  
}

// From EventHandler
void TextInputBox::addEventHandler(sf::RenderWindow& window, sf::Event event) {}
void TextInputBox::update() {}

// From SnapshotInterface
Snapshot& TextInputBox::getSnapshot() {}
void TextInputBox::applySnapshot(const Snapshot& snapshot) {}