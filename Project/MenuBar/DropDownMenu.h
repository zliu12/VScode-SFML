/**
 * DropDownMenu - Header
 *
 * Copyright (c) [2021], Zhao Liu.
 */

#ifndef DROPDOWNMENU_H_
#define DROPDOWNMENU_H_

#include "guiComponent.h"
#include "Item.h"
#include "ItemList.h"
#include "InputBox.h"

class DropDownMenu : public guiComponent {
 private:
  Item item;
  ItemList itemList;
  InputBox inputBox;

 public:
  DropDownMenu();
  DropDownMenu(std::vector<std::string> items);
  void draw(sf::RenderTarget& window, sf::RenderStates states) const;
  void addEventHandler(sf::RenderWindow& window, sf::Event event);
  void update();
  Snapshot& getSnapshot();
  void applySnapshot(const Snapshot& snapshot);
};


#endif  // DROPDOWNMENU_H_