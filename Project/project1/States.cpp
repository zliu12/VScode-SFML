/**
 * Project 1 - GUI Component - States Implementation
 *
 * Copyright (c) [2021], Zhao Liu.
 */

#include "States.h"

States::States() {
  for (int i = 0; i < LASTSTATE; ++i) {
    states[static_cast<ObjectState>(i)] = false;
  }
}

bool States::checkIfStateEnabled(ObjectState state) {
  if (states.count(state) > 0) {
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