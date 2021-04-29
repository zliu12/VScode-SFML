/**
 * Project 1 - GUI Component - Event Handler Header
 *
 * Copyright (c) [2021], Zhao Liu.
 */

/* 
Event Handler:
Runs only when the window receives input
Object should define what event or events it is looking for, and how it will handle
the event:
1. Click in a text box, then a cursor appears and begins blinking:
    The event that the input box was listening for was a click within the bounds
    of the box, the event was handled by changing the state of the cursor so that
    it is visible

Update:
Runs each window iteration
Event handler changes the cursor's state so that it will be visible, then update
function updates the cursor so that it performs in the state it is in, the update
function will do anything it needs to do so that the cursor is visible and blinking
on and off.
Only when the object's state is not set to hidden, the object will be drawn, so
in this case, you will only need to add the blinking functionality in the cursor's
update function
 */

#ifndef EVENTHANDLER_H_
#define EVENTHANDLER_H_
#include "SFML/Graphics.hpp"

class EventHandler {
 public:
  virtual void addEventHandler(sf::RenderWindow& window, sf::Event event) = 0;
  virtual void update() = 0;
};

#endif  // EVENTHANDLER_H_