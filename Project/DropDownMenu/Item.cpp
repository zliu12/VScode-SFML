/**
 * Item - Implementation
 *
 * Copyright (c) [2021], Zhao Liu.
 */

#include "Item.h"
#include <iostream>

// Default constructor
Item::Item() {
  /* Item box */
  itemBox.setFillColor(sf::Color::Transparent);       // Set item box fill color
  itemBox.setSize(sf::Vector2f(1500, 200));           // Set item box size 1500 x 200
  itemBox.setOutlineThickness(5);                     // Set outline thickness
  itemBox.setOutlineColor(sf::Color::White);           // Set outline color
  itemBox.setPosition(sf::Vector2f(500, 310));        // Set item box position

  /* Item txt */
  itemTxt.setFont(projectFont::getFont());
  itemTxt.setCharacterSize(itemBox.getGlobalBounds().height * 0.75);
  itemTxt.setFillColor(sf::Color::White);

  // ItemStates::disableItemState(ItemState::ItemBackgroundColor);
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

// Set the std::string of itemTxt
void Item::setItemStr(sf::String str) {
  itemTxt.setString(str);
  // std::string txtStr = str;
  // std::cout << txtStr << std::endl;
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
    ItemStates::enableItemState(ItemStates::ItemBackgroundColor);  // ItemBackgroundColor true
  }
  else if(MouseEvents<sf::Text>::hovered(itemTxt, window)) {
    ItemStates::enableItemState(ItemStates::ItemBackgroundColor);  // ItemBackgroundColor true
  }
  else {
    ItemStates::disableItemState(ItemStates::ItemBackgroundColor); // ItemBackgroundColor false
  }

  // Click the itemTxt or the itemBox to turn either ItemTxtClicked or ItemBoxClicked
  // true, to turn ItemListHidden true
  if(MouseEvents<sf::Text>::mouseClicked(itemTxt, window)) {    // Click item txt
    States::enableObjState(States::ItemTxtClicked);             // ItemTxtClicked true
    States::enableObjState(States::ItemListHidden);             // ItemListHidden true
  } 
  else if(MouseEvents<sf::RectangleShape>::mouseClicked(itemBox, window)) { // Click item box
    States::enableObjState(States::ItemBoxClicked);             // ItemBoxClicked true
    States::enableObjState(States::ItemListHidden);             // ItemListHidden true
  }
}

void Item::update() {
    if(ItemStates::isItemStateEnabled(ItemStates::ItemBackgroundColor)) {  // ItemBackgroundColor true
      itemBox.setFillColor(sf::Color::Blue);            // item box blue
    }
    else {                                              // ItemBackgroundColor false
      itemBox.setFillColor(sf::Color::Transparent);     // item box transparent
    }
}

// From SnapshotInterface
Snapshot& Item::getSnapshot() {}
void Item::applySnapshot(const Snapshot& snapshot) {}
