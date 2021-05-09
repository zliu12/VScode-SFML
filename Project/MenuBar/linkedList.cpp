/**
 * linkedList - Implementation
 *
 * Copyright (c) [2021], Zhao Liu.
 */

#ifndef LINKEDLIST_CPP_
#define LINKEDLIST_CPP_
#include "linkedList.h"

template<class T>
Node<T>* linkedList<T>::createNode(T value) {
  Node<T>* n = new Node<T>;
  n->data = value;
  n->linkNext = nullptr;
  n->linkPrev = nullptr;
  return n;
}

template<class T>
Node<T>* linkedList<T>::findNode(T value) {
  Node<T>* cursor = head;
  while (cursor != nullptr && cursor->data != value) {
    cursor = cursor->linkNext;
  }
  return cursor;
}

template<class T>
Node<T>* linkedList<T>::previousNode(Node<T>* targetNode) {
  Node<T>* cursor = head;
  while (cursor != nullptr && cursor->linkNext != targetNode) {
    cursor = cursor->linkNext;
  }
  return cursor;
}

template<class T>
Node<T>* linkedList<T>::subsequentNode(Node<T>* targetNode) {
  Node<T>* cursor = head;
  while (cursor != nullptr && cursor != targetNode->linkNext) {
    cursor = cursor->linkNext;
  }
  return cursor;
}

template<class T>
void linkedList<T>::insertIfEmpty(T value) {
  Node<T>* n = createNode(value);
  head = n;
  tail = n;
}

template<class T>
void linkedList<T>::removeNode(Node<T>* targeNode) {
  if (targeNode == nullptr) {
    return;
  }
  else {
    if (listEmpty()) {
      return;
    }
    else if (head == tail) {
      head = nullptr;
      tail = nullptr;
      delete targeNode;
    }
    else if (targeNode == head) {
      Node<T>* nextNode = subsequentNode(targeNode);
      head->linkNext = nullptr;
      nextNode->linkPrev = nullptr;
      head = nextNode;
      delete targeNode;
    }
    else if (targeNode == tail) {
      Node<T>* prevNode = previousNode(targeNode);
      tail->linkPrev = nullptr;
      prevNode->linkNext = nullptr;
      tail = prevNode;
      delete targeNode;
    }
    else {
      Node<T>* prevNode = previousNode(targeNode);
      Node<T>* nextNode = subsequentNode(targeNode);
      prevNode->linkNext = nextNode;
      nextNode->linkPrev = prevNode;
      targeNode->linkPrev = nullptr;
      targeNode->linkNext = nullptr;
      delete targeNode;
    }
  }
}

template<class T>
linkedList<T>::linkedList() {
  head = nullptr;
  tail = nullptr;
}

template<class T>
linkedList<T>::~linkedList() {
  while (head != nullptr) {
    removeNode(head);
  }
}

template<class T>
linkedList<T>& linkedList<T>::operator=(const linkedList<T>& list) {
  if (this == &list) {
    return *this;
  }
  this->~linkedList();
  Node<T>* cursor = list.head;
  while (cursor != nullptr) {
    insertAtEnd(cursor->data);
    cursor = cursor->linkNext;
  }
  return *this;
}

template<class T>
linkedList<T>::linkedList(const linkedList<T>& list) : linkedList(){
  *this = list;
}

template<class T>
void linkedList<T>::insertAtBegin(T value) {
  if (listEmpty()) {
    insertIfEmpty(value);
  }
  else {
    Node<T>* n = createNode(value);
    head->linkPrev = n;
    n->linkNext = head;
    head = n;
  }
}

template<class T>
void linkedList<T>::insertAtEnd(T value) {
  if (listEmpty()) {
    insertIfEmpty(value);
  }
  else {
    Node<T>* n = createNode(value);
    tail->linkNext = n;
    n->linkPrev = tail;
    tail = n;
  }
}

template<class T>
void linkedList<T>::insertBeforeData(T insertValue, T targetValue) {
  if (findNode(targetValue) == nullptr) {
    return;
  }
  else if (findNode(targetValue) == head) {
    insertAtBegin(targetValue);
  }
  else {
    Node<T>* targetNode = findNode(targetValue);
    Node<T>* prevNode = previousNode(targetValue);
    Node<T>* insertNode = createNode(insertValue);
    prevNode->linkNext = insertNode;
    insertNode->linkPrev = prevNode;
    insertNode->linkNext = targetNode;
    targetNode->linkPrev = insertNode;
  }
}

template<class T>
void linkedList<T>::insertAfterData(T insertValue, T targeValue) {
  if (findNode(targeValue) == nullptr) {
    return;
  }
  else if (findNode(targeValue) == tail) {
    insertAtEnd(targeValue);
  }
  else {
    Node<T>* targetNode = findNode(targeValue);
    Node<T>* nextNode = subsequentNode(targeValue);
    Node<T>* insertNode = createNode(targeValue);
    targetNode->linkNext = insertNode;
    insertNode->linkPrev = targetNode;
    insertNode->linkNext = nextNode;
    nextNode->linkPrev = insertNode;
  }
}

template<class T>
void linkedList<T>::remove(T removeValue) {
  Node<T>* targeNode = findNode(removeValue);
  removeNode(targeNode);
}

template<class T>
bool linkedList<T>::findData(T targeValue) {
  if (findNode(targeValue) == nullptr) {
    std::cout << "Target doesn't exit." << std::endl;
    return false;
  }
  return true;
}

template<class T>
bool linkedList<T>::listEmpty() {
  if (head == nullptr) {
    return true;
  }
  return false;
}

template<class T>
typename linkedList<T>::iterator linkedList<T>::begin() const {
  return NodeIterator<T>(head);
}

template<class T>
typename linkedList<T>::iterator linkedList<T>::end() const {
  return NodeIterator<T>(nullptr);
}

template<class T>
typename linkedList<T>::iterator linkedList<T>::getTail() {
  return tail;
}

template<class S>
std::ostream& operator<<(std::ostream& printOut, const linkedList<S>& list) {
  for (Node<S>* cursor = list.head; cursor != nullptr; cursor = cursor->linkNext) {
    printOut<< cursor->data << " ";
  }
  return printOut;
}

#endif  // LINKEDLIST_CPP_