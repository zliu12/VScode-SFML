//
// Created by QiChang Liu on 6/5/21.
//

#include "DropDownMenu.h"

DropDownMenu::DropDownMenu() {

}

DropDownMenu::DropDownMenu(const string& inputBoxName, const std::vector<std::string>& dropDownListVec, sf::Vector2f dropDownListPos) {
  dropDownInputBox = InputBox(inputBoxName, dropDownListPos);
  dropDownList = ItemList(dropDownListVec, dropDownListPos);
}

void DropDownMenu::draw(sf::RenderTarget &window, sf::RenderStates states) const {
  window.draw(dropDownInputBox);
  if (showList) {
    window.draw(dropDownList);
  }
}

void DropDownMenu::addEventHandler(sf::RenderWindow &window, sf::Event event) {
  dropDownInputBox.addEventHandler(window, event);
  dropDownList.addEventHandler(window, event);

  if (MouseEvents<InputBox>::objClicked(dropDownInputBox, window)) {
    showList = true;
    std::cout << "DropDownMenu showList: " << showList << std::endl;
  }
  else if (MouseEvents<sf::Window>::winClicked(window, event)) {
    showList = false;
    std::cout << "DropDownMenu showList: " << showList << std::endl;
  }
}

void DropDownMenu::update() {
  dropDownInputBox.update();
}
