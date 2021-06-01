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

void TextDisplay::draw(sf::RenderTarget &window, sf::RenderStates states) const {
  window.draw(textDisplay);
  window.draw(textDisplayShadow);

  /* textDisplay Slider*/
  window.draw(fontSize);
  window.draw(textXAxis);
  window.draw(textYAxis);
  window.draw(textOpacity);
//  window.draw(textHorizScale);
//  window.draw(textVerScale);

  /* textDisplayShadow Slider*/
  window.draw(shadowXAxis);
  window.draw(shadowYAxis);
  window.draw(shadowOpacity);
  window.draw(shadowSkew);
  window.draw(bgOpacity);
}

void TextDisplay::setTextDisplayStr(const sf::String& str) {
  textDisplay.setString(str);
  textDisplayShadow.setString(str);
}

void TextDisplay::addEventHandler(sf::RenderWindow &window, sf::Event event) {
  /* textDisplay Slider addEventHandler */
  fontSize.addEventHandler(window, event);
  textXAxis.addEventHandler(window, event);
  textYAxis.addEventHandler(window, event);
  textOpacity.addEventHandler(window, event);

  /* Use Slider fontSize to modify textDisplay character size */
  textDisplay.setCharacterSize(fontSize.getMovingDistance());

  /* Use Slider textXAxis & textYAxis to modify textDisplay position */
  textDisplay.setPosition(textXAxis.getMovingDistance() * 5, textYAxis.getMovingDistance() * 3);

  /* Use Slider textOpacity to modify textDisplay opacity */
  sf::Color textColor = textDisplay.getFillColor();
  textColor.a = textOpacity.getMovingDistance() / 1.76;
  textDisplay.setFillColor(textColor);


  /* textDisplayShadow Slider addEventHandler */
  shadowXAxis.addEventHandler(window, event);
  shadowYAxis.addEventHandler(window, event);
  shadowOpacity.addEventHandler(window, event);
  shadowSkew.addEventHandler(window, event);

  /* Use Slider shadowXAxis & shadowYAxis to modify textDisplayedShadow position */
  textDisplayShadow.setPosition(shadowXAxis.getMovingDistance() * 5, shadowYAxis.getMovingDistance() * 3);

  /* Use Slider shadowOpacity to modify textDisplayShadow opacity */
  sf::Color shadowColor = textDisplayShadow.getFillColor();
  shadowColor.a = shadowOpacity.getMovingDistance() / 1.76;
  textDisplayShadow.setFillColor(shadowColor);

  /* Use Slider shadowSkew to modify textDisplayShadow skew*/
  float factorY = shadowSkew.getMovingDistance() / -225.00;
  textDisplayShadow.setScale(textDisplayShadow.getScale().x, factorY);

  /* this one should be in textArea */
  bgOpacity.addEventHandler(window, event);

//  textHorizScale.addEventHandler(window, event);
//  textVerScale.addEventHandler(window, event);
//  float textScaleX = textHorizScale.getMovingDistance() / 225.00;
//  float textScaleY = textVerScale.getMovingDistance() / 225.00;
//  textDisplay.setScale(textScaleX, textScaleY);
}

void TextDisplay::update() {

}

