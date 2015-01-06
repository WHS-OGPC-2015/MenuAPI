#include "Menu.h"


Menu::Menu(ofVec2f loc)
{
    location = loc;
}

void Menu::setLocation(ofVec2f loc)
{
    location = loc;
}

ofVec2f Menu::getLocation();
{
    return location;
}

void addEntity(MenuEntity& ent)
{
    MenuEntity* tmp = ent;
    entities.push_back(Menu);
}

void Menu::update()
{
    for(int aa = 0; aa<entities.size(); aa++)
    {
        entities[aa].update();
    }
}

void Menu::draw()
{
    for(int aa = 0; aa<entities.size(); aa++)
    {
        entities[aa].draw();
    }
}
