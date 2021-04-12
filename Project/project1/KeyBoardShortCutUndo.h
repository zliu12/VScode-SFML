/**
 * Project 1 - Key Board Short Cut Undo Header
 *
 * Copyright (c) [2021], Zhao Liu.
 */

#ifndef UNDO_H_
#define UNDO_H_
#include "guiComponent.h"

class Undo : public GuiComponent {
 public:
  static bool isUndo();

  // From the sf::Drawable class
  virtual void draw(sf::RenderTarget& window, sf::RenderStates states) const;

  // From EventHandler
  virtual void addEventHandler(sf::RenderWindow& window, sf::Event event);
  virtual void update();

  // From SnapshotInterface
  virtual Snapshot& getSnapshot();
  virtual void applySnapshot(const Snapshot& snapshot);
};

#endif  // UNDO_H_