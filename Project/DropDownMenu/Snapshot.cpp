/**
 * Project 1 - GUI Component - Snapshot Implementation
 *
 * Copyright (c) [2021], Zhao Liu.
 */

#include "Snapshot.h"
#include <string>

std::string Snapshot::getInfo() const {
  return info;
}

States Snapshot::getObjState() const {
  return objState;
}