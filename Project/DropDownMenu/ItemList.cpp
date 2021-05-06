/**
 * ItemList - Implementation
 *
 * Copyright (c) [2021], Zhao Liu.
 */

#include "ItemList.h"
#include <iostream>

// Default constructor
ItemList::ItemList() {
  dropDownBox.setFillColor(sf::Color::Transparent);
  dropDownBox.setSize(sf::Vector2f(1500, 1000));
  dropDownBox.setOutlineThickness(5);
  dropDownBox.setOutlineColor(sf::Color::White);
  dropDownBox.setPosition(sf::Vector2f(450, 260));
}

// Customized constructor
ItemList::ItemList(std::vector<std::string> strVec) {
  // Add the string type element of strVec into the itemTxt of each itemAdded
  for(int i = 0; i < strVec.size(); ++i) {
    addItem(strVec.at(i));
  }

  /* Set HIDDEN */
  // States::enableState(States::HIDDEN);            // Set HIDDEN true
}

// Add item
void ItemList::addItem(sf::String str) {
  // Create a Item type item
  Item itemAdded;

  // Set the item box position for the itemAdded
  itemAdded.setItemBoxPos(500, 310 + 210 * itemAddedCount);

  // Set the item txt initial position for the itemAdded
  itemAdded.setItemTxtPos(500, 310 + 310 * itemAddedCount);

  // Set the string content of the added item
  itemAdded.setItemStr(str);
  itemAdded.itemCenterTxt();

  // Insert the itemAdded into the list_item
  list_item.insertAtEnd(itemAdded);

  // Increase itemAddedCount
  itemAddedCount += 1;
}

// Set drop down box size
void ItemList::setDropDownBoxSize(float x, float y) {
  return dropDownBox.setSize(sf::Vector2f(x, y));
}

// Set outline color
void ItemList::setOutlineColor(sf::Color color) {
  dropDownBox.setOutlineColor(color);
}

// From the sf::Drawable class
void ItemList::draw(sf::RenderTarget& window, sf::RenderStates states) const {
  // Draw the item list box
  // window.draw(dropDownBox);

  // Create a list iterator
  linkedList<Item>::iterator list_iter = list_item.begin();
  // Draw each item box
  while(list_iter != list_item.end()) {
    window.draw(*list_iter);
    ++list_iter;
  } 
}

// From EventHandler
void ItemList::addEventHandler(sf::RenderWindow& window, sf::Event event) {
  linkedList<Item>::iterator list_iter = list_item.begin();
  while(list_iter != list_item.end()) {
    (*list_iter).addEventHandler(window, event);
    currentItemTxt = list_iter.getCurrentNode()->data.getItemTxt();
    ++list_iter;
  }
}

void ItemList::update() {
  linkedList<Item>::iterator list_iter = list_item.begin();
  while(list_iter != list_item.end()) {
  (*list_iter).update();
  ++list_iter;
  }  
  // std::cout << "ItemList: itemlist.update" << std::endl;
}
