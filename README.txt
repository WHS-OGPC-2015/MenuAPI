This is the basics of this API
FOR THE LOVE OF GOD READ THIS BEFORE ASKING ME ANY QUESTIONS

Firstly, to add the thing to a project simple copy the source and include "MenuInclude.h"


Now to the basics!


You must create a manager to hold the menus and textures...

make a pointer to it


	MenuManager* myManager;


with this you can begin to add textures
now create an instance of your manager in setup()

	myManager = new MenuManager;


now create your menus with a position


	Menu myMenu(ofVec2f(200, 200));


now you can add textures to the manager


	myManager->addTexture(str:name, str:file_location);
	

you can also add fonts


	myManager->addFonts(str:name, str:file_path);


NOW WE ADD STUFF TO THE MENUS

create a pointer to a MenuEntity in setup() and declare it as follows


	MenuEntity *myEntity = new ENTITY_TYPE(ARG1, ARG2, ARG3.......);


to get a texture from the manager into your new object type


	myManager->getTexturePointer(str:TEXTURE_NAME)


similarly for fonts


	myManager->getFontPointer(str:FONT_NAME);



then add your entities to a menu;


	myMenu.addEntity(*myEntity, str:ENTITY_NAME);


finally add the menu to the menuManager


	myManager->addMenu(myMenu, str:MENU_NAME);





Then make sure to add myManager.update() and .draw() to respective functions.


IMPORTANT.... ADD CLICK LOGIC AS SHOWN IN THE EXAMPLE FILE

WITHOUT IT SOME(MANY) ENTITY CLASSES MAY NOT WORK


FOR THE LOVE OF GOD READ THIS BEFORE ASKING ME ANY QUESTIONS



NP && GL - Based Nathan




