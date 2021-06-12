//
// Created by QiChang Liu on 6/7/21.
//

#include "ColorMenu.h"

ColorMenu::ColorMenu() {

}

ColorMenu::ColorMenu(const std::string& colorPickerLabel, sf::Vector2f colorPickerPos, sf::Vector2f colorListPos) {
  colorPicker = ColorPicker(colorPickerLabel, colorPickerPos);
  colorList = ColorList(colorListPos);
}

sf::Color ColorMenu::getColorClicked() {
 return colorList.getColorClicked();
}

void ColorMenu::setColorPickerFillColor(sf::Color color) {
  colorPicker.setColorPickerFillColor(color);
}

void ColorMenu::draw(sf::RenderTarget &window, sf::RenderStates states) const {
  window.draw(colorPicker);
  if (drawList && !States::floatMode) {
    window.draw(colorList);
  }
}

void ColorMenu::addEventHandler(sf::RenderWindow &window, sf::Event event) {
  colorPicker.addEventHandler(window, event);
  colorList.addEventHandler(window, event);
  if (MouseEvents<ColorPicker>::objClicked(colorPicker, window)) {
    drawList = true;
//    std::cout << "ColorMenu drawList: " << drawList << std::endl;
  }
  else if (MouseEvents<sf::Window>::winClicked(window, event)) {
    drawList = false;
//    std::cout << "ColorMenu drawList: " << drawList << std::endl;
  }
}

void ColorMenu::update() {
  colorPicker.update();
  colorList.update();
}
