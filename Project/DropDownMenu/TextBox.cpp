/**
 * Create a Box for Text Input - Implementaion
 *
 * Copyright (c) [2021], Zhao Liu.
 */

#include "TextBox.h"
#include <iostream>

// Default constructor
TextBox::TextBox() {}

// Set input box size
void TextBox::setBoxSize(float x, float y) {
  rectangleInputBox.setSize(sf::Vector2f(x, y));
}

// Set input box position
void TextBox::setBoxPos(float x, float y) {
  rectangleInputBox.setPosition(sf::Vector2f(x, y));
}

// Set input box filled color
void TextBox::setBoxFilledColor(sf::Color color) {
  rectangleInputBox.setFillColor(color);
}

// Set input box outline color
void TextBox::setBoxOutlineColor(sf::Color color) {
  rectangleInputBox.setOutlineColor(color);
}

// Set input Box outline thickness
void TextBox::setBoxOutlineThickness(float thickness) {
  rectangleInputBox.setOutlineThickness(thickness);
}

// Get input box height
float TextBox::getBoxPosX() {
  // std::cout << rectangleInputBox.getPosition().x << "\n";
  return rectangleInputBox.getPosition().x;
}

// Get input box width
float TextBox::getBoxPosY() {
  // std::cout << rectangleInputBox.getPosition().y << "\n";
  return rectangleInputBox.getPosition().y;
}

// Get input box width
float TextBox::getBoxWidth() {
  return rectangleInputBox.getSize().x;
}

// Get input box height
float TextBox::getBoxHeight() {
  return rectangleInputBox.getSize().y;
}

// Get input box bounds
sf::FloatRect TextBox::getGlobalBounds() {
  return rectangleInputBox.getGlobalBounds();
}

// Get input box local bounds
sf::FloatRect TextBox::getLocalbounds() {
  return rectangleInputBox.getLocalBounds();
}

// Draw function
void TextBox::draw(sf::RenderTarget& window, sf::RenderStates state) const {
  window.draw(rectangleInputBox);  
}

// From EventHandler
void TextBox::addEventHandler(sf::RenderWindow& window, sf::Event event) {}
void TextBox::update() {}

// From SnapshotInterface
Snapshot& TextBox::getSnapshot() {}
void TextBox::applySnapshot(const Snapshot& snapshot) {}

