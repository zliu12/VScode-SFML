/**
 * Project 1 - Type Header
 *
 * Copyright (c) [2021], Zhao Liu.
 */

#ifndef TYPE_H_
#define TYPE_H_
#include "SFML/Graphics.hpp"
#include "guiComponent.h"

class Typing : public GuiComponent {
 private:
  sf::Font typingfont;
  sf::Text txt;
  sf::String str;

 public:
  // Default constructor
  Typing();

  // Load font
  void loadTypingFont();

  // Set font
  void setTypingFont();

  // Set character size
  void setCharSize(unsigned charSize);

  // Set typing position
  void setCharPos(float x, float y);

  // Set character color
  void setCharColor(sf::Color color);

  // Get text bound width
  float getTxtWidthBound();

  // Get text bound height
  float getTxtHeightBound();

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