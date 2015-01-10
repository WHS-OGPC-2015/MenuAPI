#pragma once
#include "ofMain.h"

class MenuEntity
{
public:
    MenuObject(ofVec2f loc);//initialize object with position

    ofVec2f getLocation();//get current location
    void setLocation();//set location relative to menu center

    void draw();
    void update();
protected:
    ofVec2f location;//location for object relative to menu center position
};
