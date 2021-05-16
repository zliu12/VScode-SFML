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
  virtual Snapshot& getSnapshot() = 0;
  virtual void applySnapshot(const Snapshot& snapshot) = 0;
};

#endif  // SNAPSHOTINTERFACE_H_