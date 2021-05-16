/**
 * ItemList - Header
 *
 * Copyright (c) [2021], Zhao Liu.
 */

#ifndef ITEMLIST_H_
#define ITEMLIST_H_
#include "GuiComponent.h"
#include "linkedList.h"
#include "Item.h"

class ItemList : public GuiComponent {
 private:
  linkedList<Item> itemList;
  int countItem = 0;
  float itemPosX = 0;
  float itemPosY = 0;
  std::string strClicked = "";

 public:
  // Default constructor
  ItemList();

  // Customized constructor
  ItemList(std::vector<std::string> strVec);

  // Get strCliced
  sf::String getStrClicked();

  // Add new item to itemList
  void addNewItem(sf::String itemStr);

  // From sf::Drawable
  virtual void draw(sf::RenderTarget& window, sf::RenderStates states) const;

  // From EventHandler
  virtual void addEventHandler(sf::RenderWindow& window, sf::Event event);
  virtual void update();

  // Fron SnapshotInterface
  virtual Snapshot& getSnapshot();
  virtual void applySnapshot(const Snapshot& snapshot);
};


#endif  // ITEMLIST_H_