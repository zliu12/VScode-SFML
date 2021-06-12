/**
 * LinkedList - Implementation
 *
 * Copyright (c) [2021], Zhao Liu.
 */

#ifndef LINKEDLIST_CPP_
#define LINKEDLIST_CPP_

#include "LinkedList.h"

// Create a Node
template<class T>
Node<T>* LinkedList<T>::createNode(T value) {
  // Create a new node n
  Node<T>* n = new Node<T>;
  // Set data, linkNext, linkPrev
  n->data = value;
  n->linkNext = nullptr;
  n->linkPrev = nullptr;
  return n;
}

// Find if a node is in the list
template<class T>
Node<T>* LinkedList<T>::findNode(T value) {
  // Create a cursor starts walking from the head
  Node<T>* cursor = head;
  // cursor walks through the list until it finds the value or gets to a NULL
  while(cursor != nullptr && cursor->data != value) {
    cursor = cursor->linkNext;
  }
  return cursor;
}

// The node before a particular node
template<class T>
Node<T>* LinkedList<T>::previousNode(Node<T>* targetNode) {
  // Create a cursor starst walking from the head
  Node<T>* cursor = head;
  // cursor walks through the list until it gets to a NULL or finds the target node
  while(cursor != nullptr && cursor->linkNext != targetNode) {
    cursor = cursor->linkNext;
  }
  return cursor;
}

// The node after a particular node
template<class T>
Node<T>* LinkedList<T>::subsequentNode(Node<T>* targetNode) {
  // Create a cursor starst walking from the head
  Node<T>* cursor = head;
  // cursors walks through the list until it gets to a NULL or the node after the target node
  while(cursor != nullptr && cursor != targetNode->linkNext) {
    cursor = cursor->linkNext;
  }
  return cursor;
}

// Insert a node if the list is empty
template<class T>
void LinkedList<T>::insertIfEmpty(T value) {
  // Create a new Node n
  Node<T>* n = createNode(value);
  // Set head and tail
  head = n;
  tail = n;
}

// Remove a particular node
template<class T>
void LinkedList<T>::removeNode(Node<T>* targetNode) {
  // Simply return if the targetNode is a NULL
  if(targetNode == nullptr) {
    return;
  }
  else {
    // Simply return if the list is empty
    if(listEmpty()) {
      return;
    }
    // Only 1 node in the list
    if(head == tail) {
      head = nullptr;
      tail = nullptr;
      delete targetNode;
    }
    // If the targetNode is the head
    else if(targetNode == head) {
      // Find the node right after the head
      Node<T>* subsqtNode = subsequentNode(targetNode);
      // Disconnect subsqtNode with head
      subsqtNode->linkPrev = nullptr;
      // Disconnet head with subsqtNode
      head->linkNext = nullptr;
      // Set the new head
      head = subsqtNode;
      // Delete the targetNode
      delete targetNode;
    }
    // If the targetNode is the tail
    else if(targetNode == tail) {
      // Find the node right before the tail
      Node<T>* prevNode = previousNode(targetNode);
      // Disconnect prevNode with tail
      prevNode->linkNext = nullptr;
      // Disconnect tail with prevNode
      tail->linkPrev = nullptr;
      // Set the new tail
      tail = prevNode;
      // Delete the targetNode
      delete targetNode;
    }
    // If the targetNode is in between
    else {
      // Find the node right before and right after the targetNode
      Node<T>* prevNode = previousNode(targetNode);
      Node<T>* subsqtNode = subsequentNode(targetNode);
      // Link prevNode with subsqtNode
      prevNode->linkNext = subsqtNode;
      subsqtNode->linkPrev = prevNode;
      // Disconnect the targetNode with preNode and subsqtNode, and delete it
      targetNode->linkNext = nullptr;
      targetNode->linkPrev = nullptr;
      delete targetNode;
    }
  }
}

// Default constructor
template<class T>
LinkedList<T>::LinkedList() : head(nullptr), tail(nullptr) {}

// Big3: Destructor
template<class T>
LinkedList<T>::~LinkedList() {
  while(head != nullptr) {
    removeNode(head);
  }
}

// Big3: assignment operator
template<class T>
LinkedList<T>& LinkedList<T>::operator=(const LinkedList<T>& list) {
  // Check for self assignment
  if(this == &list) {
    return *this;
  }
  // Clear the copied list before copying nodes into it
  this->~LinkedList();
  // Create a cursor starts walking from the list's head
  Node<T>* cursor = list.head;
  // Cursor walks through the list until it gets to a NULL
  while(cursor != nullptr) {
    insertAtEnd(cursor->data);
    cursor = cursor->linkNext;
  }
  return *this;
}

// Big3: copy constructor
template<class T>
LinkedList<T>::LinkedList(const LinkedList<T>& list) : LinkedList() {
  *this = list;
}

// Insert at list beginning
template<class T>
void LinkedList<T>::insertAtBegin(T value) {
  // Check for empty
  if(listEmpty()) {
    insertIfEmpty(value);
  }
  else {
    Node<T>* n = createNode(value);
    head->linkPrev = n;
    n->linkNext = head;
    head = n;
  }
}

// Insert at list end
template<class T>
void LinkedList<T>::insertAtEnd(T value) {
  if(listEmpty()) {
    insertIfEmpty(value);
  }
  else {
    Node<T>* n = createNode(value);
    tail->linkNext = n;
    n->linkPrev = tail;
    tail = n;
  }
}

// Insert before a particular node
template<class T>
void LinkedList<T>::insertBeforeNode(T insertValue, T targetValue) {
  // Check if the targe value exists
  if(findNode(targetValue) == nullptr) {
    return;
  }
  // If insert before head
  else if(findNode(targetValue) == head) {
    insertAtBegin(insertValue);
  }
  else {
    // Find the node with the targetValue
    Node<T>* targetNode = findNode(targetValue);
    // Find the node right before the targetNode
    Node<T>* prevNode = previousNode(targetNode);
    // Create a node for insertValue
    Node<T>* insertNode = createNode(insertValue);
    // link prevNode and insertNode
    prevNode->linkNext = insertNode;
    insertNode->linkPrev = prevNode;
    // link insertNode and targetNode
    insertNode->linkNext = targetNode;
    targetNode->linkPrev = insertNode;
  }
}

// Insert after a particular node
template<class T>
void LinkedList<T>::insertAfterNode(T insertValue, T targetValue) {
  // Check if the targe value exists
  if(findNode(targetValue) == nullptr) {
    return;
  }
  // If insert after tail
  else if(findNode(targetValue) == tail) {
    insertAtEnd(insertValue);
  }
  else {
    // Find the targetNode with the targeValue
    Node<T>* targetNode = findNode(targetValue);
    // Find the node right after the targetNode
    Node<T>* sbsqtNode = subsequentNode(targetNode);
    // Create a node for inserValue
    Node<T>* insertNode = createNode(insertValue);
    // Link sbsqtNode and insertNode
    insertNode->linkNext = sbsqtNode;
    sbsqtNode->linkPrev = insertNode;
    // Link insertNode with targetNode
    insertNode->linkPrev = targetNode;
    targetNode->linkNext = insertNode;
  }
}

// Find a value
template<class T>
bool LinkedList<T>::findValue(T targeValue) {
  if(findNode(targeValue) == nullptr) {
    return false;
  }
  return true;
}

// Check if the lis is empty
template<class T>
bool LinkedList<T>::listEmpty() {
  if(head == nullptr) {
    return true;
  }
  return false;
}

// NodeIterator begin function
template<class T>
typename LinkedList<T>::iterator LinkedList<T>::begin() const {
  return NodeIterator<T>(head);
}

// NodeIterator end() function
template<class T>
NodeIterator<T> LinkedList<T>::end() const {
  return NodeIterator<T>(nullptr);
}

// Print out function
template<class P>
std::ostream& operator<<(std::ostream& printOut, const LinkedList<P>& list) {
  for(Node<P>* cursor = list.head; cursor != nullptr; cursor = cursor->linkNext) {
    printOut << cursor->data << " ";
  }
  return printOut;
}

#endif  // LINKEDLIST_CPP_