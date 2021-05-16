/**
 * guiComponent - Header
 *
 * Copyright (c) [2021], Zhao Liu.
 */

#ifndef GUICOMPONENT_H_
#define GUICOMPONENT_H_
#include "SFML/Graphics.hpp"
#include "EventHandler.h"
#include "States.h"
#include "StatesItem.h"
#include "StatesInputBox.h"
#include "SnapshotInterface.h"
#include "projectFont.h"
#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>

class guiComponent : public EventHandler, 
                     public States,
                     public StatesItem,
                     public StatesInputBox,
                     public SnapshotInterface,
                     public ProjectFont,
                     public sf::Drawable,
                     public sf::Transformable {
 public:
  virtual void draw(sf::RenderTarget& window, sf::RenderStates states) const = 0;
  virtual void addEventHandler(sf::RenderWindow& window, sf::Event event) = 0;
  virtual void update() = 0;
  virtual Snapshot& getSnapshot() = 0;
  virtual void applySnapshot(const Snapshot& snapshot) = 0;
};


#endif  // GUICOMPONENT_H_