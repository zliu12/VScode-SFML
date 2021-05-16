/**
 * MenuBar - Implementation
 *
 * Copyright (c) [2021], Zhao Liu.
 */

#include "MenuBar.h"

MenuBar::MenuBar() {

}

MenuBar::MenuBar(std::vector<std::string> menuVec) {
  // Add menu strings of menuVec into the menuAdded
  for (int i = 0; i < menuVec.size(); ++i) {
    addMenu(menuVec.at(i));
  }
}

void MenuBar::addMenu(sf::String menuStr) {
  /* Menu input box, input box txt */
  menuAdded.setMenuInputBoxPosition(500 + 505 * menuAddedCount, 100);
  menuAdded.setMenuInputBoxTxtPos();
  menuAdded.setMenuInputBoxStr(menuStr);

  // Insert the menuAdded into the list
  menuList.insertAtEnd(menuAdded);

  // Update menuAddedCount
  menuAddedCount += 1;
}

void MenuBar::addMenuItem(sf::String menuListStr) {
  menuAdded.setMenuItemBoxPos(500, 310 + 210 * menuItemAddedCount);
  menuAdded.setMenuItemTxtPos();
  menuAdded.setMenuItemTxtStr(menuListStr);
}

void MenuBar::draw(sf::RenderTarget& window, sf::RenderStates states) const {
  // Create a menulist iterator
  linkedList<Menu>::iterator menuIter = menuList.begin();
  // Draw each menu
  while (menuIter != menuList.end()) {
    window.draw(*menuIter);
    // std::cout << "menubar draw called" << std::endl; // called
    ++menuIter;
  }
}

void MenuBar::addEventHandler(sf::RenderWindow& window, sf::Event event) {
  // Create a menuList iterator
  linkedList<Menu>::iterator menuIter = menuList.begin();
  while (menuIter != menuList.end()) {
    (*menuIter).addEventHandler(window, event);
    ++menuIter;
  }
}

void MenuBar::update() {
  // Create a menuList iterator
  linkedList<Menu>::iterator menuIter = menuList.begin();
  while (menuIter != menuList.end()) {
    (*menuIter).update();
    ++menuIter;
  }
}

Snapshot& MenuBar::getSnapshot() {

}

void MenuBar::applySnapshot(const Snapshot& snapshot) {

}