/**
 * InputBox - Header
 *
 * Copyright (c) [2021], Zhao Liu.
 */

#ifndef INPUTBOX_H_
#define INPUTBOX_H_
#include "guiComponent.h"
#include "MouseEvent.h"
#include "Item.h"
#include "ItemList.h"

class InputBox : public guiComponent {
 private:
  sf::RectangleShape inputBox;
  sf::Text inputBoxTxt;
 
 public:
  InputBox();
  void inputBoxCenterTxt();

  /* Input box/txt position */
  void setInputBoxPos(float x, float y);
  void setInputBoxTxtPos(float x, float y);

  void setInputBoxTxt(sf::String newStr);
  void draw(sf::RenderTarget& window, sf::RenderStates states) const;
  void addEventHandler(sf::RenderWindow& window, sf::Event event);
  void update();
  Snapshot& getSnapshot();
  void applySnapshot(const Snapshot& snapshot);
};

#endif  // INPUTBOX_H_
