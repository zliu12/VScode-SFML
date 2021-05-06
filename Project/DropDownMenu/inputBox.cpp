/**
 * InputBox - Implementation
 *
 * Copyright (c) [2021], Zhao Liu.
 */

#include "InputBox.h"
#include <iostream>


void InputBox::topBoxCenterTxt() {
  float x = topBox.getPosition().x + (topBox.getGlobalBounds().width - defaultTxt.getGlobalBounds().width)/2;
  float y = topBox.getPosition().y;
  defaultTxt.setPosition(sf::Vector2f(x, y));
}

// Default constructor
InputBox::InputBox() {
  /* Top Box */
  topBox.setFillColor(sf::Color::Transparent);    // Set top box filled color
  topBox.setSize(sf::Vector2f(1500, 200));        // Set top box size 1500 x 200
  topBox.setOutlineThickness(5);                  // Set top box outline thickness
  topBox.setOutlineColor(sf::Color::White);       // Set top box outline color
  topBox.setPosition(sf::Vector2f(500, 100));     // Set top box posistion (500, 200)

  /* Menu txt */
  loadDefaultTxtFont();
  defaultTxt.setFont(defaultTxtFont);             // Set default text font
  defaultTxt.setString("Menu");                   // Set default text content
  defaultTxt.setFillColor(sf::Color::White);      // Set default text color
  defaultTxt.setCharacterSize(150);               // Set default text character size
  topBoxCenterTxt();
}

// Load font
void InputBox::loadDefaultTxtFont() {
  defaultTxtFont.loadFromFile("OpenSans-Bold.ttf");
  if(!defaultTxtFont.loadFromFile("OpenSans-Bold.ttf")) {
    std::cout << "Fail to load input box font." << std::endl;
  }
}

// Set input box size
void InputBox::setInputBoxSize(float x, float y) {
  topBox.setSize(sf::Vector2f(x, y));
}

// Set input box position
void InputBox::setInputBoxPos(float x, float y) {
  topBox.setPosition(sf::Vector2f(x, y));
}

// Set input box filled color
void InputBox::setInputBoxFilledColor(const sf::Color &color) {
  topBox.setFillColor(color);
}

// Set input box outline color
void InputBox::setInputBoxOutlineColor(const sf::Color &color) {
  topBox.setOutlineColor(color);
}
// Set input box margin size
void InputBox::setInputBoxMarginSize(const float &marginSize) {
  topBox.setOutlineThickness(marginSize);
}

// Change default txt
void InputBox::modifyDefaultTxt(std::string newStr) {
  defaultTxt.setString(newStr);
}

// From the sf::Drawable class
void InputBox::draw(sf::RenderTarget& window, sf::RenderStates states) const {
  window.draw(topBox);
  window.draw(defaultTxt);
}

// From EventHandler
void InputBox::addEventHandler(sf::RenderWindow& window, sf::Event event) {
  // If click the input box
  if(MouseEvents<sf::RectangleShape>::mouseClicked(topBox, window)) {
    States::disableObjState(States::ItemListHidden);         // Make ItemListHidden false
    States::enableObjState(States::InputBoxBackgroudColor);  // Make InputBoxBackgroudColor true
  }
  // If click other window areas
  else if(MouseEvents<sf::Window>::mouseClicked(window, event)) {
    States::enableObjState(States::ItemListHidden);          // Make ItemListHidden true
    States::disableObjState(States::InputBoxBackgroudColor); // Make InputBoxBackgroudColor false
  }
}

void InputBox::update() {
  if(States::isObjStateEnabled(States::ObjectState::InputBoxBackgroudColor)) {   // InputBoxBackgroudColor true
    topBox.setFillColor(sf::Color::Blue);             // topBox blue
  }
  else {                                              // InputBoxBackgroudColor false
    topBox.setFillColor(sf::Color::Transparent);      // topBox transparent
  }
}