/**
 * States - Implementation
 *
 * Copyright (c) [2021], Zhao Liu.
 */

#include "States.h"

// Default constructor
States::States() {
  for (int i = HIDDEN; i < LASTSTATE; ++i) {
    // Set all states false
    statesMap[static_cast<ObjectState>(i)] = false;
  }
}

// Check if a state is enabled
  bool States::isEnabled(const ObjectState state) {
  if (statesMap.count(state) > 0) {
    return statesMap[state];
  }
  return false;
}

// Set a state true
bool States::enableState(ObjectState state) {
  statesMap[state] = true;
}

// Set a state false
bool States::disableState(ObjectState state) {
  statesMap[state] = false;
}