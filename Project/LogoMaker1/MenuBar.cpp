//
// Created by QiChang Liu on 6/7/21.
//

#include "MenuBar.h"

MenuBar::MenuBar() {
  menuBar.setSize({2800, 80});
  menuBar.setFillColor(menuBarColor);
}

void MenuBar::draw(sf::RenderTarget &window, sf::RenderStates states) const {
  window.draw(menuBar);
  window.draw(File);
  window.draw(Render);
  window.draw(ViewMode);
  window.draw(Font);
}

void MenuBar::addEventHandler(sf::RenderWindow &window, sf::Event event) {
  File.addEventHandler(window, event);
  Render.addEventHandler(window, event);
  Font.addEventHandler(window, event);
  ViewMode.addEventHandler(window, event);
}

void MenuBar::update() {
  File.update();
  Render.update();
  Font.update();
  ViewMode.update();
}
