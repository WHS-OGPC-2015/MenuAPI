#pragma once
#include "ofMain.h"
#include "MenuObject.h"
class Menu
{
public:
    Menu(ofVec2f loc);
    void setLocation(ofVec2f loc);//set center location of menu
    ofVec2f getLocation();

    void addEntity(MenuEntity&);

    void update();
    void draw();


private:
    ofVec2f location;//center location
    vector <MenuEntity*> entities;//array of menu objects to be displayed

};
