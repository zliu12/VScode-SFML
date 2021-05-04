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
    HIDDEN, HIGHLIGHTED, DISABLED, CURSORBLINKING, BACKGROUNDCOLORED, NEWTXT,
    // This should always be the last state, hold the number of ObjectState
    LASTSTATE
  };

  // Default constructor
  States();
  // Check if a particular state is enabled
  bool checkIfStateEnabled(ObjectState state) ;
  // Enable a particular state (enum type)
  void enableState(ObjectState state);
  // Disable a particular state (enum type)
  void disableState(ObjectState state);

 private:
  // Store all the various states an object can hold
  std::map<ObjectState, bool> states;
};

#endif  // STATES_H_