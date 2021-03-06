//
// Created by QiChang Liu on 5/29/21.
//

#include "TextInput.h"

TextInput::TextInput() {
  /* textInputBox */
  textInputBox.moduleBoxSetSize(700, 80);
  textInputBox.moduleBoxSetPos(500, 500);

  /* textInputLabel */
  textInputLabel.moduleLabelSetStr("Logo Text");
  textInputLabel.moduleLabelSetCharSize(25);
  textInputLabel.moduleLabelSetPos(textInputBox.getModuleBoxPos().x, textInputBox.getModuleBoxPos().y - 35);

  /* txtTyped */
  txtTyped.setTxtPos(textInputBox.getModuleBoxPos().x, textInputBox.getModuleBoxPos().y);
  txtTyped.setTxtSize(textInputBox.getModuleBoxSize().y * 0.7);
}

void TextInput::setTextInputBoxPos(float x, float y) {
  textInputBox.moduleBoxSetPos(x, y);
  textInputLabel.moduleLabelSetPos(textInputBox.getModuleBoxPos().x, textInputBox.getModuleBoxPos().y - 35);
  txtTyped.setTxtPos(textInputBox.getModuleBoxPos().x, textInputBox.getModuleBoxPos().y);
}

void TextInput::setTextInputLabelPos() {
  textInputLabel.moduleLabelSetPos(textInputBox.getModuleBoxPos().x, textInputBox.getModuleBoxPos().y - 35);
}

void TextInput::setTxtTypedPos() {
  txtTyped.setTxtPos(textInputBox.getModuleBoxPos().x + 10, textInputBox.getModuleBoxPos().y);
}

sf::Vector2f TextInput::getTextInputBoxSize() {
  return textInputBox.getModuleBoxSize();
}

sf::String TextInput::getTxtTyped() {
  return txtTyped.getTxt();
}

void TextInput::draw(sf::RenderTarget &window, sf::RenderStates states) const {
  window.draw(txtTyped);
  window.draw(textInputBox);
  window.draw(textInputLabel);
}

void TextInput::addEventHandler(sf::RenderWindow &window, sf::Event event) {
  txtTyped.addEventHandler(window, event);
  if (States::floatMode) {
    textInputBox.addEventHandler(window, event);
  }
  setTextInputLabelPos();
  setTxtTypedPos();
}

void TextInput::update() {

}

