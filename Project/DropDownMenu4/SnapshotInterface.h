/**
 * SnapshotInterface - Header
 *
 * Copyright (c) [2021], Zhao Liu.
 */

#ifndef SNAPSHOTINTERFACE_H_
#define SNAPSHOTINTERFACE_H_
#include "Snapshot.h"

class SnapshotInterface {
 public:
  // Return a snapshot of the object's current state
  virtual Snapshot& getSnapshot() = 0;

  // Apply a snapshot to the object, revert the object back to the state that
  // has been recorded in the snapshot
  virtual void applySnapshot(const Snapshot& snapshotApplied) = 0;
};


#endif  // SNAPSHOTINTERFACE_H_