/**
 * InputBox - Header
 *
 * Copyright (c) [2021], Zhao Liu.
 */

#ifndef INPUTBOX_H_
#define INPUTBOX_H_
#include "GuiComponent.h"
#include "MouseEvents.h"
#include "States.h"
#include "ItemList.h"

class InputBox : public sf::RectangleShape, public States {
 private:
  sf::RectangleShape inputBox;
  sf::Text inputTxt;
  // bool newTxt;
  static bool showList;
  void enableShowList();
  void disableShowList();

 public:
  // // Set newTxt true
  // void setNewTxtTrue();

  // // Set newTxt false
  // void setNewTxtFalse();

  // // Get newTxt
  // bool getNewTxt();

  // Set inputTxt
  void setInputTxt(std::string str);
  
  // Return listToggle
  static bool getShowList();

  // Default constructor
  InputBox();

  // Customized constructor
  InputBox(sf::String inputStr);

  // Set inputTxt in the center of the inputBox
  void centerInputTxt();
  
  // From sf::Drawable
  void draw(sf::RenderTarget& window, sf::RenderStates states) const;

  // From EventHandler
  void addEventHandler(sf::RenderWindow& window, sf::Event event);
  void update();
};

#endif  // INPUTBOX_H_