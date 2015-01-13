#pragma once
#include "MenuEntity.h"
#include "customMaths.h"
class SimpleButton : public MenuEntity //child of MenuEntity class
{
public:
    SimpleButton(ofVec2f loc, ofTexture* norm, ofTexture* hov, ofTrueTypeFont* f);//initialize button with position and textures

    void setButtonText();
    void update(ofVec2f& mousePos);
    void draw();
private:
    ofTexture* normal; //pointer to default texture
    ofTexture* hover; //pointer to texture used on mouse hover
    ofTrueTypeFont* font; //pointer to font for button text
    std::string text;//text to draw
};
