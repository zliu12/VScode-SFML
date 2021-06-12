#include "ColorGradient.h"

ColorGradient::ColorGradient() {

}

ColorGradient::ColorGradient(sf::Color color) {
  pixel.resize(400 * 400);
  findHue(color);
  setPixelPoint();
}

void ColorGradient::setPixelPoint() {
  for (int saturation = 0; saturation <= 400; ++saturation) {
    for (int value = 0; value <= 400; ++value) {
      S = static_cast<float>(saturation) / 400;
      V = static_cast<float>(value) / 400;
//      std::cout << "(" << saturation << ", " << value << "): " <<  S << "\t" << V << std::endl;

      int hueInt = hue / 60;
//      std::cout << hueInt << std::endl;
      float f = hue / 60 - hueInt;
      float p = 100 * V * (1 - S);
      float q = 100 * V * (1 - S * f);
      float t = 100 * V * (1 - S * (1 - f));

//      std::cout <<  "(" << saturation << ", " << value << "): " << p << " " << " " << q << " " << t << std::endl;

      switch (hueInt) {
        case 0:
          newColor.r = static_cast<sf::Uint8>(V);
          newColor.g = static_cast<sf::Uint8>(t);
          newColor.b = static_cast<sf::Uint8>(p);
          break;
        case 1:
          newColor.r = static_cast<sf::Uint8>(q);
          newColor.g = static_cast<sf::Uint8>(V);
          newColor.b = static_cast<sf::Uint8>(p);
          break;
        case 2:
          newColor.r = static_cast<sf::Uint8>(p);
          newColor.g = static_cast<sf::Uint8>(V);
          newColor.b = static_cast<sf::Uint8>(t);
          break;
        case 3:
          newColor.r = static_cast<sf::Uint8>(p);
          newColor.g = static_cast<sf::Uint8>(q);
          newColor.b = static_cast<sf::Uint8>(V);
          break;
        case 4:
          newColor.r = static_cast<sf::Uint8>(t);
          newColor.g = static_cast<sf::Uint8>(p);
          newColor.b = static_cast<sf::Uint8>(V);
          break;
        case 5:
          newColor.r = static_cast<sf::Uint8>(V);
          newColor.g = static_cast<sf::Uint8>(p);
          newColor.b = static_cast<sf::Uint8>(q);
          break;
      }

      pixel[saturation * 400 + value].color = newColor;
      pixel[saturation * 400 + value].position = sf::Vector2f(initialPosX + saturation, initialPosY + value);
    }
  }
}

void ColorGradient::findRGB(sf::Color color) {
  if (color == sf::Color::Blue) {
    RGB_R = 0;
    RGB_G = 0;
    RGB_B = 255;
  }
  else if (color == sf::Color::Magenta) {
    RGB_R = 255;
    RGB_G = 0;
    RGB_B = 255;
  }
  else if (color == sf::Color::Red) {
    RGB_R = 255;
    RGB_G = 0;
    RGB_B = 0;
  }
  else if (color == sf::Color::Yellow) {
    RGB_R = 255;
    RGB_G = 255;
    RGB_B = 0;
  }
  else if (color == sf::Color::Cyan) {
    RGB_R = 0;
    RGB_G = 255;
    RGB_B = 255;
  }
  else if (color == sf::Color::Green) {
    RGB_R = 0;
    RGB_G = 255;
    RGB_B = 0;
  }
}

float ColorGradient::findHue(sf::Color color) {
  if (color == sf::Color::Blue) {
    return hue = 240;
  }
  else if (color == sf::Color::Magenta) {
    return hue = 300;
  }
  else if (color == sf::Color::Red) {
    return hue = 0;
  }
  else if (color == sf::Color::Yellow) {
    return hue = 60;
  }
  else if (color == sf::Color::Cyan) {
    return hue = 180;
  }
  else if (color == sf::Color::Green) {
    return hue = 120;
  }
  return -1;
}

sf::Color getColorClicked() {

}

void ColorGradient::draw(sf::RenderTarget &window, sf::RenderStates states) const {
  window.draw(pixel);
}

void ColorGradient::addEventHandler(sf::RenderWindow &window, sf::Event event) {

}

void ColorGradient::update() {

}
