/**
 * Snapshot - Implementation
 *
 * Copyright (c) [2021], Zhao Liu.
 */

#include "Snapshot.h"

std::string Snapshot::getData() const {
  return data;
}

States Snapshot::getObjState() const {
  return objState;
}
