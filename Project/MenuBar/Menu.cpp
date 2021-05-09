/**
 * Menu - Implementation
 *
 * Copyright (c) [2021], Zhao Liu.
 */

#include "Menu.h"

Menu::Menu() {

}

Menu::Menu(std::vector<std::string> items) {
  // Initialize the Menu object with items provided
  for (int i = 0; i < items.size(); ++i) {
    itemList.addItem(items.at(i));
  }
}

void Menu::setMenuPosition(float x, float y) {
  item.setItemPos(x, y);
}

void Menu::setMenuStr(sf::String str) {
  item.setItemStr(str);
  item.itemCenterTxt();
}

void Menu::draw(sf::RenderTarget& window, sf::RenderStates states) const {
  window.draw(inputBox);

  if (States::stateEnabled(States::ITEMAPPEARED)) {
    window.draw(itemList);
  }
}

void Menu::addEventHandler(sf::RenderWindow& window, sf::Event event) {
  itemList.addEventHandler(window, event);
  inputBox.addEventHandler(window, event);
}

void Menu::update() {
  itemList.update();
  inputBox.update();
}

Snapshot& Menu::getSnapshot() {

}

void Menu::applySnapshot(const Snapshot& snapshot) {

}
