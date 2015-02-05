#pragma once
#include "ofMain.h"

class Slider
{
    Slider();

    bool getEventData();//so that the class is not abstract
    int getEventData();//returns slider value

    void draw();
    void update(ofVec2f&, bool&);
    void update();//so that the class is not abstract

private:
    int currentValue, maxValue, minValue;
    float cordScale;
    ofVec2f position;
    ofTexture* background;
    ofTexture* sliderThing;
    ofVec2f bgTLPos, bgBRPos;



};

