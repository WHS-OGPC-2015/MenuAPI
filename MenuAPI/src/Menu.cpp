#include "Menu.h"


Menu::Menu(ofVec2f loc)
{
    location = loc;
}

void Menu::setLocation(ofVec2f loc)
{
    location = loc;
}

ofVec2f Menu::getLocation()
{
    return location;
}

void Menu::addEntity(MenuEntity& ent)
{
    entities.push_back(&ent);
}

void Menu::update(ofVec2f& mousePos, bool& clicked)
{
    for(int aa = 0; aa<entities.size(); aa++)//updates all of the menus entities
    {
        if(entities[aa]->requiresMouseData)//if the entity needs mouseinput call that update fxn
        {
            entities[aa]->update(mousePos, clicked);
        }
        else//otherwise call the other update
        {
            entities[aa]->update();
        }

    }
}
//should add vbo support here or in MenuManager on a permenu basis
void Menu::draw()
{
    for(int aa = 0; aa<entities.size(); aa++)
    {
        entities[aa]->draw();
    }
}
