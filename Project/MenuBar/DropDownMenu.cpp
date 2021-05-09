/**
 * DropDownMenu - Implementation
 *
 * Copyright (c) [2021], Zhao Liu.
 */

#include "DropDownMenu.h"

DropDownMenu::DropDownMenu() {

}

DropDownMenu::DropDownMenu(std::vector<std::string> items) {
  // Initialize the DropDownMenu object with items provided
  for (int i = 0; i < items.size(); ++i) {
    itemList.addItem(items.at(i));
  }
}

void DropDownMenu::draw(sf::RenderTarget& window, sf::RenderStates states) const {
  window.draw(inputBox);

  if (States::stateEnabled(States::ITEMAPPEARED)) {
    window.draw(itemList);
  }
}

void DropDownMenu::addEventHandler(sf::RenderWindow& window, sf::Event event) {
  itemList.addEventHandler(window, event);
  inputBox.addEventHandler(window, event);
}

void DropDownMenu::update() {
  itemList.update();
  inputBox.update();
}

Snapshot& DropDownMenu::getSnapshot() {

}

void DropDownMenu::applySnapshot(const Snapshot& snapshot) {

}
