//
// Created by QiChang Liu on 6/8/21.
//

#ifndef LOGOMAKER1_FILETREE_H
#define LOGOMAKER1_FILETREE_H
#include "GuiComponent.h"
#include "FileNode.h"


class FileTree : public GuiComponent {
private:
    // the root node of the tree
    FileNode* root = nullptr;

    // finds the parent and add the item to the parent.
    // If the parent isn't found, a new parent is created
    // Send the node
    void push(FileNode* &root, std::string parent, std::string text);

    // traverses the tree ad adds the eventHandlers for each of the nodes
    void traverse(FileNode* &root, sf::RenderWindow& window, sf::Event event);
    sf::Vector2f initPosition = {0, 0};

public:
    //constructors
    FileTree();

    //this is the public version of push
    void push(std::string parent, std::string text);

    // traversal
    void traversal();

    //draws the root node of the tree
    virtual void draw(sf::RenderTarget& window, sf::RenderStates states) const;

    //calls the traverse function to add the event handlers to each node
    virtual void addEventHandler(sf::RenderWindow& window, sf::Event event);

    //does nothing now
    virtual void update();
    //does nothing now
    virtual sf::FloatRect getGlobalBounds();
};


#endif //LOGOMAKER1_FILETREE_H
