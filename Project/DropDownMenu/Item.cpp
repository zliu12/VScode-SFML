/**
 * Item - Implementation
 *
 * Copyright (c) [2021], Zhao Liu.
 */

#include "Item.h"
#include <cstdlib>
#include <iostream>

// Default constructor
Item::Item() {
  /* Item box */
  itemBox.setFillColor(sf::Color::Transparent);       // Set item box fill color
  itemBox.setSize(sf::Vector2f(1400, 200));           // Set item box size 1500 x 200
  itemBox.setOutlineThickness(5);                     // Set outline thickness
  itemBox.setOutlineColor(sf::Color::White);           // Set outline color
  itemBox.setPosition(sf::Vector2f(500, 310));        // Set item box position

  /* Item txt */
  itemTxt.setFont(projectFont::getFont());
  itemTxt.setCharacterSize(itemBox.getGlobalBounds().height * 0.75);
}

// Make the itemTxt in the center
void Item::itemCenterTxt() {
  float txtPosX = itemBox.getPosition().x + (itemBox.getGlobalBounds().width - itemTxt.getGlobalBounds().width)/2;
  float txtPosY = itemBox.getPosition().y;
  itemTxt.setPosition(sf::Vector2f(txtPosX, txtPosY));
}

// Set the item box background color
void Item::setBgColor(const sf::Color& bgColor) {
  itemBox.setFillColor(bgColor);
}

// Get the item box background color
const sf::Color& Item::getBgColor() const {
  return itemBox.getFillColor();
}

// Set the itemTxt color
void Item::setTxtColor(const sf::Color& txtColor) {
  itemTxt.setFillColor(txtColor);
}

// Get the itemTxt color
const sf::Color& Item::getTxtColor() const {
  return itemTxt.getFillColor();
}

// Set the outline color of the item box
void Item::setOutlineColor(const sf::Color& outlineColor) {
  itemBox.setOutlineColor(outlineColor);
}

// Set the size of item box
void Item::setItemBoxSize(float x, float y) {
  itemBox.setSize(sf::Vector2f(x, y));
}

// Get the sf::String of itemTxt
sf::String Item::getStr() {
  return itemTxt.getString();
}

// Set the std::string of itemTxt
void Item::setItemStr(sf::String str) {
  itemTxt.setString(str);
  std::string data = str;
  std::cout << data << std::endl;
}

// Load itemTxt font
void Item::loadItemFont() {
  if(itemFont.loadFromFile("OpenSans-Bold.ttf")) {
    itemTxt.setFont(itemFont);
  }
  else {
    std::cout << "Fail to load item font." << std::endl;
  }
}

// Set itemTxt font
void Item::setItemTxtFont(sf::Font font) {
  itemTxt.setFont(font);
}

// Set the item txt position
void Item::setItemTxtPos(float x, float y) {
  itemTxt.setPosition(sf::Vector2f(x, y));
}
// Set the item box position
void Item::setItemBoxPos(float x, float y) {
  itemBox.setPosition(sf::Vector2f(x, y));
}

// Get the difference between item itemTxt height and item box height
float Item::getHeightDifference() {
  return itemBox.getGlobalBounds().height - itemTxt.getGlobalBounds().height;
}

// From the sf::Drawable class
void Item::draw(sf::RenderTarget& window, sf::RenderStates states) const {
  window.draw(itemBox);
  window.draw(itemTxt);
}

// From EventHandler
void Item::addEventHandler(sf::RenderWindow& window, sf::Event event) {
  // Hover over the itemBox, itemBox fill color becomes blue
  if(MouseEvents<sf::RectangleShape>::hovered(itemBox, window)) {
    States::enableState(States::BACKGROUNDCOLORED);
  }
  else {
    States::disableState(States::BACKGROUNDCOLORED);
  }

  // Click the item box, itemTxt in item box becomes the one being clicked
  if(MouseEvents<sf::RectangleShape>::mouseClicked(itemBox, window)) {
    States::enableState(States::NEWTXT);
  }
}

void Item::update() {
  if(States::checkIfStateEnabled(States::BACKGROUNDCOLORED)) {  // BACKGROUNDCOLORED true
    itemBox.setFillColor(sf::Color::Blue);
  }
  else {                                                        // BACKGROUNDCOLORED false
    itemBox.setFillColor(sf::Color::Transparent);
  }              
}

// From SnapshotInterface
Snapshot& Item::getSnapshot() {}
void Item::applySnapshot(const Snapshot& snapshot) {}
