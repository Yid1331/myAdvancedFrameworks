#pragma once

#include "ofMain.h"
#include"ofxAssimpModelLoader.h"
#include"ofxGui.h"

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
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);


		void loadVocal();
		int totalVoices;
		vector<ofSoundPlayer> voices;
		ofSoundPlayer voice1, voice2, voice3;

		vector<ofSpherePrimitive> spheres;
		ofEasyCam cam;
		ofLight light;
		ofLight light1;
		int spaceRange;
		ofImage eye;

		ofxAssimpModelLoader model;
		ofSoundPlayer BBC;
		
		bool b_BBC;
		bool b_Sea;
		bool b_Mick;

		//ofImage image;


		
};
