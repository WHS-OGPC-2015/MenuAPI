#pragma once
#include "ofMain.h"

class MenuObject
{
public:
    MenuObject(ofVec2f loc);

    ofVec2f getLocation();
    void setLocation();//set location relative to menu center

    void draw();
    void update();
private:
    ofVec2f location;//location for object relative to menu center position
};
