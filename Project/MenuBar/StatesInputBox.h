/**
 * StatesInputBox - Header
 *
 * Copyright (c) [2021], Zhao Liu.
 */

#ifndef STATESINPUTBOX_H_
#define STATESINPUTBOX_H_
#include "SFML/Graphics.hpp"
#include <map>

class StatesInputBox {
 public:
  enum InputBoxStates {INPUTBOXBGCOLOR, INPUTBOXLASTSTATE};
  StatesInputBox();
  bool inputBoxStateEnabled(InputBoxStates state);
  void enableInputBoxState(InputBoxStates state);
  void disableInputBoxState(InputBoxStates state);

 private:
  std::map<InputBoxStates, bool> inputBoxStatesMap;
};

#endif  // STATESINPUTBOX_H_