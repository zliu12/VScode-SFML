/**
 * States - Header
 *
 * Copyright (c) [2021], Zhao Liu.
 */

#ifndef STATES_H_
#define STATES_H_
#include <map>

class States {
 public:
  enum ObjectState {
    HIDDEN, HIGHLIGHTED, DISABLED, CURSORBLINKING, BGCOLOR, ITEMAPPEARED,
    LASTSTATE
  };

  States();
  static bool stateEnabled(ObjectState state);
  static void enableState(ObjectState state);
  static void disableState(ObjectState state);

 private:
  static std::map<ObjectState, bool> statesMap;
};


#endif  // STATES_H_