//
// Created by QiChang Liu on 6/1/21.
//

#ifndef LOGOMAKER1_ITEM_H
#define LOGOMAKER1_ITEM_H
#include "GuiComponent.h"
#include "ModuleBox.h"
#include "KeyBoardShortCuts.h"
#include "MouseEvents.h"

class Item : public GuiComponent {
private:
    sf::RectangleShape itemBox;
    sf::Text  itemTxt;
    sf::Color itemOutlineColor = sf::Color(100, 100, 100);
    sf::Color itemBgColor = sf::Color(50, 50, 50);
    static std::string strClicked;

public:
    // Default constructor
    Item();

    // Set the item object position
    void setItemPos(float x, float y);

    // Set the itemTxt string
    void setItemTxtStr(const std::string& itemStr);

    // Set itemTxt in the center of itemBox
    void centerItemTxt();

    // Get itemBox size
    sf::Vector2f getItemBoxSize();

    // Get strClicked
    static std::string getStrClicked();

    // From sf::Drawable class
    void draw(sf::RenderTarget& window, sf::RenderStates states) const override;

    // From EventHandler
    void addEventHandler(sf::RenderWindow& window, sf::Event event) override;
    void update() override;
};


#endif //LOGOMAKER1_ITEM_H
