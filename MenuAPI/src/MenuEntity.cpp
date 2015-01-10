#include "MenuEntity.h"

MenuEntity::MenuEntity(ofVec2f loc)
{
    location = loc;
}

ofVec2f MenuEntity::getLocation()
{
    return location;
}

void MenuEntity::setLocation(ofVec2f loc)
{
    location = loc;
}
