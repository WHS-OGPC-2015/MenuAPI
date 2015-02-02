#include "SimpleButton.h"

 SimpleButton::SimpleButton(ofVec2f loc, ofTexture& norm, ofTexture& click, ofTrueTypeFont& f)
{

    location = loc;
    normal = &norm;
    clicked = &click;
    font = &f;
    requiresMouseData = true;//this class will need data about the mouse to function
    nowClicked = false;
}

void SimpleButton::setButtonTextString(std::string newString)
{
    text = newString;
}

std::string SimpleButton::getButtonTextString()
{
    return text;
}

void SimpleButton::update(ofVec2f& mousePos, bool& clicked)
{
     std::cout << "Ima here 4" << std::endl;
    //test to see if the mouse is clicked
    if(clicked)
    {
            //if it is...test to see if a point is not inside the button
        if(mousePos.x < textureTLPos.x ||
           mousePos.y < textureTLPos.y ||
           mousePos.x > textureBRPos.x ||
           mousePos.y > textureBRPos.y   )
        {

        }
        else//if the points not outside its inside
        {
            nowClicked = !nowClicked; //toggle clicked status
        }
    }

}

void SimpleButton::draw(int)
{
     std::cout << "Ima here 3" << std::endl;
    //the BR/TL positions are for keeping track of the coordinates for purposes
    //of the mouse collision logic in update()
    if(nowClicked == true)//if the button has been clicked draw that texture
    {
        textureTLPos = ofVec2f((position.x-(clicked->getWidth()/2)), (position.y-(clicked->getHeight()/2)));
        textureBRPos = ofVec2f((textureTLPos.x-(clicked->getWidth())), (textureTLPos.y-(clicked->getHeight())));
        clicked->draw(textureTLPos);
         std::cout << "Ima here" << std::endl;

    }
    else//otherwise draw the non-clicked texture
    {
        textureTLPos = ofVec2f((position.x-(normal->getWidth()/2)), (position.y-(normal->getHeight()/2)));
        textureBRPos = ofVec2f((textureTLPos.x-(normal->getWidth())), (textureTLPos.y-(normal->getHeight())));
        normal->draw(textureTLPos);
         std::cout << "Ima here 2" << std::endl;
    }
    font->drawString(text, textureTLPos.x, textureTLPos.y);

}
