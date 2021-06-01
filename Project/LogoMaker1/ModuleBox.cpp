//
// Created by QiChang Liu on 5/29/21.
//

#include "ModuleBox.h"

ModuleBox::ModuleBox() {
  moduleBox.setSize({1500, 500});                         // Size
  moduleBox.setPosition(500, 500);                        // Position
  moduleBox.setFillColor(sf::Color::Transparent);         // Fill color
  moduleBox.setOutlineColor(sf::Color::White);            // Outline color
  moduleBox.setOutlineThickness(1);                       // Outline thickness
}

void ModuleBox::moduleBoxSetSize(float width, float height) {
  moduleBox.setSize({width, height});
}

void ModuleBox::moduleBoxSetPos(float x, float y) {
  moduleBox.setPosition(x, y);
}

void ModuleBox::moduleBoxSetFillColor(const sf::Color &color) {
  moduleBox.setFillColor(color);
}

void ModuleBox::moduleBoxSetOutlineFillColor(const sf::Color &color) {
  moduleBox.setOutlineColor(color);
}

void ModuleBox::moduleBoxSetOutlineThickness(float x) {
  moduleBox.setOutlineThickness(x);
}

sf::Vector2f ModuleBox::getModuleBoxSize() const {
  return moduleBox.getSize();
}

float ModuleBox::getModuleBoxOutlineThickness() const {
  return moduleBox.getOutlineThickness();
}

sf::Vector2f ModuleBox::getModuleBoxPos() const {
  return moduleBox.getPosition();
}


void ModuleBox::draw(sf::RenderTarget &window, sf::RenderStates states) const {
  window.draw(moduleBox);
}

void ModuleBox::addEventHandler(sf::RenderWindow &window, sf::Event event) {
  if (MouseEvents<sf::RectangleShape>::objClicked(moduleBox, window)) {
    if (event.type != event.MouseButtonReleased) {
      clicked = true;
    }
  }
  else if (event.type == sf::Event::MouseButtonReleased) {
    clicked = false;
  }

  sf::Vector2i mousePos = sf::Mouse::getPosition(window);
  if (clicked) {
      moduleBox.setPosition(mousePos.x, mousePos.y);
  }

}

void ModuleBox::update() {

}
