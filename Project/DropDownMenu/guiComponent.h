/**
 * Project 1 - GUI Component Header File
 *
 * Copyright (c) [2021], Zhao Liu.
 */

#ifndef GUICOMPONENT_H_
#define GUICOMPONENT_H_

#include "SFML/Graphics.hpp"
#include "EventHandler.h"
#include "States.h"
#include "SnapshotInterface.h"

class GuiComponent : public EventHandler,
                     public States,
                     public SnapshotInterface,
                     public sf::Drawable,
                     public sf::Transformable {
 public:
  // From the sf::Drawable class
  virtual void draw(sf::RenderTarget& window, sf::RenderStates states) const = 0;

  // From EventHandler
  virtual void addEventHandler(sf::RenderWindow& window, sf::Event event) = 0;
  virtual void update() = 0;

  // From SnapshotInterface
  virtual Snapshot& getSnapshot() = 0;
  virtual void applySnapshot(const Snapshot& snapshot) = 0;
};


#endif  // GUICOMPONENT_H_