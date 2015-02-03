#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    myManager = new MenuManager;
    Menu myMenu(ofVec2f(400, 400));
    myManager->addTexture("clicked", "clicked.png");
    myManager->addTexture("unclicked", "notclicked.png");
    myManager->addFont("simpleFont", "mySimpleFont.ttf", 36);
    myManager->addTexture("button1", "button1.png");
    myManager->addTexture("button2", "button2.png");
    aButton = new SimpleButton(ofVec2f(400, 400),
                myManager->getTexturePointer("unclicked"),
                myManager->getTexturePointer("clicked"),
                myManager->getFontPointer("simpleFont"),
                               "wut");

    myMenu.addEntity(*aButton);
    myButton = new SimpleButton(ofVec2f(400, 600),
            myManager->getTexturePointer("button1"),
            myManager->getTexturePointer("button2"));
    myMenu.addEntity(*myButton);
    myManager->addMenu(myMenu, "theMenu");

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
