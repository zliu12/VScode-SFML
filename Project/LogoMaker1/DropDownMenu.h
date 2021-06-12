//
// Created by QiChang Liu on 6/5/21.
//

#ifndef LOGOMAKER1_DROPDOWNMENU_H
#define LOGOMAKER1_DROPDOWNMENU_H
#include "GuiComponent.h"
#include "ItemList.h"
#include "InputBox.h"
using std::string;
using std::vector;

class DropDownMenu : public GuiComponent{
private:
    ItemList dropDownList;
    InputBox dropDownInputBox;
    bool showList = false;

public:
    // Default constructor
    DropDownMenu();

    // Customized constructor
    DropDownMenu(const string& inputBoxName, const vector<string>& dropDownListVec, sf::Vector2f dropDownListPos);

    // From sf::Drawable class
    void draw(sf::RenderTarget& window, sf::RenderStates states) const override;

    // From EventHandler
    void addEventHandler(sf::RenderWindow& window, sf::Event event) override;
    void update() override;
};


#endif //LOGOMAKER1_DROPDOWNMENU_H
