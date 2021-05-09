/**
 * Menu - Header
 *
 * Copyright (c) [2021], Zhao Liu.
 */

#ifndef Menu_H_
#define Menu_H_

#include "guiComponent.h"
#include "Item.h"
#include "ItemList.h"
#include "InputBox.h"

class Menu : public guiComponent {
 private:
  Item item;
  ItemList itemList;
  InputBox inputBox;

 public:
  Menu();
  Menu(std::vector<std::string> items);
  void setMenuPosition(float x, float y);
  void setMenuStr(sf::String str);
  void draw(sf::RenderTarget& window, sf::RenderStates states) const;
  void addEventHandler(sf::RenderWindow& window, sf::Event event);
  void update();
  Snapshot& getSnapshot();
  void applySnapshot(const Snapshot& snapshot);
};


#endif  // Menu_H_