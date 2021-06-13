/**
 * Node - Header
 *
 * Copyright (c) [2021], John Liu.
 */

#ifndef NODE_H_
#define NODE_H_

template<class T>
struct Node {
  T data;
  Node<T>* linkNext = nullptr;
  Node<T>* linkPrev = nullptr;
};


#endif  // NODE_H_