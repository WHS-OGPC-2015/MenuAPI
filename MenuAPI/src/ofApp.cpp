#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    myManager = new MenuManager;//create new instance of MenuManager
    Menu myMenu(ofVec2f(400, 400));//create menu to display

    //add all necessary textures
    myManager->addTexture("clicked", "clicked.png");
    myManager->addTexture("unclicked", "notclicked.png");
    myManager->addFont("simpleFont", "mySimpleFont.ttf", 36);
    myManager->addTexture("button1", "button1.png");
    myManager->addTexture("button2", "button2.png");

    //
    aButton = new SimpleButton(ofVec2f(400, 400),
                myManager->getTexturePointer("unclicked"),
                myManager->getTexturePointer("clicked"),
                myManager->getFontPointer("simpleFont"),
                               "wut");
    myMenu.addEntity(*aButton);//add button to the menu

    myButton = new SimpleButton(ofVec2f(600, 400),
                myManager->getTexturePointer("button1"),
                myManager->getTexturePointer("button2"),
                myManager->getFontPointer("simpleFont"),
                                "swig");
    myMenu.addEntity(*myButton);//add button to the menu




    myManager->addMenu(myMenu, "theMenu");//add menu to the manager

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
