#include "Slider.h"

Slider::Slider(ofVec2f& position, ofTexture& bg, ofTexture& slider, int M, int m, int start)
{
    background = &bg;
    sliderThing = &slider;
    currentValue = start;
    maxValue = M;
    minValue =m;
}

bool Slider::getEventData(){}//here so its not abstract

int Slider::getEventData()
{
    return currentValue;
}

void Slider::update(){}//also just here to prevent error

void Slider::update(ofVec2f& mousePos, bool& clicked)
{
        if(clicked)
    {
        //nowClicked = !nowClicked; //toggle clicked status

            //if it is...test to see if a point is not inside the button
        if(mousePos.x < bgTLPos.x ||
           mousePos.y < bgTLPos.y ||
           mousePos.x > bgBRPos.x ||
           mousePos.y > bgBRPos.y   )
        {

        }
        else
        {
            currentValue = (mousePos.x - bgTLPos.x);
        }
    }
}

void Slider::draw()
{
        //reset BR and TL corner positions for collision
        bgTLPos = ofVec2f((position.x-(background.getWidth()/2)), (position.y-(background->getHeight()/2)));
        bgBRPos = ofVec2f((bgTLPos.x+(background->getWidth())), (bgTLPos.y+(background->getHeight())));
        background->draw(bgTLPos);
        sliderThing->draw(ofVec2f((bgTLPos.x+currentValue*cordScale), (bgTLPos.y+((background.getHeight/2)-(sliderThing.getHeight()/2));


}
