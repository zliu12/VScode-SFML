/**
 * NodeIterator - Implementation
 *
 * Copyright (c) [2021], Zhao Liu.
 */

#ifndef NODEITERATOR_CPP_
#define NODEITERATOR_CPP_
#include "NodeIterator.h"

template<class T>
NodeIterator<T>::NodeIterator() {
  currentNode = nullptr;
}

template<class T>
NodeIterator<T>::NodeIterator(Node<T>* nodeAssignedToCurrentNode) {
  currentNode = nodeAssignedToCurrentNode;
}

template<class T>
Node<T>* NodeIterator<T>::getCurrentNode() {
  return currentNode;
}

template<class T>
NodeIterator<T>& NodeIterator<T>::operator++() {
  currentNode = currentNode->linkNext;
  return *this;
}

template<class T>
NodeIterator<T> NodeIterator<T>::operator++(int) {
  NodeIterator<T>* temp = *this;
  currentNode = currentNode->linkNext;
  return currentNode;
}

template<class T>
NodeIterator<T>& NodeIterator<T>::operator--() {
  currentNode = currentNode->linkPrev;
  return *this;
}

template<class T>
NodeIterator<T> NodeIterator<T>::operator--(int) {
  NodeIterator<T>* temp = *this;
  currentNode = currentNode->linkPrev;
  return currentNode;
}

template<class T>
T& NodeIterator<T>::operator*() const {
  return currentNode->data;
}

template<class S>
bool operator==(const NodeIterator<S>& LHS, const NodeIterator<S>& RHS) {
  return LHS.currentNode == RHS.currentNode;
}

template<class S>
bool operator!=(const NodeIterator<S>& LHS, const NodeIterator<S>& RHS) {
  return LHS.currentNode != RHS.currentNode;
}


#endif  // NODEITERATOR_CPP_