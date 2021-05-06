/**
 * Project 1 - GUI Component - States Implementation
 *
 * Copyright (c) [2021], Zhao Liu.
 */

#include "States.h"

// Store states an object(except type Item) can hold
std::map<States::ObjectState, bool> States::objStates;

// Default constructor
States::States() {
  // Initialize ObjectState to false
  for(int i = Hidden; i < OBJECTLASTSTATE; ++i) {
    objStates[static_cast<ObjectState>(i)] = false;
  }
}

// Check if a particular ObjectState state is enabled
bool States::isObjStateEnabled(ObjectState state) {
  // Use map::count() to check if ObjectState type state (the key) is present 
  // in the map container (1 or 0)
  if(objStates.count(state) > 0) {
    // Return the state (true or false) of ObjectState states
    return objStates[state];
  }
  return false;
}

// Enable a particular state (enum ObjectState type)
void States::enableObjState(ObjectState state) {
  objStates[state] = true;
}

// Disable a particular state (enum ObjectState type)
void States::disableObjState(ObjectState state) {
  objStates[state] = false;
}