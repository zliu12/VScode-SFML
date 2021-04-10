/**
 * Project 1 - Cursor Header
 *
 * Copyright (c) [2021], Zhao Liu.
 */

#ifndef CURSOR_H_
#define CURSOR_H_
#include "guiComponent.h"
#include <string>

class Cursor : public GuiComponent {
 private:
  std::string cursor;
  bool isSelected = false;
  bool inputBoxLimit = false;
  unsigned boxLimit;

 public:
  // Default constructor
  Cursor();

  // From the sf::Drawable class
  virtual void draw(sf::RenderTarget& window, sf::RenderStates states) const;

  // From EventHandler
  virtual void addEventHandler(sf::RenderWindow& window, sf::Event event);
  virtual void update();

  // From SnapshotInterface
  virtual Snapshot& getSnapshot();
  virtual void applySnapshot(const Snapshot& snapshot);
};

#endif  // CURSOR_H_