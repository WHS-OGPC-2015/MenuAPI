#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    MenuEntity *aButton;
    MenuEntity *myButton;
    MenuEntity *anotherButton;
    myManager = new MenuManager;//create new instance of MenuManager
    Menu myMenu(ofVec2f(200, 200));//create menu to display
    Menu myToggle(ofVec2f(600, 600));

    //add all necessary textures
    myManager->addTexture("clicked", "clicked.png");
    myManager->addTexture("unclicked", "notclicked.png");
    myManager->addFont("simpleFont", "mySimpleFont.ttf", 36);
    myManager->addTexture("button1", "button1.png");
    myManager->addTexture("button2", "button2.png");
    myManager->addTexture("sliderbg", "sliderbg.png");
    myManager->addTexture("sliderThing", "sliderThing.png");

    //create new button with textures n stuff
    aButton = new SimpleButton(ofVec2f(200, 200),
                myManager->getTexturePointer("unclicked"),
                myManager->getTexturePointer("clicked"),
                myManager->getFontPointer("simpleFont"),
                               "HI");
    myToggle.addEntity(*aButton, "toggled");//add button to the menu

    myButton = new SimpleButton(ofVec2f(600, 600),
                myManager->getTexturePointer("button1"),
                myManager->getTexturePointer("button2"),
                myManager->getFontPointer("simpleFont"),
                                "Toggle");
    myMenu.addEntity(*myButton, "thetoggle");//add button to the menu

//    anotherButton = new SimpleButton(ofVec2f(200, 400),
//                    myManager->getTexturePointer("button1"),
//                    myManager->getTexturePointer("clicked"));
//    myToggle.addEntity(*anotherButton);
    anotherButton = new Slider(ofVec2f(300, 300),
                               myManager->getTexturePointer("sliderbg"),
                               myManager->getTexturePointer("sliderThing"),
                               500, 300, 400);
    myToggle.addEntity(*anotherButton, "slider1");

    myManager->addMenu(myMenu, "theMenu");//add menu to the manager
    myManager->addMenu(myToggle, "toggleable");

    pressed = false;
    clicked = false;
}

//--------------------------------------------------------------
void ofApp::update(){

    myManager->update(mousePos, clicked);
    if(pressed != true)
    {
            clicked = false;

    }
    if(myManager->getMenuReferenceByName("theMenu").getEntityPointer("thetoggle")->getEventDataBool())
    {
        myManager->getMenuReferenceByName("toggleable").setInactive();
    }
    else
    {
        myManager->getMenuReferenceByName("toggleable").setActive();
    }
    std::cout << myManager->getMenuReferenceByName("toggleable").getEntityPointer("slider1")->getEventDataInt() << std::endl;




}

//--------------------------------------------------------------
void ofApp::draw(){
    myManager->draw();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){
    mousePos = ofVec2f(x, y);


}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
            pressed =true;

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){
            if(pressed == true)
            {
                pressed = false;
                clicked = true;
            }


}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){

}
