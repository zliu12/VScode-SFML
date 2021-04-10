/**
 * Project 1 - GUI Component - States Header
 *
 * Copyright (c) [2021], Zhao Liu.
 */

#ifndef STATES_H_
#define STATES_H_

class States {
 public:
  enum ObjectState {
    HIDDEN, HIGHLIGHTED, DISABLED,
    // This should always be the last state
    LASTSTATE
  };

  void checkIfStateEnabled();
  void enableState();
  void disableState();
};

#endif  // STATES_H_