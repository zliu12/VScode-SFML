//
// Created by QiChang Liu on 5/29/21.
//

#include "Font.h"

sf::Font Font::font;
sf::Font Font::textDisplayFont;


void Font::loadFont() {
  if (!font.loadFromFile("Fonts/Quicksand-Regular.otf")) {
    printf("Font::Fail to load font.\n");
  }
}

void Font::loadFont(const std::string& fontName) {
  if (fontName == "Black-Jack") {
    if(!textDisplayFont.loadFromFile("Fonts/Black-Jack.otf")) {
      std::cout << "Font: fail to load " << fontName << std::endl;
    }
  }
  else if (fontName == "DeveloperFont") {
    if(!textDisplayFont.loadFromFile("Fonts/DeveloperFont.ttf")) {
      std::cout << "Font: fail to load " << fontName << std::endl;
    }
  }
  else if (fontName == "OpenSans-Bold") {
    if(!textDisplayFont.loadFromFile("Fonts/OpenSans-Bold.ttf")) {
      std::cout << "Font: fail to load " << fontName << std::endl;
    }
  }
  else if (fontName == "Quicksand-Regular") {
    if(!textDisplayFont.loadFromFile("Fonts/Quicksand-Regular.otf")) {
      std::cout << "Font: fail to load " << fontName << std::endl;
    }
  }
}

sf::Font& Font::getFont() {
  loadFont();
  return font;
}

sf::Font& Font::getFont(const std::string& fontName) {
  loadFont(fontName);
  return textDisplayFont;
}

