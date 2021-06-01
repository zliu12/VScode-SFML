//
// Created by QiChang Liu on 5/29/21.
//

#include "ModuleLabel.h"

ModuleLabel::ModuleLabel() {
  moduleLabel.setFont(Font::getFont());           // Font
  moduleLabel.setCharacterSize(100);              // Character size
  moduleLabel.setFillColor(sf::Color::White);     // Character color
  moduleLabel.setString("MODULE LABEL");          // Default text
}

ModuleLabel::ModuleLabel(const sf::String& label) {
  moduleLabel.setFont(Font::getFont());           // Font
  moduleLabel.setCharacterSize(100);              // Character size
  moduleLabel.setFillColor(sf::Color::White);     // Character color
  moduleLabel.setString(label);                   // Customized text
}

void ModuleLabel::moduleLabelSetStr(const std::string& label) {
  moduleLabel.setString(label);
}

void ModuleLabel::moduleLabelSetCharSize(unsigned int charSize) {
  moduleLabel.setCharacterSize(charSize);
}

void ModuleLabel::moduleLabelSetCharColor(sf::Color color) {
  moduleLabel.setFillColor(color);
}

void ModuleLabel::moduleLabelSetPos(float x, float y) {
  moduleLabel.setPosition(x, y);
}

void ModuleLabel::draw(sf::RenderTarget &window, sf::RenderStates states) const {
  window.draw(moduleLabel);
}

void ModuleLabel::addEventHandler(sf::RenderWindow &window, sf::Event event) {

}

void ModuleLabel::update() {

}
