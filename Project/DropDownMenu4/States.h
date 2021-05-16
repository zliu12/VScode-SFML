/**
 * States - Header
 *
 * Copyright (c) [2021], Zhao Liu.
 */

#ifndef STATES_H_
#define STATES_H_
#include "SFML/Graphics.hpp"
#include <iostream>
#include <map>

class States {
 public:
  enum ObjectState {
    HIDDEN,
    HIGHLIGHTED,
    DISABLED,
    CURSORBLINKING,
    DISPLAYON,
    LASTSTATE           // hold the number of Objectstate
  };

  // Default constructor
  States();

  // Check if a state is enabled
  bool isEnabled(const ObjectState state);

  // Set a state true
  bool enableState(ObjectState state);

  // Set a state false
  bool disableState(ObjectState state);

 private:
  std::map<ObjectState, bool> statesMap;
};

#endif  // STATES_H_