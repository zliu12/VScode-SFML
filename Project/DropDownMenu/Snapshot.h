/**
 * Project 1 - GUI Component - Snapshot Header 
 *
 * Copyright (c) [2021], Zhao Liu.
 */

/* 
This class is for undo feature
Handle taking a snapshot of the current states and value of our objects.
The snapshots will eventually be pushed to a stack.
Hold the information about the snapshot, should have information about which states
the object is in and any data it holds
 */

#ifndef SNAPSHOT_H_
#define SNAPSHOT_H_
#include <string>
#include "States.h"

class Snapshot {
 private:
  std::string info;
  States objState;

 public:
 std::string getInfo() const;
 States getObjState() const;
 
};

#endif  // SNAPSHOT_H_