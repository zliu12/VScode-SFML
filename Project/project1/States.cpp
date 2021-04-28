/**
 * Project 1 - GUI Component - States Implementation
 *
 * Copyright (c) [2021], Zhao Liu.
 */

#include "States.h"

States::States() {
  // ObjectState type loaded in the map, set to false by default
  for (int i = HIDDEN; i < LASTSTATE; ++i) {
    states[static_cast<ObjectState>(i)] = false;
  }
}

bool States::checkIfStateEnabled(ObjectState state) {
  // Use map::count() to check if ObjectState type state (the key) is present 
  // in the map container (1 or 0)
  if (states.count(state) > 0) {
    // Return the state (true or false) of ObjectState (HIDDEN, HIGHLIGHTED,DISABLED, etc)
    return states[state];
  }
  return false;
}

void States::enableState(ObjectState state) {
  states[state] = true;
}

void States::disableState(ObjectState state) {
  states[state] = false;
}