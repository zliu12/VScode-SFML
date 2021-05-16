/**
 * MenuBar - Header
 *
 * Copyright (c) [2021], Zhao Liu.
 */

#ifndef MENUBAR_H_
#define MENUBAR_H_
#include "guiComponent.h"
#include "linkedList.h"
#include "Menu.h"
#include "InputBox.h"

// typedef std::vector<std::vector<std::string>> vecOfStrVec;
class MenuBar : public guiComponent {
 private:
  linkedList<Menu> menuList;
  Menu menuAdded;
  int menuAddedCount = 0;
  int menuItemAddedCount = 0;

 public:
  MenuBar();
  MenuBar(std::vector<std::string> menuVec);
  void addMenu(sf::String menuStr);
  void addMenuItem(sf::String menuListStr);
  void draw(sf::RenderTarget& window, sf::RenderStates states) const;
  void addEventHandler(sf::RenderWindow& window, sf::Event event);
  void update();
  Snapshot& getSnapshot();
  void applySnapshot(const Snapshot& snapshot);
};


#endif  // MENUBAR_H_