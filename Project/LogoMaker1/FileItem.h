//
// Created by QiChang Liu on 6/8/21.
//

#ifndef LOGOMAKER1_FILEITEM_H
#define LOGOMAKER1_FILEITEM_H
#include "GuiComponent.h"
#include "ProjectIcon.h"
#include "Font.h"
#include "MouseEvents.h"
#include <iostream>

class FileItem : public sf::Drawable, public sf::Transformable {
private:
    sf::RectangleShape fileItemBox;
    sf::Text fileItemText;
    sf::Sprite fileItemIcon;

public:
    // Default constructor
    FileItem();

    // Customize constructor
    FileItem(std::string text, ProjectIcon::Icons icon);

    // Set the fileItem in the center
    void centerFileItem();

    // Draw
    virtual void draw(sf::RenderTarget& window, sf::RenderStates states) const;

    // Handle event change
    void addEventHandler(sf::RenderWindow& window, sf::Event event);

    // Get the bounds of the item
    sf::FloatRect getGlobalBounds() const;

    // Get the bounds of the fileItemIcon
    sf::FloatRect getIconGlobalBounds() const;

    // Get the size of fileItemBox
    sf::Vector2f getBoxSize() const;

    // Get the position of the fileItemBox
    sf::Vector2f getBoxPos() const;

    // Get the position of the fileItemText
    sf::Vector2f getTextPos() const;

    // Get the outline thickness of the fileItemBox
    float	getThickness() const;

    // Get the fileItemText
    std::string getFileItemText() const;

    // Set the position of the item
    void setPosition(sf::Vector2f pos);

    // Receive FOLDER or FILE and assign it to itemIcon
    void setItemIcon(ProjectIcon::Icons icon);

    // Set icons scale
    void setIconScale(ProjectIcon::Icons icon);

    // Set fileItemText
    void setFileItemText(std::string text);
};


#endif //LOGOMAKER1_FILEITEM_H
