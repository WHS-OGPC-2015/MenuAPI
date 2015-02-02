#pragma once
#include "ofMain.h"

class MenuEntity
{
public:
    MenuEntity();//initialize object with position

    ofVec2f getLocation();//get current location
    void setLocation(ofVec2f);//set location relative to menu center

    void draw();
    void update();
    void update(ofVec2f&, bool&);

    bool requiresMouseData;
protected:
    ofVec2f location;//location for object relative to menu center position

};
