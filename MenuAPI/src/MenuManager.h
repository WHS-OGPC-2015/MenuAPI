#pragma once

#include "ofMain.h
#include "Menu.h"

class MenuManager
{
public:
    void addTexture(std::string name, std::string fileName);//add texture to array by filename and mapped name
    ofTexture& getTexturePointer(std::string tex);//retrieve texture reference by name
    ofTexture& getTexturePointer(int tex);//retrieve texture reference my position in array


    void addMenu(Menu);//add Menu to menu array
private:
    vector <ofTexture> textures;
    vector <std::string> textureStrings;
    vector <Menu> Menus;
};
