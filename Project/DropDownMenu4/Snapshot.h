/**
 * Snapshot - Header
 *
 * Copyright (c) [2021], Zhao Liu.
 */

#ifndef SNAPSHOT_H_
#define SNAPSHOT_H_
#include <string>
#include "States.h"

class Snapshot {
 private:
  std::string data;
  States objState;

 public:
  std::string getData() const;
  States getObjState() const;
};


#endif  // SNAPSHOT_H_