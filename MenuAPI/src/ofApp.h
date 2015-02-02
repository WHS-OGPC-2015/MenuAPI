#pragma once

#include "ofMain.h"
#include "MenuManager.h"
#include "MenuEntity.h"
#include "Menu.h"
#include "SimpleButton.h"
class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);

        enum states {MAIN_MENU, GAME_PLAY, GAME_LOAD};

        MenuManager* myManager;

        ofVec2f mousePos;
        bool pressed;
        bool clicked;
        MenuEntity *aButton;

};
