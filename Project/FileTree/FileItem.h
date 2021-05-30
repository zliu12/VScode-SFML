/**
 * FileItem - Header
 *
 * Copyright (c) [2021], Zhao Liu.
 */

#ifndef FILEITEM_H_
#define FILEITEM_H_
#include <string>
#include "ProjectIcon.h"
#include "ProjectFont.h"
#include "MouseEvents.h"
#include "SFML/Graphics.hpp"

class FileItem : public sf::Drawable, public sf::Transformable {
 private:
	// Box contains file/folder name
	sf::RectangleShape fileItemBox;
	// String text
	sf::Text fileItemText;
	// Icon
	sf::Sprite fileItemIcon;

 public:
	// Default constructor
	FileItem();

	// Customize constructor
	FileItem(std::string text, ProjectIcon::Icons icon);

	// Set the fileItem in the center
	void centerfileItem();

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

	// Receiv FOLDER or FILE and assign it to itemIcon
	void setItemIcon(ProjectIcon::Icons icon);

	// Set icons scale
	void setIconScale(ProjectIcon::Icons icon);

	// Set fileItemText
	void setFileItemText(std::string text);
};
    

/*
class FileItem : public Item
{
public:
    //Constructors
    FileItem();
    FileItem(Image::image icon, std::string text, sf::Vector2f size, sf::Vector2f position);
    
    //GUIComponent pure virtual functions, refer to the TextInput Project for Info
    virtual void draw(sf::RenderTarget& window, sf::RenderStates states) const;
    //I use this function to highlight the item when clicked, and unhighlight when something
    //else is clicked
    virtual void addEventHandler(sf::RenderWindow& window, sf::Event event);
    //Returns the bounds of the item
    sf::FloatRect getGlobalBounds() const;
    //returns the size of the item
    sf::Vector2f getSize() const;
    //returns the size of the item
    sf::Vector2f getPosition() const;
    //sets the position of the item
    void setPosition(sf::Vector2f pos);
    //uses an enum to change the icon to a folder or file
    void setIcon(Image::image icon);

private:
    //this is the folder or file icon
    sf::Sprite icon;
    float padding = 5;
};
*/

#endif  // FILEITEM_H_
