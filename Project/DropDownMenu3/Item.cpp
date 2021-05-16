/**
 * Item - Implementation
 *
 * Copyright (c) [2021], Zhao Liu.
 */

#include "Item.h"

Item::Item() {
  /* itemBox */
  itemBox.setFillColor(sf::Color::Transparent);   // fill color transparent
  itemBox.setSize(sf::Vector2f(500, 200));        // size 500 x 200
  itemBox.setOutlineColor(sf::Color::White);      // outline color white
  itemBox.setOutlineThickness(5);                 // outline thickness 5
  itemBox.setPosition(sf::Vector2f(500, 310));    // position 500, 310

  /* itemTxt */
  itemTxt.setFont(ProjectFont::getFont());                            // Font                                    
}

void Item::itemCenterTxt() {
  float txtPoxX = itemBox.getPosition().x + (itemBox.getGlobalBounds().width - itemTxt.getGlobalBounds().width) / 2;
  float txtPoxY = itemBox.getPosition().y + (itemBox.getGlobalBounds().height - itemTxt.getGlobalBounds().height) / 2;
  // float txtPoxY = itemBox.getPosition().y;
  itemTxt.setPosition(sf::Vector2f(txtPoxX, txtPoxY));
}

sf::String Item::getItemTxt() {
  return itemTxt.getString();
}

void Item::setItemStr(sf::String str) {
  itemTxt.setString(str);
  itemCenterTxt();
}

void Item::setItemPos(float x, float y) {
  itemTxt.setPosition(sf::Vector2f(x, y));
  itemBox.setPosition(sf::Vector2f(x, y));
}

void Item::draw(sf::RenderTarget& window, sf::RenderStates states) const {
  window.draw(itemBox);
  window.draw(itemTxt);
}

void Item::addEventHandler(sf::RenderWindow& window, sf::Event event) {
  // Hover over the itemBOx, itemBox fill color becomes blue
  // Hover on item box
  if (MouseEvent<sf::RectangleShape>::hovered(itemBox, window)) {
    // ITEMBGCOLOR true
    StatesItem::enableItemState(StatesItem::ITEMBGCOLOR);
    std::cout << "ITEMBGCOLOR: " << StatesItem::itemStateEnabled(StatesItem::ITEMBGCOLOR) << std::endl;
  }
  // Hover on item txt
  else if (MouseEvent<sf::Text>::hovered(itemTxt, window)) {
    // ITEMBGCOLOR true
    StatesItem::enableItemState(StatesItem::ITEMBGCOLOR);
    std::cout << "ITEMBGCOLOR: " << StatesItem::itemStateEnabled(StatesItem::ITEMBGCOLOR) << std::endl;
  }
  // Hover on neither
  else {
    // ITEMBGCOLOR false
    StatesItem::disableItemState(StatesItem::ITEMBGCOLOR);
    std::cout << "ITEMBGCOLOR: " << StatesItem::itemStateEnabled(StatesItem::ITEMBGCOLOR) << std::endl;
  }
}

void Item::update() {
  // BGCOLOR true
  if (StatesItem::itemStateEnabled(StatesItem::ITEMBGCOLOR)) {
    // item box fill color blue
    itemBox.setFillColor(sf::Color::Blue);
    // item txt size increases 25%
    itemTxt.setCharacterSize(itemBox.getGlobalBounds().height * 0.75);
    // Centralize txt again
    itemCenterTxt();
  }
  // BGCOLOR false
  else {
    // item box fill color transparent
    itemBox.setFillColor(sf::Color::Transparent);
    // item txt size nomral
    itemTxt.setCharacterSize(itemBox.getGlobalBounds().height * 0.50);
    // Centralize txt again
    itemCenterTxt();
  }
}

Snapshot& Item::getSnapshot() {

}

void Item::applySnapshot(const Snapshot& snapshot) {

}