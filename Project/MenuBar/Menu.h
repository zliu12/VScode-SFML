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
  Menu(std::vector<std::string> itemsVec);

  /* Menu input box / input box txt*/
  void setMenuInputBoxPosition(float x, float y);     // inputBox pos
  void setMenuInputBoxTxtPos();                       // inputBoxTxt pos
  void setMenuInputBoxStr(sf::String str);            // inputBoxTxt string

  /* ItemList */
  void setMenuItemBoxPos(float x, float y);           // itemList pos
  void setMenuItemTxtPos();                           // itemList txt pos
  void setMenuItemTxtStr(sf::String str);             // itemList txt string

  void setMenuStr(sf::String str);
  void draw(sf::RenderTarget& window, sf::RenderStates states) const;
  void addEventHandler(sf::RenderWindow& window, sf::Event event);
  void update();
  Snapshot& getSnapshot();
  void applySnapshot(const Snapshot& snapshot);
};


#endif  // Menu_H_