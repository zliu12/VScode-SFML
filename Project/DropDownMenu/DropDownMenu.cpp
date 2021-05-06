/**
 * DropDownMenu - Implementation
 *
 * Copyright (c) [2021], Zhao Liu.
 */

#include "DropDownMenu.h"
#include <iostream>

DropDownMenu::DropDownMenu() {}

DropDownMenu::DropDownMenu(std::vector<std::string> items) {
  // Initialize the drop down menu with items provided
  for(int i = 0; i < items.size(); ++i) {
    itemList.addItem(items.at(i));
  }

  /* Initial state */
  States::enableObjState(States::ItemListHidden);          // ItemListHidden true
  States::disableObjState(States::InputBoxBackgroudColor); // InputBoxBackgroudColor false
}

// From the sf::Drawable class
void DropDownMenu::draw(sf::RenderTarget& window, sf::RenderStates states) const {
  window.draw(inputBox);
  if(!States::isObjStateEnabled(States::ObjectState::ItemListHidden)) {  // ItemListHidden false
    window.draw(itemList);                                              // draw itemList
  }
}

// From EventHandler
void DropDownMenu::addEventHandler(sf::RenderWindow& window, sf::Event event) {
  // if(KeyBoardShortCuts::isUndo()) {     // Undo
    // History::topHistory();              // Return the last pushed
    // History::popHistory();              // Abandon the last pushed
  // }
  
  itemList.addEventHandler(window, event);
  inputBox.addEventHandler(window, event);
}


void DropDownMenu::update() {
  inputBox.update();
  if(!States::isObjStateEnabled(States::ItemListHidden)) {    // ItemListHidden false
    itemList.update();                                        // update itemList
    // std::cout << "itemlist.update" << std::endl;
  }

  if(States::isObjStateEnabled(States::ItemBoxClicked) ||
     States::isObjStateEnabled(States::ItemTxtClicked)) {
      //  inputBox.modifyDefaultTxt("test5");
       inputBox.modifyDefaultTxt(itemList.getCurrentItemTxt());
       inputBox.topBoxCenterTxt();
     }
}

// From SnapshotInterface
Snapshot& DropDownMenu::getSnapshot() {}
void DropDownMenu::applySnapshot(const Snapshot& snapshot) {}