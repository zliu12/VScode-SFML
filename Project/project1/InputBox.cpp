/**
 * Create a Box for Text Input - Implementaion
 *
 * Copyright (c) [2021], Zhao Liu.
 */

#include "InputBox.h"
#include <iostream>

// Default constructor
InputBox::InputBox() {
  // Set size to 1500 x 1000
  setBoxSize(1750, 250);
  // Set box position
  setBoxPos(375, 625);
  // Set filled color to black
  setBoxFilledColor(sf::Color::Black);
  // Set outline color to white
  setBoxOutlineColor(sf::Color::White);
  // Set outline thickness
  setBoxOutlineThickness(25);
}

// Set input box size
void InputBox::setBoxSize(float x, float y) {
  rectangleInputBox.setSize(sf::Vector2f(x, y));
}

// Set input box position
void InputBox::setBoxPos(float x, float y) {
  rectangleInputBox.setPosition(sf::Vector2f(x, y));
}

// Set input box filled color
void InputBox::setBoxFilledColor(sf::Color color) {
  rectangleInputBox.setFillColor(color);
}

// Set input box outline color
void InputBox::setBoxOutlineColor(sf::Color color) {
  rectangleInputBox.setOutlineColor(color);
}

// Set input Box outline thickness
void InputBox::setBoxOutlineThickness(float thickness) {
  rectangleInputBox.setOutlineThickness(thickness);
}

// Get input box height
float InputBox::getBoxPosX() {
  // std::cout << rectangleInputBox.getPosition().x << "\n";
  return rectangleInputBox.getPosition().x;
}

// Get input box width
float InputBox::getBoxPosY() {
  // std::cout << rectangleInputBox.getPosition().y << "\n";
  return rectangleInputBox.getPosition().y;
}

// Get input box width
float InputBox::getBoxWidth() {
  return rectangleInputBox.getSize().x;
}

// Get input box height
float InputBox::getBoxHeight() {
  return rectangleInputBox.getSize().y;
}

// Draw function
void InputBox::draw(sf::RenderTarget& window, sf::RenderStates state) const {
  window.draw(rectangleInputBox);  
}

// From EventHandler
void InputBox::addEventHandler(sf::RenderWindow& window, sf::Event event) {}
void InputBox::update() {}

// From SnapshotInterface
Snapshot& InputBox::getSnapshot() {}
void InputBox::applySnapshot(const Snapshot& snapshot) {}

