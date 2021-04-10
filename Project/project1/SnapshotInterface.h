/**
 * Project 1 - GUI Component - Snapshot Interface Header
 *
 * Copyright (c) [2021], Zhao Liu.
 */

#ifndef SNAPSHOTINTERFACE_H_
#define SNAPSHOTINTERFACE_H_

#include "Snapshot.h"

class SnapshotInterface {
 public:
  // This function will return a snapshot of the object's current state
  virtual Snapshot& getSnapshot() = 0;

  // This function will apply a snapshot to the object
  // This will revert the object back to the state that has been recorded in the
  // snapshot
  virtual void applySnapshot(const Snapshot& snapshot) = 0;
};

#endif  // SNAPSHOTINTERFACE_H_