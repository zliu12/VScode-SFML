//
// Created by QiChang Liu on 6/7/21.
//

#include "ColorPicker.h"
#include "Item.h"

ColorPicker::ColorPicker() {

}

ColorPicker::ColorPicker(const std::string& pickerLabel, sf::Vector2f pickerPos) {
  /* colorPickerBox */
  colorPickerBox.moduleBoxSetSize(330, 70);
  colorPickerBox.moduleBoxSetPos(pickerPos.x, pickerPos.y);
  colorPickerBox.moduleBoxSetFillColor(sf::Color::White);
  colorPickerBox.moduleBoxSetOutlineThickness(2);
  colorPickerBox.moduleBoxSetOutlineFillColor(colorPickerBoxColor);

  /* colorPickerLabel */
  colorPickerLabel.moduleLabelSetCharSize(25);
  colorPickerLabel.moduleLabelSetStr(pickerLabel);
  setColorPickerLabelPos();

  /* colorPickerInitialPos */
  colorPickerInitialPos = pickerPos;
}

void ColorPicker::setColorPickerLabelPos() {
  colorPickerLabel.moduleLabelSetPos(colorPickerBox.getModuleBoxPos().x, colorPickerBox.getModuleBoxPos().y - 35);
}

sf::Color ColorPicker::getColorPickerBoxColor() {
  return colorPickerBox.getModuleBoxColor();
}

void ColorPicker::resetColorPickerPos() {
  colorPickerBox.moduleBoxSetPos(colorPickerInitialPos.x, colorPickerInitialPos.y);
  setColorPickerLabelPos();
}

sf::FloatRect ColorPicker::getGlobalBounds() {
  return colorPickerBox.getGlobalBounds();
}

void ColorPicker::setColorPickerFillColor(sf::Color color) {
  colorPickerBox.moduleBoxSetFillColor(color);
}

void ColorPicker::draw(sf::RenderTarget &window, sf::RenderStates states) const {
  window.draw(colorPickerBox);
  window.draw(colorPickerLabel);
}

void ColorPicker::addEventHandler(sf::RenderWindow &window, sf::Event event) {
  if (States::floatMode) {
    colorPickerBox.addEventHandler(window, event);
    setColorPickerLabelPos();
  }
}

void ColorPicker::update() {
  if (KeyBoardShortCuts::resetPos() || Item::getStrClicked() == "Reset Module         (Command+F1)") {
    resetColorPickerPos();
  }
}
