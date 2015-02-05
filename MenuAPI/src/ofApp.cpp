#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    myManager = new MenuManager;//create new instance of MenuManager
    Menu myMenu(ofVec2f(200, 200));//create menu to display
    Menu myToggle(ofVec2f(600, 600));

    //add all necessary textures
    myManager->addTexture("clicked", "clicked.png");
    myManager->addTexture("unclicked", "notclicked.png");
    myManager->addFont("simpleFont", "mySimpleFont.ttf", 36);
    myManager->addTexture("button1", "button1.png");
    myManager->addTexture("button2", "button2.png");

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
    if(myManager->getMenuReferenceByName("theMenu").getEntityPointer("thetoggle")->getEventData())
    {
        myManager->getMenuReferenceByName("toggleable").setInactive();
    }
    else
    {
        myManager->getMenuReferenceByName("toggleable").setActive();
    }




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
