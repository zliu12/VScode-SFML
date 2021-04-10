/**
 * Create a Box for Text Input - Header
 *
 * Copyright (c) [2021], Zhao Liu.
 */

// eventhandler: middle guy
// states: trigger stuff
// snapshot: record state and setting of the object, push to stack  

#ifndef TEXTINPUTBOX_H_
#define TEXTINPUTBOX_H_
#include "guiComponent.h"

class TextInputBox : public GuiComponent {
 private:
  sf::RectangleShape rectangleInputBox;

 public:
  // Default constructor
  TextInputBox();
  // Draw function
  virtual void draw(sf::RenderTarget& window, sf::RenderStates state) const;

  // From EventHandler
  virtual void addEventHandler(sf::RenderWindow& window, sf::Event event);
  virtual void update();

  // From SnapshotInterface
  virtual Snapshot& getSnapshot();
  virtual void applySnapshot(const Snapshot& snapshot);

};

#endif  // TEXTINPUTBOX_H_