/**
 * StatesInputBox - Implementation
 *
 * Copyright (c) [2021], Zhao Liu.
 */

#include "StatesInputBox.h"

StatesInputBox::StatesInputBox() {
  for (int i = INPUTBOXBGCOLOR; i < INPUTBOXLASTSTATE; ++i) {
    inputBoxStatesMap[static_cast<InputBoxStates>(i)] = false;
  }
}

bool StatesInputBox::inputBoxStateEnabled(InputBoxStates state) {
  if (inputBoxStatesMap.count(state) > 0) {
    return inputBoxStatesMap[state];
  }
  return false;
}

void StatesInputBox::enableInputBoxState(InputBoxStates state) {
  inputBoxStatesMap[state] = true;
}

void StatesInputBox::disableInputBoxState(InputBoxStates state) {
  inputBoxStatesMap[state] = false;
}