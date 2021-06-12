//
// Created by QiChang Liu on 6/8/21.
//

#ifndef LOGOMAKER1_FILENODE_H
#define LOGOMAKER1_FILENODE_H
#include "GuiComponent.h"
#include "FileItem.h"
#include "MouseEvents.h"
#include <iterator>


class FileNode : public GuiComponent {
private:
    //This is the data represented in the tree
    FileItem data;

    //this is all the child nodes in the tree, a vector would also work just
    // fine
    std::map<std::string, FileNode*> childrenMap;
    std::vector<FileNode*> childrenVec;

    // show children
    bool showChildren = false;

    //this tells the draw function whether or not to show the node's children
    //this is done by toggling a state on and off
    void toggleChlidren();

    //this is called in the draw function to reposition the children so they
    //are indented and below the parent
    void reposition() const;

public:
    // this is so I can use the iterator for the children map publicly
    typedef typename std::map<std::string, FileNode*>::iterator iterator;

    // Default constructor
    FileNode();

    // Customize constructor
    FileNode(std::string text, ProjectIcon::Icons icon);

    // this draws the node. This is a recursive function to draw all the
    // children nodes as well
    // this will only draw the node's children when it is in the proper state
    virtual void draw(sf::RenderTarget& window, sf::RenderStates states) const;

    // This calls the addEventHandler for all the children. It calls the
    // toggleChildren function
    // when the node's data (FileItem) is clicked on
    virtual void addEventHandler(sf::RenderWindow& window, sf::Event event);

    // returns true if the node has no children, otherwise false
    bool isLeaf() const;

    // getters and setters
    FileItem &getData();
    std::map<std::string, FileNode*>& getChildren();
    std::vector<FileNode*>& getChildrenVec();
    void setData(const FileItem &data);
    void setDataText(std::string text);

    // iterators
    // iterator begin();
    // iterator end();

    // does nothing now
    virtual void update();

    // does nothing now
    sf::FloatRect getGlobalBounds();
};



#endif //LOGOMAKER1_FILENODE_H
