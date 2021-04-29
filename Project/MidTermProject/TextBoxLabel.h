/**
 * Project 1 - InputBoxLablel Header
 *
 * Copyright (c) [2021], Zhao Liu.
 */

#ifndef TEXTBOXLABEL_H_
#define TEXTBOXLABEL_H_
#include "guiComponent.h"
#include "SFML/Graphics.hpp"
#include <string>

class TextBoxLabel : public GuiComponent{
 private:
  sf::Text boxLabel;
  sf::Font labelFont;

 public:
  // Default constructor
  TextBoxLabel();

  // Load font
  void loadFont();

  // Set font
  void setLabelFont();
  
  // Set label content
  void setLabelContent(std::string labelContent);

  // Set label size
  void setLabelSize(unsigned lableSize);

  // Set label position
  void setLabelPos(float x, float y);
  
  // From the sf::Drawable class
  virtual void draw(sf::RenderTarget& window, sf::RenderStates states) const;

  // From EventHandler
  virtual void addEventHandler(sf::RenderWindow& window, sf::Event event);
  virtual void update();

  // From SnapshotInterface
  virtual Snapshot& getSnapshot();
  virtual void applySnapshot(const Snapshot& snapshot);
};

#endif  // TEXTBOXLABEL_H_