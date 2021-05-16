/**
 * ItemList - Header
 *
 * Copyright (c) [2021], Zhao Liu.
 */

#include "ItemList.h"

// Default constructor
ItemList::ItemList() {

}

// Customized constructor
ItemList::ItemList(std::vector<std::string> strVec) {
  for (int i = 0; i < strVec.size(); ++i) {
    addNewItem(strVec.at(i));
  }
}

// Get strCliced
sf::String ItemList::getStrClicked() {
  return strClicked;
}

// Add new item to itemList
void ItemList::addNewItem(sf::String itemStr) {
  // Create a Item type newItem
  Item newItem;

  // Set the string of newItem
  newItem.setItemStr(itemStr);

  // Set newItem position
  newItem.setItemPos(100, 250 + 155 * countItem);
  newItem.centerItemTxt();

  // Insert the newItem to the itemList
  itemList.insertAtEnd(newItem);

  // Increase countItem by 1
  countItem += 1;
}

// From sf::Drawable
void ItemList::draw(sf::RenderTarget& window, sf::RenderStates states) const {
  // Create a item list iterator
  linkedList<Item>::iterator itemListIter = itemList.begin();

  // Draw each item
  while (itemListIter != itemList.end()) {
    window.draw(*itemListIter);
    ++itemListIter;
  }
}

// From EventHandler
void ItemList::addEventHandler(sf::RenderWindow& window, sf::Event event) {
  // Create a item list iterator
  linkedList<Item>::iterator itemListIter = itemList.begin();

  while (itemListIter != itemList.end()) {
    (*itemListIter).addEventHandler(window, event);
    strClicked = itemListIter.getCurrentNode()->data.getTxtSelect();
    ++itemListIter;
  }
}

void ItemList::update() {
  // Create a item list iterator
  linkedList<Item>::iterator itemListIter = itemList.begin();

  // Draw each item
  while (itemListIter != itemList.end()) {
    (*itemListIter).update();
    ++itemListIter;
  }
}

// Fron SnapshotInterface
Snapshot& ItemList::getSnapshot() {

}
void ItemList::applySnapshot(const Snapshot& snapshot) {

}