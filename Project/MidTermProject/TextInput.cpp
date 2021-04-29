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
  inputBox.setBoxSize(1750, 250);                   // Set size to 1500 x 1000
  inputBox.setBoxPos(375, 250);                     // Set box position
  inputBox.setBoxFilledColor(sf::Color::Black);     // Set filled color to black
  inputBox.setBoxOutlineColor(sf::Color::White);    // Set outline color to white
  inputBox.setBoxOutlineThickness(15);              // Set outline thickness


  /* Text Input Box Label */
  inputBoxLabel.setLabelContent("TEXT INPUT BOX");  // Set label content
  inputBoxLabel.setLabelSize(100);                  // Set label size
  inputBoxLabel.setLabelPos(350, 120);              // Set label position


  /* Cursor */
  cursor.setCursorSize(15, 200);                    // Set cursor size
  cursor.setCursorColor(sf::Color::White);          // Set cursor color
  setCursorPos(400, 275);                           // Set cursor initial position

  /* Typing */
  inputText.setCharPos(400, 225);                   // Set typing initial position
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
// void TextInput::clikeToEnable() {
  // if (sf::Mouse::isButtonPressed(sf::Mouse::Button(sf::Mouse::Left))) {
    // isClicked = true;
  // }
// }

// Draw function
void TextInput::draw(sf::RenderTarget& window, sf::RenderStates state) const {
  window.draw(inputBoxLabel);
  window.draw(inputBox);
  window.draw(cursor);
  window.draw(inputText);

  // inputBox.draw(window, state);
  // inputBoxLabel.draw(window, state);
  // inputText.draw(window, state);
  // cursor.draw(window,state);
}

// From EventHandler
void TextInput::addEventHandler(sf::RenderWindow& window, sf::Event event) {
  // If click anywhere outside the input box but inside the window, disable (false) HIDDEN
  if (!MouseEvents<TextBox>::hovered(inputBox, window) && MouseEvents<TextBox>::mouseClicked(window, event)) {
    States::disableState(States::HIDDEN);
  }
  // If click anywhere inside the text input box, enable (true) HIDDEN
  else if (MouseEvents<TextBox>::mouseClicked(inputBox, window)) {
    States::enableState(States::HIDDEN);
  }

  inputText.addEventHandler(window, event);
}

void TextInput::update() {
  // setCursorPos(425 + inputText.getTxtWidth(), inputText.getTxtHeight() + (250 - cursor.getCursorHeight()) / 2);
  cursor.update();
  inputText.update();

  if (inputText.getTxtWidth() + 125 > inputBox.getBoxWidth()) {
    inputBox.setBoxSize(1750, 250 + inputText.getTxtHeight());
  }

  if (sf::Keyboard::isKeyPressed(sf::Keyboard::Return)) {
    inputBox.setBoxSize(1750, 250 + inputText.getTxtHeight());
  }
}

// From SnapshotInterface
Snapshot& TextInput::getSnapshot() {}
void TextInput::applySnapshot(const Snapshot& snapshot) {}