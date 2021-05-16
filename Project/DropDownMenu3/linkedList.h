/**
 * linkedList - Header
 *
 * Copyright (c) [2021], Zhao Liu.
 */

#ifndef LINKEDLIST_H_
#define LINKEDLIST_H_
#include "Node.h"
#include "NodeIterator.h"
#include <iostream>

template<class T>
class linkedList {
 private:
  Node<T>* head = nullptr;
  Node<T>* tail = nullptr;
  Node<T>* createNode(T value);
  Node<T>* findNode(T value);
  Node<T>* previousNode(Node<T>* targetNode);
  Node<T>* subsequentNode(Node<T>* targetNode);
  void insertIfEmpty(T value);
  void removeNode(Node<T>* targeNode);

 public:
  linkedList();
  ~linkedList();
  linkedList<T>& operator=(const linkedList<T>& list);
  linkedList(const linkedList<T>& list);
  void insertAtBegin(T value);
  void insertAtEnd(T value);
  void insertBeforeData(T insertValue, T targetValue);
  void insertAfterData(T insertValue, T targeValue);
  void remove(T removeValue);
  bool findData(T targeValue);
  bool listEmpty();

  typedef NodeIterator<T> iterator;
  NodeIterator<T> begin() const;
  NodeIterator<T> end() const;
  NodeIterator<T> getTail();

  template<class S>
  friend std::ostream& operator<<(std::ostream& printOut, const linkedList<S>& list);
};

#include "linkedList.cpp"
#endif  // LINKEDLIST_H_