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
  Node<T>* currentNode;

 public:
  // Default constructor
  NodeIterator();
  
  // Customized constructor
  NodeIterator(Node<T>* nodeAssignedToCurrentNode);

  // Access the currentNode
  Node<T>* getCurrentNode();

  // Overload prefix++
  NodeIterator<T>& operator++();

  // Overload postfix++
  NodeIterator<T> operator++(int);

  // Overload prefix--
  NodeIterator<T>& operator--();

  // Overload postfix--
  NodeIterator<T> operator--(int);

  // Overload dereference operator
  T& operator*() const;

  // Overload compare equal operator
  template<class S>
  friend bool operator==(const NodeIterator<S>& LHS, const NodeIterator<S>& RHS);

  // Overload compare not equal operator
  template<class S>
  friend bool operator!=(const NodeIterator<S>& LHS, const NodeIterator<S>& RHS);

};

#include "NodeIterator.cpp"
#endif  // NODEITERATOR_H_