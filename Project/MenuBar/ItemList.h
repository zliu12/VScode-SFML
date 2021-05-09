/**
 * ItemList - Header
 *
 * Copyright (c) [2021], Zhao Liu.
 */

#ifndef ITEMLIST_H_
#define ITEMLIST_H_
#include "guiComponent.h"
#include "linkedList.h"
#include "Item.h"

class ItemList : public guiComponent {
 private:
  linkedList<Item> list;
  int itemAddedCount = 0;

 public:
  ItemList();
  ItemList(std::vector<std::string> strVec);
  void addItem(sf::String str);
  void draw(sf::RenderTarget& window, sf::RenderStates states) const;
  void addEventHandler(sf::RenderWindow& window, sf::Event event);
  void update();
  Snapshot& getSnapshot();
  void applySnapshot(const Snapshot& snapshot);
};

#endif  // ITEMLIST_H_