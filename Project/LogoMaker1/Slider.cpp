//
// Created by QiChang Liu on 5/28/21.
//

#include "Slider.h"

Slider::Slider() {
  /* sliderBox */
  sliderBox.moduleBoxSetSize(200, 600);
  sliderBox.moduleBoxSetPos(10, 850);
  sliderBox.moduleBoxSetOutlineFillColor(sf::Color::White);
  sliderBox.moduleBoxSetOutlineThickness(5);

  /* scaleLine */
  scaleLine.setFillColor(sf::Color::White);
  scaleLine.setSize({5, static_cast<float>((sliderBox.getModuleBoxSize().y * 0.80))});
  setScaleLinePos();

  /* scaleMark */
  scaleMark.setFillColor(sf::Color::Blue);
  scaleMark.setRadius(15);
  setScaleMarkPos();

  /* sliderLabel */
  sliderLabel.moduleLabelSetStr("Font Size");
  sliderLabel.moduleLabelSetCharSize(43);
  setSliderLabelPos();
}

Slider::Slider(const std::string& label, sf::Vector2f pos) {
  /* sliderBox */
  sliderBox.moduleBoxSetSize(200, 600);
  sliderBox.moduleBoxSetPos(pos.x, pos.y);
  sliderBox.moduleBoxSetOutlineFillColor(sf::Color::White);
  sliderBox.moduleBoxSetOutlineThickness(1);

  /* scaleLine */
  scaleLine.setFillColor(sf::Color::White);
  scaleLine.setSize({5, static_cast<float>((sliderBox.getModuleBoxSize().y * 0.80))});
  setScaleLinePos();

  /* scaleMark */
  scaleMark.setFillColor(sf::Color::Blue);
  scaleMark.setRadius(20);
  scaleMark.setOutlineColor(sf::Color::Yellow);
  setScaleMarkPos();

  /* sliderLabel */
  sliderLabel.moduleLabelSetStr(label);
  sliderLabel.moduleLabelSetCharSize(30);
  setSliderLabelPos();

  /* Initial position */
  initPos.x = pos.x;
  initPos.y = pos.y;

  /* numVal */
  numVal.setFont(Font::getFont());
  numVal.setCharacterSize(25);
  MovDistStr = std::to_string(MovDist);
  setNumValPos();
}

void Slider::setSliderLabelPos() {
  sliderLabel.moduleLabelSetPos(sliderBox.getModuleBoxPos().x, sliderBox.getModuleBoxPos().y + scaleLine.getSize().y + 65);
}

void Slider::setScaleLinePos() {
  scaleLine.setPosition(sliderBox.getModuleBoxPos().x + (sliderBox.getModuleBoxSize().x - scaleLine.getSize().x) / 2,
                        sliderBox.getModuleBoxPos().y + (sliderBox.getModuleBoxSize().y - scaleLine.getSize().y) / 2 - 25);
}

void Slider::setScaleMarkPos() {
  scaleMark.setPosition(scaleLine.getPosition().x - scaleMark.getRadius() + 2,
                        scaleLine.getPosition().y + scaleLine.getSize().y - scaleMark.getRadius());
}

void Slider::setNumValPos() {
  numVal.setPosition(scaleLine.getPosition().x - sliderBox.getModuleBoxSize().x / 2 + 10, scaleLine.getPosition().y - 30);
}

void Slider::moveScaleMark(sf::RenderWindow &window) {
  sf::Vector2i mousePos = sf::Mouse::getPosition(window);
  if (clicked) {
    scaleLine.setFillColor(sf::Color::Cyan);
    scaleMark.setOutlineThickness(5);
    scaleMark.setPosition(scaleMark.getPosition().x, mousePos.y);
    MovDist = static_cast<int>(mousePos.y - scaleLine.getPosition().y - scaleLine.getSize().y + scaleMark.getRadius()) * -1;
    MovDistStr = std::to_string(MovDist);

    if (MovDist < 0) {
      MovDist = 0;
      int stopY = scaleLine.getPosition().y + scaleLine.getSize().y - scaleMark.getRadius();
      scaleMark.setPosition(scaleMark.getPosition().x, stopY);
      MovDistStr = std::to_string(MovDist);
    }

    if (MovDist > 450) {
      MovDist = 450;
      int stopY = scaleLine.getPosition().y;
      scaleMark.setPosition(scaleMark.getPosition().x, stopY);
      MovDistStr = std::to_string(MovDist);
    }
    std::cout << "MovDist: " << MovDist << std::endl;
    std::cout << MovDistStr << std::endl;
  }
  else {
    scaleLine.setFillColor(sf::Color::Transparent);
    scaleMark.setOutlineThickness(0);
  }
}

void Slider::setClickedTrue(sf::RenderWindow &window, sf::Event event) {
  // If click the scaleMark
  if (MouseEvents<sf::CircleShape>::objClicked(scaleMark, window)) {
    // If the mouse button is not released
    if (event.type != event.MouseButtonReleased) {
      clicked = true;
    }
  }
  else if (event.type == event.MouseButtonReleased) {
    clicked = false;
  }
}

int Slider::getMovingDistance() const {
  return MovDist;
}

sf::Vector2f Slider::getSliderPos() {
  return sliderBox.getModuleBoxPos();
}

void Slider::resetSliderPos() {
  sliderBox.moduleBoxSetPos(initPos.x, initPos.y);
}

void Slider::draw(sf::RenderTarget& window, sf::RenderStates states) const {
  window.draw(sliderBox);
  window.draw(sliderLabel);
  window.draw(scaleLine);
  window.draw(scaleMark);
  window.draw(numVal);
}

void Slider::addEventHandler(sf::RenderWindow &window, sf::Event event) {
  // These two work together to make scaleMark moves along with sliderBox (uncommented at the same time), but scaleMark
  // won't move
  // Comment out sliderBox.addEventHandler, scaleMark can move, but sliderBox can't move, and scaleMark always reset to
  // initial position (comment out setScaleMarkPos() to make it not reset automatically)
//  sliderBox.addEventHandler(window, event);
//  setScaleMarkPos();

  // These three keeps everything inside the sliderBox moving with the sliderBox
  setScaleLinePos();
  setSliderLabelPos();
  setNumValPos();

  setClickedTrue(window, event);
  moveScaleMark(window);

  numVal.setString(MovDistStr);

  // Reset position to initial position
  if (KeyBoardShortCuts::resetPos()) {
    resetSliderPos();
    std::cout << "Reset slider" << std::endl;
  }
}

void Slider::update() {

}
