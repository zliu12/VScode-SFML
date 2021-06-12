//
// Created by QiChang Liu on 6/8/21.
//

#include "FileNode.h"


//this tells the draw function whether or not to show the node's children
//this is done by toggling a state on and off
void FileNode::toggleChlidren() {
  // If showChildren is false, make it true, vice versa
  if (showChildren) {
    showChildren = false;
  }
  else {
    showChildren = true;
  }
}

//this is called in the draw function to reposition the children so they
//are indented and below the parent
void FileNode::reposition() const {
  // Create initX, initY for each child
  float initX = data.getTextPos().x;                // Text posX
  float initY = data.getBoxPos().y +                // Box posY
                data.getBoxSize().y +               // Box sizeY
                data.getThickness();                // Box outline thickness

  // Create an iterator of vector<FileNode*>, set it to childVec.begin()
  std::vector<FileNode*>::const_iterator iter;
  iter = childrenVec.begin();

  // moveDown represents how much each child needs to vertically move down
  int moveDown = 0;

  // Iterate through childVec and reposition each child
  while (iter != childrenVec.end()) {
    (*iter)->getData().setPosition(sf::Vector2f(initX, initY + moveDown));
    moveDown += (data.getBoxSize().y + data.getThickness());
    ++iter;
  }
}

// Default constructor
FileNode::FileNode() {

}

// Customize consturctor
FileNode::FileNode(std::string text, ProjectIcon::Icons icon) {
  data.setFileItemText(text);
  data.setItemIcon(icon);
}

//This calls the addEventHandler for all the children. It calls the toggleChildren function
// when the node's data (FileItem) is clicked on
void FileNode::addEventHandler(sf::RenderWindow& window, sf::Event event) {
  data.addEventHandler(window, event);

  if (MouseEvents<FileItem>::objClicked(data, window)) {
    toggleChlidren();
    std::cout << "showChildren: " << showChildren << std::endl;
  }
  else if (MouseEvents<FileItem>::objClicked(data, window)) {
    toggleChlidren();
    std::cout << "showChildren: " << showChildren << std::endl;
  }
}

// this draws the node. This is a recursive function to draw all the children
// nodes as well this will only draw the node's children when it is in the
// proper state
void FileNode::draw(sf::RenderTarget& window, sf::RenderStates states) const {
  window.draw(data);

  // Declare a vector iterator
  std::vector<FileNode*>::const_iterator iter;
  iter = childrenVec.begin();
  // When showChildren is true
  if (showChildren) {
    // Iter through children, recursively call draw function on each child
    while (iter != childrenVec.end()) {
      reposition();
      (*iter)->draw(window, states);
      ++iter;
    }
  }
}

//returns true if the node has no children, otherwise false
bool FileNode::isLeaf() const {
  if (childrenVec.size() == 0) {
    return true;
  }
  return false;
}

//getters and setters
FileItem& FileNode::getData() {
  return this->data;
}

std::map<std::string, FileNode*>& FileNode::getChildren() {
  return childrenMap;
}

std::vector<FileNode*>& FileNode::getChildrenVec() {
  return childrenVec;
}

void FileNode::setData(const FileItem &data) {
  this->data = data;
}

void FileNode::setDataText(std::string text) {
  data.setFileItemText(text);
}

//iterators
// typename std::map<std::string, FileNode*>::iterator FileNode::begin() {

// }

// typename std::map<std::string, FileNode*>::iterator FileNode::end() {

// }

//does nothing now
void FileNode::update() {
  // Create initX, initY for each child
  float initX = data.getTextPos().x;                // Text posX
  float initY = data.getBoxPos().y +                // Box posY
                data.getBoxSize().y +               // Box sizeY
                data.getThickness();                // Box outline thickness

  // Create an iterator of vector<FileNode*>, set it to childVec.begin()
  std::vector<FileNode*>::const_iterator iter;
  iter = childrenVec.begin();

  // moveDown reprensents how much each child needs to vertically move down
  int moveDown = 0;

  // Iterate through childVec and reposition each child
  while (iter != childrenVec.end()) {
    (*iter)->setPosition(initX, initY + moveDown);
    moveDown += (data.getBoxSize().y + data.getThickness());
    ++iter;
  }
}

//does nothing now
sf::FloatRect FileNode::getGlobalBounds() {}