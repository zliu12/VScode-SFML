/**
 * DropDownMenu - Header
 *
 * Copyright (c) [2021], Zhao Liu.
 */

/* 
Similiar to a text input, will bring all of other 3 things together, when click
inside of the box, it will display the itemlist below, can scroll through and
select item, when select item, the input list disappear
 */

#ifndef DROPDOWNMENU_H_
#define DROPDOWNMENU_H_
#include "SFML/Graphics.hpp"
#include "guiComponent.h"
#include "KeyBoardShortCuts.h"
#include "History.h"
#include "InputBox.h"
#include "ItemList.h"
#include <vector>
#include <string>

class DropDownMenu : public GuiComponent {
 private:
  InputBox inputBox;
  ItemList itemList;
 
 public:
  DropDownMenu();
  DropDownMenu(std::vector<std::string> items);

  // From the sf::Drawable class
  virtual void draw(sf::RenderTarget& window, sf::RenderStates states) const;

  // From EventHandler
  void addEventHandler(sf::RenderWindow& window, sf::Event event);
  void update();

  // From SnapshotInterface
  Snapshot& getSnapshot();
  void applySnapshot(const Snapshot& snapshot);
};

#endif  // DROPDOWNMENU_H_
