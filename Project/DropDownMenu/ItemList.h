/**
 * ItemList - Header
 *
 * Copyright (c) [2021], Zhao Liu.
 */

/* 
A list of all the items, position, vertically aligned, centered in the whole 
box
 */

#ifndef ITEMLIST_H_
#define ITEMLIST_H_
#include "States.h"
#include "linkedList.h"
#include "Item.h"
#include <vector>
#include <string>

class ItemList : public States, public sf:: {
 private:
  linkedList<Item> list_item;
  linkedList<Item>::iterator list_iter;
  Item item;
  sf::RectangleShape dropDownBox;
  int itemAddedCount = 0;


 public:
  // Default contructor
  ItemList();

  // Customized constructor
  ItemList(std::vector<std::string> strVec);

  // Add item (sf::String)
  void addItem(sf::String str);

  // Set drop down box size
  void setDropDownBoxSize(float x, float y);
  
  // Set outline color
  void setOutlineColor(sf::Color color); 

  // From the sf::Drawable class
  void draw(sf::RenderTarget& window, sf::RenderStates states) const;

  // From EventHandler
  void addEventHandler(sf::RenderWindow& window, sf::Event event);
  void update();

  // From SnapshotInterface
  Snapshot& getSnapshot();
  void applySnapshot(const Snapshot& snapshot);
};

#endif  // ITEMLIST_H_