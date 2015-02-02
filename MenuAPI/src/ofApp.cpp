#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    myManager = new MenuManager;
    Menu myMenu(ofVec2f(400, 400));
    myManager->addTexture("clicked", "clicked.png");
    myManager->addTexture("unclicked", "notclicked.png");
    myManager->addFont("simpleFont", "mySimpleFont.ttf", 36);
    aButton = new SimpleButton(ofVec2f(400, 400),
                         myManager->getTexturePointer("unclicked"),
                         myManager->getTexturePointer("clicked"),
                         myManager->getFontPointer("simpleFont"));
    myMenu.addEntity(aButton);
    myManager->addMenu(myMenu, "theMenu");
}

//--------------------------------------------------------------
void ofApp::update(){
    myManager->update(mousePos, clicked);
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
    clicked = true;
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){
    clicked = false;
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
