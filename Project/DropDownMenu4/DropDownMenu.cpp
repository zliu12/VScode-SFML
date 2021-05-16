/**
 * DropDownMenu - Implementation
 *
 * Copyright (c) [2021], Zhao Liu.
 */

#include "DropDownMenu.h"

// Default constructor
DropDownMenu::DropDownMenu() {

}

// Customized constructor
DropDownMenu::DropDownMenu(std::vector<std::string> strVec) {
  for (int i = 0; i < strVec.size(); ++i) {
    itemList.addNewItem(strVec.at(i));
  }
}

// From sf::Drawable
void DropDownMenu::draw(sf::RenderTarget& window, sf::RenderStates states) const {
  window.draw(inputBox);
  if (inputBox.getShowList()) {
    window.draw(itemList);
  }
}

// From EventHandler
void DropDownMenu::addEventHandler(sf::RenderWindow& window, sf::Event event) {
  // if (MouseEvents<InputBox>::mouseClicked(inputBox, window)) {
    // States::enableState(InputBox::DISPLAYON);
    // std::cout << States::isEnabled(InputBox::DISPLAYON) << std::endl;
    // std::cout << "DropDownMenu" << std::endl;
  // }

  inputBox.addEventHandler(window, event);
  itemList.addEventHandler(window, event);
}

void DropDownMenu::update() {
  itemList.update();
  // inputBox.setInputTxt(itemList.getStrClicked());
}

// Fron SnapshotInterface
Snapshot& DropDownMenu::getSnapshot() {

}
void DropDownMenu::applySnapshot(const Snapshot& snapshot) {

}