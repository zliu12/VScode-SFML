/**
 * Create a Box for Text Input - Header
 *
 * Copyright (c) [2021], Zhao Liu.
 */

// eventhandler: middle guy
// states: trigger stuff
// snapshot: record state and setting of the object, push to stack  

#ifndef TEXTBOX_H_
#define TEXTBOX_H_
#include "SFML/Graphics.hpp"
#include "guiComponent.h"

class TextBox : public GuiComponent {
 private:
 sf::RectangleShape rectangleInputBox;

 public:
  // Default constructor
  TextBox();

  // Set input box size
  void setBoxSize(float x, float y);

  // Set input box position
  void setBoxPos(float x, float y);

  // Set input box filled color
  void setBoxFilledColor(sf::Color color);

  // Set input box outline color
  void setBoxOutlineColor(sf::Color color);

  // Set input Box outline thickness
  void setBoxOutlineThickness(float thickness);

  // Get input box position.x
  float getBoxPosX();

  // Get input box position.y
  float getBoxPosY();

  // Get input box width
  float getBoxWidth();

  // Get input box height
  float getBoxHeight();

  // Get input box bounds
  sf::FloatRect getGlobalbounds();
  
  // Draw function
  virtual void draw(sf::RenderTarget& window, sf::RenderStates state) const;

  // From EventHandler
  virtual void addEventHandler(sf::RenderWindow& window, sf::Event event);
  virtual void update();
  
  // From SnapshotInterface
  virtual Snapshot& getSnapshot();
  virtual void applySnapshot(const Snapshot& snapshot);
};

#endif  // TEXTBOX_H_