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
    // Create a Node
    Node<T>* createNode(T value);
    // Find if a node is in the list
    Node<T>* findNode(T value);
    // The node before a particular node
    Node<T>* previousNode(Node<T>* targetNode);
    // The node after a particular node
    Node<T>* subsequentNode(Node<T>* targetNode);
    // Insert a node if the list is empty
    void insertIfEmpty(T value);
    // Remove a particular node
    void removeNode(Node<T>* targetNode);

  public:
    // Default constructor
    linkedList();
    // Big3: Destructor
    ~linkedList();
    // Big3: assignment operator
    linkedList<T>& operator=(const linkedList<T>& list);
    // Big3: copy constructor
    linkedList(const linkedList<T>& list);
    // Insert at list beginning
    void insertAtBegin(T value);
    // Insert at list end
    void insertAtEnd(T value);
    // Insert before a particular node
    void insertBeforeNode(T insertValue, T targetValue);
    // Insert after a particular node
    void insertAfterNode(T insertValue, T targetValue);
    // Find a value
    bool findValue(T targeValue);
    // Check if the lis is empty
    bool listEmpty();

    // A node iterator
    typedef NodeIterator<T> iterator;
    // NodeIterator begin function
    NodeIterator<T> begin() const;
    // NodeIterator end() function
    NodeIterator<T> end() const;

    template<class P>
    // Print out function
    friend std::ostream& operator<<(std::ostream& printOut, const linkedList<P>& list);
};


#include "linkedList.cpp"
#endif  // LINKEDLIST_H_