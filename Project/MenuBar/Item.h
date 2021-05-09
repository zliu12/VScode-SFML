/**
 * Item  - Header
 *
 * Copyright (c) [2021], Zhao Liu.
 */

#ifndef ITEM_H_
#define ITEM_H_
#include "guiComponent.h"
#include "MouseEvent.h"

class Item : public guiComponent {
 private:
  sf::Text itemTxt;
  sf::RectangleShape  itemBox;

 public:
  Item();
  void itemCenterTxt();
  sf::String getItemTxt();
  void setItemStr(sf::String str);
  void setItemPos(float x, float y);
  void draw(sf::RenderTarget& window, sf::RenderStates states) const;
  void addEventHandler(sf::RenderWindow& window, sf::Event event);
  void update();
  Snapshot& getSnapshot();
  void applySnapshot(const Snapshot& snapshot);
};


#endif  // ITEM_H_