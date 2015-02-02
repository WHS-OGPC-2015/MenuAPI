#include "MenuManager.h"
#include <string>
void MenuManager::addTexture(std::string name, std::string fileName)
{
    ofTexture tmp;//create temporary
    ofLoadImage(tmp, fileName);//load image into texture
    textures.push_back(tmp);//put texture into array
    textureNames[name] = (textures.size()-1);//put string into map

}

ofTexture& MenuManager::getTexturePointer(std::string tex)
{
    return textures[textureNames[tex]];
}

ofTexture& MenuManager::getTexturePointer(int num)
{
    return textures[num];
}

void MenuManager::addFont(std::string name, std::string fileName, int fontSize)
{
    ofTrueTypeFont tmp;//create temporary TTF
    tmp.loadFont(fileName, fontSize);//load TTF from file
    fonts.push_back(tmp);//add TTF to fonts array
    fontNames[name] = (fonts.size()-1);//add fontName to array
}

ofTrueTypeFont& MenuManager::getFontPointer(std::string name)
{
    return fonts[fontNames[name]];
}

ofTrueTypeFont& MenuManager::getFontPointer(int pos)
{
    return fonts[pos];
}

void MenuManager::addMenu(Menu m, std::string name)
{
    menus.push_back(m);//copy menu to array
    menuNames[name] = (menus.size()-1);//add menu name to menuNames map
}

void MenuManager::update(ofVec2f& mousePos, bool& clicked)
{
    for(int aa = 0; aa < menus.size(); aa++)//cycle through all menus and call their update functions
    {
        menus[aa].update( mousePos, clicked);
    }
}

void MenuManager::draw()
{
    for(int aa = 0; aa < menus.size(); aa++)//cycle through all menus and call their draw functions
    {
        menus[aa].draw();
    }
}

