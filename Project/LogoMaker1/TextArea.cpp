//
// Created by QiChang Liu on 5/29/21.
//

#include "TextArea.h"

TextArea::TextArea() {
  /* textAreaBox */
  textAreaBox.moduleBoxSetSize(2800, 850);                            // Size
  textAreaBox.moduleBoxSetFillColor(sf::Color::Transparent);          // Fill color
  textAreaBox.moduleBoxSetOutlineThickness(2);                        // Outline thickness
  centerTextAreaBox();                                                // Center box

  /* textInput */
  resetTextInputPos();

  /* textDisplay */
  textDisplay.setTextDisplayPos(500, 500);
}

void TextArea::centerTextAreaBox() {
  float x = (2800 - textAreaBox.getModuleBoxSize().x) / 2;
  textAreaBox.moduleBoxSetPos(x, textAreaBox.getModuleBoxOutlineThickness() * 40);
}

void TextArea::resetTextInputPos() {
//  textInput.setTextInputBoxPos(textAreaBox.getModuleBoxPos().x + (textAreaBox.getModuleBoxSize().x -
//                               textInput.getTextInputBoxSize().x) / 2,
//                               textAreaBox.getModuleBoxPos().y + textAreaBox.getModuleBoxSize().y -
//                               textInput.getTextInputBoxSize().y);
  textInput.setTextInputBoxPos(2040, 1000);
}

void TextArea::draw(sf::RenderTarget &window, sf::RenderStates states) const {
  window.draw(textAreaBox);
  window.draw(textInput);
  window.draw(textDisplay);
  window.draw(bgOpacity);
  window.draw(bgColorMenu);
}

void TextArea::addEventHandler(sf::RenderWindow &window, sf::Event event) {
  textInput.addEventHandler(window, event);
  textDisplay.addEventHandler(window, event);
  textDisplay.setTextDisplayStr(textInput.getTxtTyped());

  /* bgColorMenu */
  bgColorMenu.addEventHandler(window, event);
  textAreaBox.moduleBoxSetFillColor(bgColorMenu.getColorClicked());
  bgColorMenu.setColorPickerFillColor(bgColorMenu.getColorClicked());

  /* Use Slider bgOpacity to modify background color opacity */
  sf::Color textAreaBoxColor = textAreaBox.getModuleBoxColor();
  textAreaBoxColor.a = bgOpacity.getMovingDistance() / 1.76;
  textAreaBox.moduleBoxSetFillColor(textAreaBoxColor);
  bgOpacity.addEventHandler(window, event);
}

void TextArea::update() {
  textDisplay.update();
  textDisplay.update();
  bgOpacity.update();
  bgColorMenu.update();

  if (KeyBoardShortCuts::resetPos()) {
    resetTextInputPos();
//    std::cout << "Reset textInput" << std::endl;
  }

  if (Item::getStrClicked() == "Reset Module         (Command+F1)") {
    resetTextInputPos();
  }
}

