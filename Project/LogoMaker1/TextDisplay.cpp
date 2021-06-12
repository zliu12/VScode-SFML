//
// Created by QiChang Liu on 5/29/21.
//

#include "TextDisplay.h"

TextDisplay::TextDisplay() {
  /* textDisplay */
  textDisplay.setFont(Font::getFont());
  textDisplay.setCharacterSize(150);
  textDisplay.setFillColor(sf::Color::White);

  /* textDisplayShadow */
  textDisplayShadow = textDisplay;
  sf::Color white = sf::Color::White;
  white.a = 50;
  textDisplayShadow.setPosition(0, 250);
  textDisplayShadow.setScale(1, -0.5);
  textDisplayShadow.setFillColor(white);
}

// Set textDisplay font
void TextDisplay::setTextDisplayFont() {
  textDisplay.setFont(Font::getFont());
}

// Set textDisplay character size
void TextDisplay::setTextDisplayCharSize(unsigned int charSize) {
  textDisplay.setCharacterSize(charSize);
}

// Set textDisplay fill color
void TextDisplay::setTextDisplayColor(sf::Color color) {
  textDisplay.setFillColor(color);
}

// Set textDisplay position
void TextDisplay::setTextDisplayPos(float x, float y) {
  textDisplay.setPosition(x, y);
}

// Set textDisplayShadow position
void TextDisplay::setTextDisplayShadowPos(float x, float y) {
  textDisplayShadow.setPosition(x, y);
}

void TextDisplay::draw(sf::RenderTarget &window, sf::RenderStates states) const {
  window.draw(textDisplay);
  window.draw(textDisplayShadow);

  /* textDisplay Slider*/
  window.draw(fontSize);
  window.draw(textXAxis);
  window.draw(textYAxis);
  window.draw(textOpacity);

  /* textDisplayShadow Slider*/
  window.draw(shadowFontSize);
  window.draw(shadowXAxis);
  window.draw(shadowYAxis);
  window.draw(shadowOpacity);
  window.draw(shadowSkew);

  /* fontColorMenu*/
  window.draw(fontColorMenu);
}

void TextDisplay::setTextDisplayStr(const sf::String& str) {
  if (Item::getStrClicked() == "Close Project") {
    textDisplay.setString("");
    textDisplayShadow.setString("");
  }
    textDisplay.setString(str);
    textDisplayShadow.setString(str);
}

void TextDisplay::addEventHandler(sf::RenderWindow &window, sf::Event event) {
  /* Font */
  if (Item::getStrClicked() == "Black-Jack") {
    std::cout << "TextDisplay Black-Jack" << std::endl;
    textDisplay.setFont(Font::getFont("Black-Jack"));
    textDisplayShadow.setFont(Font::getFont("Black-Jack"));
  }
  else if (Item::getStrClicked() == "DeveloperFont") {
    std::cout << "TextDisplay DeveloperFont" << std::endl;
    textDisplay.setFont(Font::getFont("DeveloperFont"));
    textDisplayShadow.setFont(Font::getFont("DeveloperFont"));
  }
  else if (Item::getStrClicked() == "OpenSans-Bold") {
    std::cout << "TextDisplay OpenSans-Bold" << std::endl;
    textDisplay.setFont(Font::getFont("OpenSans-Bold"));
    textDisplayShadow.setFont(Font::getFont("OpenSans-Bold"));
  }
  else if (Item::getStrClicked() == "Quicksand-Regular") {
    std::cout << "TextDisplay Quicksand-Regular" << std::endl;
    textDisplay.setFont(Font::getFont("Quicksand-Regular"));
    textDisplayShadow.setFont(Font::getFont("Quicksand-Regular"));
  }

  /* fontColorMenu */
  fontColorMenu.addEventHandler(window, event);
  textDisplay.setFillColor(fontColorMenu.getColorClicked());
  fontColorMenu.setColorPickerFillColor(fontColorMenu.getColorClicked());

  /* textDisplay Slider addEventHandler */
  fontSize.addEventHandler(window, event);
  textXAxis.addEventHandler(window, event);
  textYAxis.addEventHandler(window, event);
  textOpacity.addEventHandler(window, event);

  /* Use textDisplay Slider to modify textDisplay */
  if (fontSize.getMovingDistance() != 0) {
    textDisplay.setCharacterSize(fontSize.getMovingDistance());                                           // Font size
  }
  else {
    textDisplay.setCharacterSize(1);
  }

  textDisplay.setPosition(textXAxis.getMovingDistance() * 5, textYAxis.getMovingDistance() * 3 + 100);   // Position
  sf::Color textColor = textDisplay.getFillColor();                                                      // Opacity
  textColor.a = textOpacity.getMovingDistance() / 1.76;
  textDisplay.setFillColor(textColor);

  /* textDisplayShadow Slider addEventHandler */
  shadowFontSize.addEventHandler(window, event);
  shadowXAxis.addEventHandler(window, event);
  shadowYAxis.addEventHandler(window, event);
  shadowOpacity.addEventHandler(window, event);
  shadowSkew.addEventHandler(window, event);

  /* Use textDisplayShadow Slider to modify textDisplayShadow  */
  if (shadowFontSize.getMovingDistance() != 0) {
    textDisplayShadow.setCharacterSize(shadowFontSize.getMovingDistance());                                       // Font size
  }
  else {
    textDisplayShadow.setCharacterSize(1);
  }
  textDisplayShadow.setPosition(shadowXAxis.getMovingDistance() * 5, shadowYAxis.getMovingDistance() * 3 + 350);  // Position
  sf::Color shadowColor = textDisplayShadow.getFillColor();                                                       // Opacity
  shadowColor.a = shadowOpacity.getMovingDistance() / 1.76;
  textDisplayShadow.setFillColor(shadowColor);
  float factorY = shadowSkew.getMovingDistance() / -225.00;                                                        // Vertical skew
  textDisplayShadow.setScale(textDisplayShadow.getScale().x, factorY - 1);
}

void TextDisplay::update() {
  fontSize.update();
  textOpacity.update();
  textXAxis.update();
  textYAxis.update();
  shadowFontSize.update();
  shadowOpacity.update();
  shadowSkew.update();
  shadowXAxis.update();
  shadowYAxis.update();
  fontColorMenu.update();
}

