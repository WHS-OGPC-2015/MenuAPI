#include "MenuManager.h"

void MenuManager::addTexture(std::string name, string::string fileName)
{
    ofTexture tmp;//create temporary
    ofLoadImage(tmp, fileName);//load image into texture
    textures.push_back(tmp);//put texture into array
    textureStrings.push_back(name);//put string into mapped array

}

ofTexture& MenuManager::getTexturePointer(std::string tex)
{
    //return
}

ofTexture& MenuManager::getTexturePointer(int num)
{
    return textures[num];
}

void MenuManager::addMenu(Menu m)
{
    Menus.push_back(m);
}
