/**
 * Project 1 - GUI Component - States Header
 *
 * Copyright (c) [2021], Zhao Liu.
 */

/* 
A setting for an object which allows the object to do variaous things, look different,
perform in a certain way...
Now each object will be allowed to be in several states at one time
 */

#ifndef STATES_H_
#define STATES_H_
#include "SFML/Graphics.hpp"
#include <map>

class States {
 public:
  // Enum holds all the different types of states available, all false by default
  enum ObjectState {
    Hidden, Highlighted, Disabled, CursorBlinking, InputBoxBackgroudColor, 
    ItemListHidden, ItemBoxClicked, ItemTxtClicked, 
    // This should always be the last state, hold the number of ObjectState
    OBJECTLASTSTATE
  };

  // Default constructor
  States();

  // Check if a particular ObjectState state is enabled
  static bool isObjStateEnabled(ObjectState state);

  // Enable a particular state (enum ObjectState type)
  static void enableObjState(ObjectState state);

  // Disable a particular state (enum ObjectState type)
  static void disableObjState(ObjectState state);

 private:
  // Store states an object(except type Item) can hold
  static std::map<ObjectState, bool> objStates;

  
};


#endif  // STATES_H_