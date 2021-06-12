/**
 * ShadowEffect - Definitions
 *
 * Copyright (c) [2021], John Liu.
 */

#include "ShadowEffect.h"

// Default constructor
ShadowEffect::ShadowEffect() {

}

// Customized constructor
ShadowEffect::ShadowEffect(std::string text) {
  txt.setFont(getFont());
  txt.setFillColor(sf::Color::White);
  txt.setCharacterSize(100);
  txt.setString(text);

  txtShadow = txt;
  sf::Color shadowColor = sf::Color::White;
  shadowColor.a = 50;
  txtShadow.setFillColor(shadowColor);
  txtShadow.setScale(1, -0.5);
}

// Create txtShadow color
sf::Color ShadowEffect::getTxtShadowColor(const sf::Color &color) {
  txtShadowColor = color;
  txtShadowColor.a = 50;
  return txtShadowColor;
}

// Set txt position
void ShadowEffect::setTxtPos(float x, float y) {
  txt.setPosition(x, y);
  txtShadow.setPosition(x, y + 200);
}

// Get font
sf::Font& ShadowEffect::getFont() {
  if (!font.loadFromFile("../Quicksand-Regular.otf")) {
    std::cout << "Fail to load font." << std::endl;
  }
  return font;
}

// Draw function
void ShadowEffect:: draw(sf::RenderTarget &window, sf::RenderStates state) const {
  window.draw(txt);
  window.draw(txtShadow);
}