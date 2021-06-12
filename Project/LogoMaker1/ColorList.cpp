//
// Created by QiChang Liu on 6/7/21.
//

#include "ColorList.h"

ColorList::ColorList() {

}

ColorList::ColorList(sf::Vector2f colorListPos) {
  /* colorListBox */
  colorListBox.setSize({330, 365});
  colorListBox.setPosition(colorListPos.x, colorListPos.y);
  colorListBox.setFillColor(colorListBoxFillColor);
  colorListBox.setOutlineThickness(2);
  colorListBox.setOutlineColor(colorListBoxOutlineColor);

  /* colorList */
  colorItem1 = ColorItem(sf::Color::Red, {colorListPos.x + 5, colorListPos.y + 5});
  colorItem2 = ColorItem(sf::Color::Yellow, {colorListPos.x + 5, colorListPos.y + colorItemGap + 5});
  colorItem3 = ColorItem(sf::Color::Green, {colorListPos.x + 5, colorListPos.y + colorItemGap * 2 + 5});
  colorItem4 = ColorItem(sf::Color::Blue, {colorListPos.x + 5, colorListPos.y + colorItemGap * 3 + 5});
  colorItem5 = ColorItem(sf::Color::Cyan, {colorListPos.x + 5, colorListPos.y + colorItemGap * 4 + 5});
  colorItem6 = ColorItem(sf::Color::Magenta, {colorListPos.x + 5, colorListPos.y + colorItemGap * 5 + 5});
  colorItem7 = ColorItem(sf::Color::White, {colorListPos.x + 5, colorListPos.y + colorItemGap * 6 + 5});
  colorItem8 = ColorItem(sf::Color::Black, {colorListPos.x + 5, colorListPos.y + colorItemGap * 7 + 5});

//  colorGradient = ColorGradient(colorClicked);
}

sf::Color ColorList::getColorClicked() {
  return colorClicked;
}


void ColorList::draw(sf::RenderTarget &window, sf::RenderStates states) const {
  window.draw(colorListBox);
  window.draw(colorItem1);
  window.draw(colorItem2);
  window.draw(colorItem3);
  window.draw(colorItem4);
  window.draw(colorItem5);
  window.draw(colorItem6);
  window.draw(colorItem7);
  window.draw(colorItem8);
  if (showColorGradient) {
    window.draw(colorGradient);
  }
}

void ColorList::addEventHandler(sf::RenderWindow &window, sf::Event event) {
  colorItem1.addEventHandler(window, event);
  colorItem2.addEventHandler(window, event);
  colorItem3.addEventHandler(window, event);
  colorItem4.addEventHandler(window, event);
  colorItem5.addEventHandler(window, event);
  colorItem6.addEventHandler(window, event);
  colorItem7.addEventHandler(window, event);
  colorItem8.addEventHandler(window, event);

  if (MouseEvents<ColorItem>::objClicked(colorItem1, window)) {
    colorClicked = colorItem1.getColorClicked();
    showColorGradient = true;
  }
  else if (MouseEvents<ColorItem>::objClicked(colorItem2, window)) {
    colorClicked = colorItem2.getColorClicked();
    showColorGradient = true;
  }
  else if (MouseEvents<ColorItem>::objClicked(colorItem3, window)) {
    colorClicked = colorItem3.getColorClicked();
    showColorGradient = true;
  }
  else if (MouseEvents<ColorItem>::objClicked(colorItem4, window)) {
    colorClicked = colorItem4.getColorClicked();
    showColorGradient = true;
  }
  else if (MouseEvents<ColorItem>::objClicked(colorItem5, window)) {
    colorClicked = colorItem5.getColorClicked();
    showColorGradient = true;
  }
  else if (MouseEvents<ColorItem>::objClicked(colorItem6, window)) {
    colorClicked = colorItem6.getColorClicked();
    showColorGradient = true;
  }
  else if (MouseEvents<ColorItem>::objClicked(colorItem7, window)) {
    colorClicked = colorItem7.getColorClicked();
    showColorGradient = true;
  }
  else if (MouseEvents<ColorItem>::objClicked(colorItem8, window)) {
    colorClicked = colorItem8.getColorClicked();
    showColorGradient = true;
  }

}

void ColorList::update() {
  colorGradient = ColorGradient(colorClicked);
}
