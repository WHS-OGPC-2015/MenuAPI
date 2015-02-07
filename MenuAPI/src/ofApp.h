#pragma once

#include "ofMain.h"
#include "MenuInclude.h"

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

        //manages all textures and fonts for buttons in addition to menu activity
        MenuManager* myManager;

        ofVec2f mousePos;
        bool pressed;//true if mouse button has been pressed down
        bool clicked;//true if mouse button has been pushed down then released



};
