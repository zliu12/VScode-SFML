/**
 * States - Implementation
 *
 * Copyright (c) [2021], Zhao Liu.
 */

#include "States.h"

std::map<States::ObjectState, bool> States::statesMap;

States::States() {
  for (int i = HIDDEN; i < LASTSTATE; ++i) {
    statesMap[static_cast<ObjectState>(i)] = false;
  }
}

bool States::stateEnabled(ObjectState state) {
  if (statesMap.count(state) > 0) {
    return statesMap[state];
  }
  return false;
}

void States::enableState(ObjectState state) {
  statesMap[state] = true;
}

void States::disableState(ObjectState state) {
  statesMap[state] = false;
}