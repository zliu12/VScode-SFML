/**
 * FileTree - Implementation
 *
 * Copyright (c) [2021], Zhao Liu.
 */

#include "FileTree.h"

// finds the parent and add the item to the parent. 
// If the parent isn't found, a new parent is created
// Send the node (Here comes from Prof.Dave)
void FileTree::push(FileNode* &root, std::string parentTxt, std::string childTxt) {
  // If no root (NULL)
  if (root == nullptr) {
    // Create a new FileNode(root)
    root = new FileNode;
    // Set root's data(text) to parent, parent node
    root->setDataText(parentTxt);
    // Set root icon
    root->getData().setItemIcon(ProjectIcon::Icons::FOLDER);

    // Create a new FileNode(child)
    FileNode* child = new FileNode;
    // Set child's data(text) to text, child node
    child->setDataText(childTxt);
    // Push child into the childrenVec of the root
    root->getChildrenVec().push_back(child);
    return;
  }

  // If the root already has the data(text)
  if (root->getData().getFileItemText() == parentTxt) {
    // Create a new FileNode(child)
    FileNode* child = new FileNode;
    // Set child's data(text) to text, child ndoe
    child->setDataText(childTxt);

     // If an (*iter) is a leaf(no child-nodes)
    if ((child)->isLeaf()) {
      // Set icon to FILE
      child->getData().setItemIcon(ProjectIcon::Icons::FILE);
      child->getData().setIconScale(FILE);
    }
    // If an (*iter) is not a leaf(with child-nodes)
    else {
      // Set icon to FOLDER
      (child)->getData().setItemIcon(ProjectIcon::Icons::FOLDER);
      child->getData().setIconScale(FOLDER);
    }

    // Push child into the childrenVec of the root
    root->getChildrenVec().push_back(child);
    return;
  }

  // If the parameter parent is not in the root, iterate through child nodes
  // of root and look for parameter parent, if any of the child nodes of root
  // has child nodes, iterate through those child nodes and look for paramenter
  // parameter, recursively 
  std::vector<FileNode*>::iterator iter;
  iter = root->getChildrenVec().begin();
  while (iter != root->getChildrenVec().end()) {
    push(*iter, parentTxt, childTxt);

    // If an (*iter) is a leaf(no child-nodes)
    if ((*iter)->isLeaf()) {
      // Set icon to FILE
      (*iter)->getData().setItemIcon(ProjectIcon::Icons::FILE);
      (*iter)->getData().setIconScale(FILE);
    }
    // If an (*iter) is not a leaf(with child-nodes)
    else {
      // Set icon to FOLDER
      (*iter)->getData().setItemIcon(ProjectIcon::Icons::FOLDER);
      (*iter)->getData().setIconScale(FOLDER);
    }

    ++iter;
  }
}
  
// traverses the tree ad adds the evenhandlers for each of the nodes
// (Here comes from Prof.Dave)
void FileTree::traverse(FileNode* &root, sf::RenderWindow& window, sf::Event event) {
  if (root == nullptr) {
    return;
  }
  // Output the root text
  std::cout << root->getData().getFileItemText() << std::endl;

  // Create a FileNode* vector iterator, starts from childrenVec.begin()
  std::vector<FileNode*>::iterator iter;
  iter = root->getChildrenVec().begin();
  
  // Call root addEventHandler
  root->addEventHandler(window, event);

  // Iterate through childrenVec, call traverse recursively so that each child
  // node's addEventHandler will be called
  while (iter != root->getChildrenVec().end()) {
    traverse(*iter, window, event);
    ++iter;
  }
}

//constructors
FileTree::FileTree() {

}

//this is the public version of push
void FileTree::push(std::string parent, std::string text) {
  push(root, parent, text);
}

// traversal
void FileTree::traversal() {

}

//draws the root node of the tree
void FileTree::draw(sf::RenderTarget& window, sf::RenderStates states) const {
  window.draw(*root);
}

//calls the traverse function to add the event handlers to each node
void FileTree::addEventHandler(sf::RenderWindow& window, sf::Event event) {
  traverse(root, window, event);
  std::vector<FileNode*>::const_iterator iter = root->getChildrenVec().begin();
  while (iter != root->getChildrenVec().end()) {
    // (*iter)->addEventHandler(window, event);
    ++iter;
  }
}

//does nothing now
void FileTree::applySnapshot(const Snapshot& snapshot) {}

//does nothing now
void FileTree::update() {
  // (*root).update();
}

//does nothing now
Snapshot& FileTree::getSnapshot() {}

//does nothing now
sf::FloatRect FileTree::getGlobalBounds() {}