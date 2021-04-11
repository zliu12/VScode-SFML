/**
 * Project 1 - Type Header
 *
 * Copyright (c) [2021], Zhao Liu.
 */

#ifndef TYPE_H_
#define TYPE_H_
#include "guiComponent.h"
#include "InputBox.h"
#include <string>

class Type : public GuiComponent {
 private:
  sf::Font typingfont;
  sf::Text txt;
  sf::String str;

 public:
  // Default constructor
  Type();

  // Load font
  void loadTypingFont();

  // Set font
  void setTypingFont();

  // Set character size
  void setCharSize();

  // Set typing position
  void setCharPos();

  // Set character color
  void setCharColor();

  // Delete input Character
  void deleteInputChar(sf::RenderWindow& window, sf::Event event);

  // From the sf::Drawable class
  virtual void draw(sf::RenderTarget& window, sf::RenderStates states) const;

  // From EventHandler
  virtual void addEventHandler(sf::RenderWindow& window, sf::Event event);
  virtual void update();

  // From SnapshotInterface
  virtual Snapshot& getSnapshot();
  virtual void applySnapshot(const Snapshot& snapshot);
};

#endif  // TYPE_H_