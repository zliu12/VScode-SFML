/**
 * GuiComponent - Header
 *
 * Copyright (c) [2021], Zhao Liu.
 */

#ifndef GUICOMPONENT_H_
#define GUICOMPONENT_H_
#include <iostream>
#include <cstdlib>
#include "EventHandler.h"
#include "States.h"
#include "SnapshotInterface.h"
#include "ProjectFont.h"
#include "ProjectIcon.h"

class GuiComponent : public EventHandler,
                     public States,
                     public SnapshotInterface,
                     public ProjectFont,
                     public ProjectIcon,
                     public sf::Drawable,
                     public sf::Transformable
{
 public:
  // From sf::Drawable
  virtual void draw(sf::RenderTarget& window, sf::RenderStates states) const = 0;

  // From EventHandler
  virtual void addEventHandler(sf::RenderWindow& window, sf::Event event) = 0;
  virtual void update() = 0;

  // Fron SnapshotInterface
  virtual Snapshot& getSnapshot() = 0;
  virtual void applySnapshot(const Snapshot& snapshot) = 0;
};


#endif  // GUICOMPONENT_H_