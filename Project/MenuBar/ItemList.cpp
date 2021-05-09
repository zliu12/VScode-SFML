/**
 * ItemList - Implementation
 *
 * Copyright (c) [2021], Zhao Liu.
 */

#include "ItemList.h"

ItemList::ItemList() {

}

ItemList::ItemList(std::vector<std::string> strVec) {
  // Add strings of strVec into the itemAdded
  for (int i = 0; i < strVec.size(); ++i) {
    addItem(strVec.at(i));
  }
}

void ItemList::addItem(sf::String str) {
  // Create a Item type item
  Item itemAdded;

  // Set the item box position for itemAdded
  itemAdded.setItemPos(500, 310 + 210 * itemAddedCount);

  // Set the string content of the added item
  itemAdded.setItemStr(str);

  // Insert the itemAdded into the list
  list.insertAtEnd(itemAdded);

  // Update itemAddedCount
  itemAddedCount += 1;
}

void ItemList::draw(sf::RenderTarget& window, sf::RenderStates states) const {
  // Create a list iterator
  linkedList<Item>::iterator iter = list.begin();
  // Draw each item box
  while (iter != list.end()) {
    window.draw(*iter);
    ++iter;
  }
}

void ItemList::addEventHandler(sf::RenderWindow& window, sf::Event event) {
   // Create a list iterator
  linkedList<Item>::iterator iter = list.begin();
  while (iter != list.end()) {
    (*iter).addEventHandler(window, event);
    ++iter;
  }
}

void ItemList::update() {
   // Create a list iterator
  linkedList<Item>::iterator iter = list.begin();
  while (iter != list.end()) {
    (*iter).update();
    ++iter;
  }
}

Snapshot& ItemList::getSnapshot() {

}

void ItemList::applySnapshot(const Snapshot& snapshot) {

}