/**
 * Menu - Implementation
 *
 * Copyright (c) [2021], Zhao Liu.
 */

#include "Menu.h"

Menu::Menu() {

}

Menu::Menu(std::vector<std::string> itemsVec) {
  // Initialize the Menu object with items provided
  for (int i = 0; i < itemsVec.size(); ++i) {
    itemList.addItem(itemsVec.at(i));
  }
}

/* Menu input box / input box txt position */
void Menu::setMenuInputBoxPosition(float x, float y) {
  inputBox.setInputBoxPos(x, y);
}
void Menu::setMenuInputBoxTxtPos() {
  // inputBox.setInputBoxTxtPos(x, y);
  inputBox.inputBoxCenterTxt();
}
void Menu::setMenuInputBoxStr(sf::String str) {
  inputBox.setInputBoxTxt(str);
}

/* ItemList */
void Menu::setMenuItemBoxPos(float x, float y) {
  // itemList.setItemBoxPos(x, y);
}
void Menu::setMenuItemTxtPos() {

}
void Menu::setMenuItemTxtStr(sf::String str) {

}

void Menu::setMenuStr(sf::String str) {
  item.setItemStr(str);
  item.itemCenterTxt();
}

void Menu::draw(sf::RenderTarget& window, sf::RenderStates states) const {
  inputBox.draw(window, states);
  // item.draw(window, states);

  if (States::stateEnabled(States::ITEMAPPEARED)) {
    std::cout << "menu draw itemlist begin" << std::endl;   // called
    itemList.draw(window, states);
    std::cout << "menu draw itemlist finish" << std::endl;  // called
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
