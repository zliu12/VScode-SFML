/**
 * DropDownMenu - Implementation
 *
 * Copyright (c) [2021], Zhao Liu.
 */

#include "DropDownMenu.h"
#include <iostream>

void DropDownMenu::initialize() {

}

DropDownMenu::DropDownMenu() {
  /* top box */
  topBox.setSize(sf::Vector2f(1500, 200));        // Set top box size 1500 x 200
  topBox.setPosition(sf::Vector2f(500, 100));     // Set top box posistion (500, 200)

  /* itemsBox(drop down box) */
  itemsBox.setDropDownBoxSize(1500, 1000);      // Set itemsBox size 1500x1000
  itemsBox.setPosition(sf::Vector2f(500, 310));    // Set itemsbox posistion
}

DropDownMenu::DropDownMenu(std::vector<std::string> items) {

}

// From the sf::Drawable class
void DropDownMenu::draw(sf::RenderTarget& window, sf::RenderStates states) const {
  window.draw(topBox);
}

// From EventHandler
void DropDownMenu::addEventHandler(sf::RenderWindow& window, sf::Event event) {
  topBox.addEventHandler(window, event);
}


void DropDownMenu::update() {
  topBox.update();
}

// From SnapshotInterface
Snapshot& DropDownMenu::getSnapshot() {}
void DropDownMenu::applySnapshot(const Snapshot& snapshot) {}