//
// Created by QiChang Liu on 6/7/21.
//

#include "ColorItem.h"

ColorItem::ColorItem() {

}

ColorItem::ColorItem(sf::Color color, sf::Vector2f colorItemPos) {
  colorItemBox.setSize({320, 40});
  colorItemBox.setPosition(colorItemPos.x, colorItemPos.y);
  colorItemBox.setFillColor(color);
  colorItemBox.setOutlineColor(colorItemBoxOutlineColor);
  colorItemBox.setOutlineThickness(2);
  colorGradient = ColorGradient(sf::Color::Red);
}

sf::Color ColorItem::getColorClicked() {
  return colorClicked;
}

sf::FloatRect ColorItem::getGlobalBounds() {
  return colorItemBox.getGlobalBounds();
}

void ColorItem::draw(sf::RenderTarget &window, sf::RenderStates states) const {
  if (showColorGradient) {
//    window.draw(colorGradient);
  }
  window.draw(colorItemBox);
}

void ColorItem::addEventHandler(sf::RenderWindow &window, sf::Event event) {
  if (MouseEvents<sf::RectangleShape>::objClicked(colorItemBox, window)) {
    colorClicked = colorItemBox.getFillColor();
//    std::cout << "colorClicked" << std::endl;
    showColorGradient = true;
//    std::cout << "showColorGradient: " << showColorGradient << std::endl;
  }
  else if (MouseEvents<sf::RectangleShape>::winClicked(window, event)) {
//    showColorGradient = false;
  }

}

void ColorItem::update() {

}
