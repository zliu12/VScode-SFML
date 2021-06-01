//
// Created by QiChang Liu on 5/29/21.
//

#include "TextArea.h"

TextArea::TextArea() {
  /* textAreaBox */
  textAreaBox.moduleBoxSetSize(2790, 800);                       // Size
  textAreaBox.moduleBoxSetFillColor(sf::Color::Transparent);      // Fill color
  textAreaBox.moduleBoxSetOutlineFillColor(sf::Color::White);     // Outline color
  textAreaBox.moduleBoxSetOutlineThickness(1);                    // Outline thickness
  centerTextAreaBox();                                            // Center box

  /* textInput */
  resetTextInputPos();

  /* textDisplay */
//  textDisplay.setTextDisplayFont();
//  textDisplay.setTextDisplayCharSize(textAreaBox.getModuleBoxSize().y * 0.25);
//  textDisplay.setTextDisplayColor(sf::Color::White);

  /* textDisplayShadow */

}

void TextArea::centerTextAreaBox() {
  float x = (2800 - textAreaBox.getModuleBoxSize().x) / 2;
  textAreaBox.moduleBoxSetPos(x, textAreaBox.getModuleBoxOutlineThickness() * 2);
}

void TextArea::resetTextInputPos() {
  textInput.setTextInputBoxPos(textAreaBox.getModuleBoxPos().x + (textAreaBox.getModuleBoxSize().x -
                               textInput.getTextInputBoxSize().x) / 2,
                               textAreaBox.getModuleBoxPos().y + textAreaBox.getModuleBoxSize().y -
                               textInput.getTextInputBoxSize().y);
}


void TextArea::draw(sf::RenderTarget &window, sf::RenderStates states) const {
  window.draw(textAreaBox);
  window.draw(textInput);
  window.draw(textDisplay);
}

void TextArea::addEventHandler(sf::RenderWindow &window, sf::Event event) {
  textInput.addEventHandler(window, event);
  textDisplay.addEventHandler(window, event);
  textDisplay.setTextDisplayStr(textInput.getTxtTyped());

  if (KeyBoardShortCuts::resetPos()) {
    resetTextInputPos();
    std::cout << "Reset textInput" << std::endl;
  }
}
void TextArea::update() {

}

