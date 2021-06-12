//
// Created by QiChang Liu on 6/8/21.
//

#include "FileItem.h"

// Default constructor (here comes from Prof.Dave)
FileItem::FileItem() : FileItem("Directory 1", ProjectIcon::Icons::FILE) {

}

// Customize constructor
FileItem::FileItem(std::string text, ProjectIcon::Icons icon) {
  /* fileItemBox */
  fileItemBox.setSize(sf::Vector2f(550, 125));
  fileItemBox.setFillColor(sf::Color::Transparent);
  fileItemBox.setOutlineThickness(5);
  fileItemBox.setOutlineColor(sf::Color::Transparent);
  fileItemBox.setPosition(10, 10);

  /* fileItemText */
  fileItemText.setFont(Font::getFont());
  fileItemText.setCharacterSize(70);
  fileItemText.setFillColor(sf::Color::White);
  fileItemText.setString(text);

  /* itemIcon */
  // fileItemIcon.setTexture(ProjectIcon::getIcon(icon));
  setItemIcon(icon);
  centerFileItem();
  // if (icon == ProjectIcon::Icons::FOLDER) {
  //   fileItemIcon.setScale(0.09, 0.09);
  // }
  // else if (icon == ProjectIcon::Icons::FILE) {
  //   fileItemIcon.setScale(0.2, 0.2);
  // }
}

// Set the fileItem in the center
void FileItem::centerFileItem() {
  float iconX = fileItemBox.getPosition().x + 15;

  float iconY = fileItemBox.getGlobalBounds().height / 2 -
                fileItemIcon.getGlobalBounds().height / 2 +
                fileItemBox.getPosition().y -
                fileItemBox.getOutlineThickness() * 1.5;

  float textX = fileItemBox.getPosition().x + 125;

  float textY = fileItemBox.getGlobalBounds().height / 2 -
                fileItemText.getGlobalBounds().height / 2 +
                fileItemBox.getPosition().y -
                fileItemBox.getOutlineThickness() * 4;

  fileItemIcon.setPosition(iconX, iconY);
  fileItemText.setPosition(textX, textY);
}

// Draw
void FileItem::draw(sf::RenderTarget& window, sf::RenderStates states) const {
  window.draw(fileItemBox);
  window.draw(fileItemText);
  window.draw(fileItemIcon);
}

// Handle event change
void FileItem::addEventHandler(sf::RenderWindow& window, sf::Event event) {
  // When mouse hovers over the fileItem
  if (MouseEvents<sf::RectangleShape>::hovered(fileItemBox, window)) {
    // text is underlined
    fileItemText.setStyle(sf::Text::Underlined);
  }
  else {
    // text not underlined
    fileItemText.setStyle(sf::Text::Regular);
  }

  // When mouse clicks the fileItem
  if (MouseEvents<sf::RectangleShape>::objClicked(fileItemBox, window)) {
    // box fill color blue
    fileItemBox.setFillColor(sf::Color::Blue);
  }
  else if (MouseEvents<sf::Window>::winClicked(window, event)) {
    // box fill color transparent
    fileItemBox.setFillColor(sf::Color::Transparent);
  }
}

// Get the bounds of the item
sf::FloatRect FileItem::getGlobalBounds() const {
  return fileItemBox.getGlobalBounds();
}

// Get the bounds of the fileItemIcon
sf::FloatRect FileItem::getIconGlobalBounds() const {
  return fileItemIcon.getGlobalBounds();
}

// Get the size of item
sf::Vector2f FileItem::getBoxSize() const {
  return fileItemBox.getSize();
}

// Get the position of the item
sf::Vector2f FileItem::getBoxPos() const {
  return fileItemBox.getPosition();
}

// Get the position of the fileItemText
sf::Vector2f FileItem::getTextPos() const {
  return fileItemText.getPosition();
}

// Get the outline thickness of the fileItemBox
float	FileItem::getThickness() const {
  return fileItemBox.getOutlineThickness();
}

// Get the fileItemText
std::string FileItem::getFileItemText() const {
  return fileItemText.getString();
}

// Set the position of the item
void FileItem::setPosition(sf::Vector2f pos) {
  fileItemBox.setPosition(pos.x, pos.y);
  centerFileItem();
}

// Set icon
void FileItem::setItemIcon(ProjectIcon::Icons icon) {
  fileItemIcon.setTexture(ProjectIcon::getIcon(icon));
  setIconScale(icon);
}

// Set icons scale
void FileItem::setIconScale(ProjectIcon::Icons icon) {
  if (icon == ProjectIcon::Icons::FOLDER) {
    fileItemIcon.setScale(0.15, 0.15);
  }
  else if (icon == ProjectIcon::Icons::FILE) {
    fileItemIcon.setScale(0.2, 0.2);
  }
}


// Set fileItemText
void FileItem::setFileItemText(std::string text) {
  fileItemText.setString(text);
}