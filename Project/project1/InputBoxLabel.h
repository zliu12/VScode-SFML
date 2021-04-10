/**
 * Project 1 - InputBoxLablel Header
 *
 * Copyright (c) [2021], Zhao Liu.
 */

#ifndef INPUTBOXLABEL_H_
#define INPUTBOXLABEL_H_
#include "guiComponent.h"
#include <string>

class InputBoxLabel : public GuiComponent {
 private:
  sf::Text boxLabel;
  sf::Font font;

 public:
  // Default constructor
  InputBoxLabel();
  // Load font
  void loadFont();
  // Set label content
  void setLabelContent(std::string labelContent);
  // Set label size
  void setLabelSize(unsigned lableSize);
  // Set label position
  void setLabelPosition(float x, float y);
  // From the sf::Drawable class
  virtual void draw(sf::RenderTarget& window, sf::RenderStates states) const;

  // From EventHandler
  virtual void addEventHandler(sf::RenderWindow& window, sf::Event event);
  virtual void update();

  // From SnapshotInterface
  virtual Snapshot& getSnapshot();
  virtual void applySnapshot(const Snapshot& snapshot);
};

#endif  // INPUTBOXLABEL_H_