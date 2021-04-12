/**
 * Project 1 - Text Input Header
 *
 * Copyright (c) [2021], Zhao Liu.
 */

#ifndef TEXTINPUT_H_
#define TEXTINPUT_H_
#include "guiComponent.h"             // SFML
#include "InputBoxLabel.h"            // class InputBoxLabel
#include "InputBox.h"                 // class TextInputBox
#include "Cursor.h"                   // class Cursor
#include "Type.h"                     // class Typing
#include <string>                     // std::string

class TextInput : public GuiComponent {
 private:
  InputBox inputBox;
  InputBoxLabel inputBoxLabel;
  Cursor cursor;
  Typing inputText;
  bool isClicked = true;

 public:
  // Default constructor
  TextInput();

  /* Typing */
  // Set typing font
  void setTypingFont();

  /* Text Input Box */
  // Set input box size
  void setInputBoxSize(float x, float y);
  // Set input box position
  void setInputBoxPos(float x, float y);
  // Set input box filled color
  void setInputBoxFilledColor(sf::Color color);
  // Set input box outline color
  void setInputBoxOutlineColor(sf::Color color);
  // Set input Box outline thickness
  void setInputBoxOutlineThickness(float thickness);


  /* Text Input Box Label */
  // Set font
  void setLabelFont();
  // Set label content
  void setLabelContent(std::string labelContent);
  // Set label size
  void setLabelSize(float labelSize);
  // Set label position
  void setLabelPos(float x, float y);

  
  /* Cursor */
  // Set cursor size
  void setCursorSize(float x, float y);
  // Set cursor position
  void setCursorPos(float x, float y);
  // Set cursor color
  void setCursorColor(sf::Color color);


  /* Click to enable typing and blinking cursor */
  // Set isClicked to true
  void clikeToEnable();

  // Draw function
  virtual void draw(sf::RenderTarget& window, sf::RenderStates state) const;

  // From EventHandler
  virtual void addEventHandler(sf::RenderWindow& window, sf::Event event);
  virtual void update();

  // From SnapshotInterface
  virtual Snapshot& getSnapshot();
  virtual void applySnapshot(const Snapshot& snapshot);
};

#endif  // TEXTINPUT_H_