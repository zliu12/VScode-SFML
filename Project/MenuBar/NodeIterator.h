/**
 * NodeIterator - Header
 *
 * Copyright (c) [2021], Zhao Liu.
 */

#ifndef NODEITERATOR_H_
#define NODEITERATOR_H_
#include <iterator>
#include "Node.h"

template<class T>
class NodeIterator {
 private:
  Node<T>* currentNode = nullptr;
 
 public:
  NodeIterator();
  NodeIterator(Node<T>* nodeAssignedToCurrentNode);
  Node<T>* getCurrentNode();
  NodeIterator<T>& operator++();
  NodeIterator<T> operator++(int);
  NodeIterator<T>& operator--();
  NodeIterator<T> operator--(int);
  T& operator*() const;

  template<class S>
  friend bool operator==(const NodeIterator<S>& LHS, const NodeIterator<S>& RHS);

  template<class S>
  friend bool operator!=(const NodeIterator<S>& LHS, const NodeIterator<S>& RHS);
};

#include "NodeIterator.cpp"
#endif  // NODEITERATOR_H_