/**
 * Project 1 - GUI Component - States Header
 *
 * Copyright (c) [2021], Zhao Liu.
 */

#ifndef STATES_H_
#define STATES_H_
#include "SFML/Graphics.hpp"
#include <map>

class States {
 public:
  enum ObjectState {
    HIDDEN, HIGHLIGHTED, DISABLED,
    // This should always be the last state, hold the number of ObjectState
    LASTSTATE
  };

  // Default constructor
  States();
  // Check if a particular state is enabled
  bool checkIfStateEnabled(ObjectState state);
  // Enable a particular state
  void enableState(ObjectState state);
  // Disable a particular state
  void disableState(ObjectState state);

 private:
  std::map<ObjectState, bool> states;
};

#endif  // STATES_H_