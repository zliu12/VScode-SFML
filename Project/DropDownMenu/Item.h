/**
 * Item - Header
 *
 * Copyright (c) [2021], Zhao Liu.
 */

/* 
Representing one item in the list, when mouse hovered over, one item it changes
the background color to a different color
 */

#ifndef ITEM_H_
#define ITEM_H_
#include "SFML/Graphics.hpp"
#include "MouseEvent.h"
#include "guiComponent.h"
#include "States.h"
#include "projectFont.h"
#include <string>

class Item : public GuiComponent {
 private:
  sf::Font itemFont;
  sf::Text itemTxt;
  sf::RectangleShape itemBox;

 public:
  // Default constructor
  Item();

  // Make the itemTxt in the center
  void itemCenterTxt();

  // Set the item box background color
  void setBgColor(const sf::Color& bgColor);

  // get the item box background color
  const sf::Color& getBgColor() const;

  // Set the itemTxt color
  void setTxtColor(const sf::Color& txtColor);

  // Get the itemTxt color
  const sf::Color& getTxtColor() const;

  // Set the outline color of the item box
  void setOutlineColor(const sf::Color& outlineColor);

  // Set the size of item box
  void setItemBoxSize(float x, float y);

  // Get the sf::String of itemTxt
  sf::String getStr();

  // Set the std::string of itemTxt
  void setItemStr(sf::String str);

  // Load itemTxt font
  void loadItemFont();

  // Set itemTxt font
  void setItemTxtFont(sf::Font font);

  // Get the difference between item itemTxt height and item box height
  float getHeightDifference();

  // Set the item txt position
  void setItemTxtPos(float x, float y);

  // Set the item box position
  void setItemBoxPos(float x, float y);

  // From the sf::Drawable class
  void draw(sf::RenderTarget& window, sf::RenderStates states) const;

  // From EventHandler
  void addEventHandler(sf::RenderWindow& window, sf::Event event);
  void update();

  // From SnapshotInterface
  Snapshot& getSnapshot();
  void applySnapshot(const Snapshot& snapshot);
};

#endif  // ITEM_H_