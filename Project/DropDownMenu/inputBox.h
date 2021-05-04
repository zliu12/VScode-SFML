/**
 * InputBox - Header
 *
 * Copyright (c) [2021], Zhao Liu.
 */

/* 
Box on the top
 */

#ifndef INPUTBOX_H_
#define INPUTBOX_H_

#include "SFML/Graphics.hpp"
#include <vector>
#include "guiComponent.h"
#include "MouseEvent.h"
#include "States.h"
#include "Item.h"
#include "ItemList.h"

class InputBox : public sf::RectangleShape, public States {
 private:
  sf::RectangleShape topBox;
  Item item;
  ItemList itemList;
  sf::Text defaultTxt;
  sf::Font defaultTxtFont;
  void topBoxCenterTxt();

 public:
  // Default constructor
  InputBox();

  // Load font
  void loadDefaultTxtFont();

  // Set input box size
  void setInputBoxSize(float x, float y);

  // Set input box position
  void setInputBoxPos(float x, float y);

  // Set input box filled color
  void setInputBoxFilledColor(const sf::Color &color);

  // Set input box outline color
  void setInputBoxOutlineColor(const sf::Color &color);

  // Set input box margin size
  void setInputBoxMarginSize(const float &marginSize);

  // From the sf::Drawable class
  void draw(sf::RenderTarget& window, sf::RenderStates states) const;

  // From EventHandler
  void addEventHandler(sf::RenderWindow& window, sf::Event event);
  void update();

  /*
  // From SnapshotInterface
  Snapshot& getSnapshot();
  void applySnapshot(const Snapshot& snapshot);
  */
};

#endif  // INPUTBOX_H_