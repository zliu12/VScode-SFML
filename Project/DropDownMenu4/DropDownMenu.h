/**
 * DropDownMenu - Header
 *
 * Copyright (c) [2021], Zhao Liu.
 */

#ifndef DROPDOWNMENU_H_
#define DROPDOWNMENU_H_
#include "GuiComponent.h"
#include "Item.h"
#include "ItemList.h"
#include "InputBox.h"

class DropDownMenu : public GuiComponent {
 private:
  Item item;
  ItemList itemList;
  InputBox inputBox;
  bool drawList = false;

 public:
  // Default constructor
  DropDownMenu();

  // Customized constructor
  DropDownMenu(std::vector<std::string> strVec);

  // From sf::Drawable
  virtual void draw(sf::RenderTarget& window, sf::RenderStates states) const;

  // From EventHandler
  virtual void addEventHandler(sf::RenderWindow& window, sf::Event event);
  virtual void update();

  // Fron SnapshotInterface
  virtual Snapshot& getSnapshot();
  virtual void applySnapshot(const Snapshot& snapshot);
};

#endif  // DROPDOWNMENU_H_