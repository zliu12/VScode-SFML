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

  /* itemList */
  ItemList();

  /* Set HIDDEN */
  States::enableState(States::HIDDEN);            // Set HIDDEN true

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

// From the sf::Drawable class
void InputBox::draw(sf::RenderTarget& window, sf::RenderStates states) const {
 window.draw(topBox);
 window.draw(defaultTxt);
 window.draw(item);
 window.draw(itemList);
}

// From EventHandler
void InputBox::addEventHandler(sf::RenderWindow& window, sf::Event event) {
  if(MouseEvents<sf::RectangleShape>::mouseClicked(topBox, window)) {
    States::disableState(States::HIDDEN);             // Make HIDDEN false
  }
  else if(MouseEvents<sf::Window>::mouseClicked(window, event)) {
    States::enableState(States::HIDDEN);              // Make HIDDEN true
  }

  item.addEventHandler(window, event);
}

void InputBox::update() {
  if(States::checkIfStateEnabled(States::HIDDEN)) {   // HIDDEN true
    topBox.setFillColor(sf::Color::Transparent); 
    item.setOutlineColor(sf::Color::Transparent);
    item.setTxtColor(sf::Color::Transparent);
    itemList.setOutlineColor(sf::Color::Transparent);
  }
  else {                                              // HIDDEN false
    topBox.setFillColor(sf::Color::Blue); 
    item.setOutlineColor(sf::Color::White);
    item.setTxtColor(sf::Color::White);
    itemList.setOutlineColor(sf::Color::White);
    item.update();
  }

  if(States::checkIfStateEnabled(States::NEWTXT)) {   // newTxt true
    // defaultTxt.setString(item.getStr());
    topBox.setFillColor(sf::Color::Green);
  }
}

// From SnapshotInterface
// Snapshot& InputBox::getSnapshot() {}
// void InputBox::applySnapshot(const Snapshot& snapshot) {}