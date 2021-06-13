/**
 * NodeIterator - Definitions
 *
 * Copyright (c) [2021], John Liu.
 */

#ifndef NODEITERATOR_CPP_
#define NODEITERATOR_CPP_
#include "NodeIterator.h"
#include <iostream>

// Default constructor
template<class T>
NodeIterator<T>::NodeIterator() {
  currentNode = nullptr;
}

// Customized constructor
template<class T>
NodeIterator<T>::NodeIterator(Node<T>* nodeAssignedToCurrentNode) {
  currentNode = nodeAssignedToCurrentNode;
}

// Access the currentNode
template<class T>
Node<T>* NodeIterator<T>::getCurrentNode() {
  return currentNode;
}

// Overload prefix++
template<class T>
NodeIterator<T>& NodeIterator<T>::operator++() {
  currentNode = currentNode->linkNext;
  return *this;
}

// Overload postfix++
template<class T>
NodeIterator<T> NodeIterator<T>::operator++(int) {
  NodeIterator<T>* temp = *this;
  currentNode = currentNode->linkNext;
  return temp;
}

// Overload prefix--
template<class T>
NodeIterator<T>& NodeIterator<T>::operator--() {
  currentNode = currentNode->linkPrev;
  return *this;
}

// Overload postfix--
template<class T>
NodeIterator<T> NodeIterator<T>::operator--(int) {
  NodeIterator<T>* temp = *this;  
  currentNode = currentNode->linkPrev;
  return currentNode;
}

// Overload dereference operator
template<class T>
T& NodeIterator<T>::operator*() const {
  return currentNode->data;
}

// Overload compare equal operator
template<class S>
bool operator==(const NodeIterator<S>& LHS, const NodeIterator<S>& RHS) {
  return LHS.currentNode == RHS.currentNode;
}

// Overload compare not equal operator
template<class S>
bool operator!=(const NodeIterator<S>& LHS, const NodeIterator<S>& RHS) {
  return LHS.currentNode != RHS.currentNode;
}

#endif  // NODEITERATOR_CPP_