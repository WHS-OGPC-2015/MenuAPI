#pragma once
#include "ofMain.h"

class MenuEntity
{
public:

    virtual void draw() = 0;
    virtual void update() = 0;
    virtual void update(ofVec2f&, bool&) = 0;
    bool requiresMouseData;


    virtual bool getEventData()=0;
    virtual int getEventData()=0;

};
