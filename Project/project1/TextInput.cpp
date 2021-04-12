/**
 * Project 1 - Text Input Implementation
 *
 * Copyright (c) [2021], Zhao Liu.
 */

#include "TextInput.h"
#include <iostream>

// Default constructor
TextInput::TextInput() {
  /* Text Input Box */
  InputBox();

  /* Text Input Box Label */
  InputBoxLabel();

  /* Cursor */
  Cursor();
  setCursorPos(inputBox.getBoxPosX() + 25,
               inputBox.getBoxPosY() + 
               (inputBox.getBoxHeight() - cursor.getCursorHeight()) / 2);

  /* Typing */
  Typing();
  inputText.setCharPos(inputBox.getBoxPosX() + 25, inputBox.getBoxPosY());
}

/* Text Input Box */
// Set input box size
void TextInput::setInputBoxSize(float x, float y) {
  inputBox.setBoxSize(x, y);
}

// Set input box position
void TextInput::setInputBoxPos(float x, float y) {
  inputBox.setBoxPos(x, y);
}

// Set input box filled color
void TextInput::setInputBoxFilledColor(sf::Color color) {
  inputBox.setBoxFilledColor(color);
}

// Set input box outline color
void TextInput::setInputBoxOutlineColor(sf::Color color) {
  inputBox.setBoxOutlineColor(color);
}

// Set input Box outline thickness
void TextInput::setInputBoxOutlineThickness(float thickness) {
  inputBox.setBoxOutlineThickness(thickness);
}

/* Text Input Box Label */
// Set font
void TextInput::setLabelFont() {
  inputBoxLabel.loadFont();
  inputBoxLabel.setLabelFont();
}

// // Set label content
void TextInput::setLabelContent(std::string labelContent) {
  inputBoxLabel.setLabelContent(labelContent);
}

// // Set label size
void TextInput::setLabelSize(float labelSize) {
  inputBoxLabel.setLabelSize(labelSize);
}

// // Set label position
void TextInput::setLabelPos(float x, float y) {
  inputBoxLabel.setLabelPos(x, y);
}

/* Cursor */
// Set cursor size
void TextInput::setCursorSize(float x, float y) {
  cursor.setCursorSize(x, y);
}

// Set cursor position
void TextInput::setCursorPos(float x, float y) {
  cursor.setCursorPos(x, y);
}

// Set cursor color
void TextInput::setCursorColor(sf::Color color) {
  cursor.setCursorColor(color);
}


// Set isClicked to true
void TextInput::clikeToEnable() {
  if (sf::Mouse::isButtonPressed(sf::Mouse::Button::Left)) {
    isClicked = true;
  }
}

// Draw function
void TextInput::draw(sf::RenderTarget& window, sf::RenderStates state) const {
  inputBox.draw(window, state);
  inputBoxLabel.draw(window, state);
  inputText.draw(window, state);
  cursor.draw(window,state);
}

// From EventHandler
void TextInput::addEventHandler(sf::RenderWindow& window, sf::Event event) {
  inputText.addEventHandler(window, event);
}

void TextInput::update() {
  inputText.update();
  cursor.update();
  setCursorPos(inputBox.getBoxPosX() + inputText.getTxtWidthBound() + 50,
               inputBox.getBoxPosY() + 
               (inputBox.getBoxHeight() - cursor.getCursorHeight()) / 2);
}

// From SnapshotInterface
Snapshot& TextInput::getSnapshot() {}
void TextInput::applySnapshot(const Snapshot& snapshot) {}