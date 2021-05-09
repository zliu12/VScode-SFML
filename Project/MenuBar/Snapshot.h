/**
 * Snapshot - Header
 *
 * Copyright (c) [2021], Zhao Liu.
 */

#ifndef SNAPSHOT_H_
#define SNAPSHOT_H_
#include "States.h"
#include <string>

class Snapshot {
 private:
  std::string data;
  States objState;

 public:
  std::string getData() const;
  States getObjectState() const;
};


#endif  // SNAPSHOT_H_