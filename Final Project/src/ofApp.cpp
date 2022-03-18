#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	loadVocal();
	//b_BBC=true;
	b_Sea=false;
	//b_Mick=true;

	model.loadModel("character8.dae");
	model.enableColors();
	model.enableMaterials();
	model.enableTextures();


	int maxSpheres = 10;
	spaceRange = 1000;
	ofEnableDepthTest();
	//ofSetBackgroundColor(ofRandom(200),ofRandom(200),ofRandom(200));
	//ofSetColor(255);
	light.setPosition(600, 600, 600);
	light.enable();
	light1.setPosition(-600, -600, -600);
	light1.enable();

	eye.load("color.jpg");
	eye.getTexture().setTextureWrap(GL_REPEAT, GL_REPEAT);
	for (int i = 0; i < maxSpheres; i++) {
		ofSpherePrimitive newSphere;
		newSphere.set(ofRandom(20, 150), 10);
		newSphere.mapTexCoordsFromTexture(eye.getTexture());
		newSphere.setPosition(ofRandom(-spaceRange, spaceRange),
			                  ofRandom(-spaceRange, spaceRange),
			                  ofRandom(-spaceRange, spaceRange));
		spheres.push_back(newSphere);
	}
	


}

//--------------------------------------------------------------
void ofApp::update(){

	//ofSetBackgroundColor(ofRandom(100), ofRandom(100), ofRandom(100));

	spheres[ofRandom(spheres.size())] .setPosition(ofRandom(-spaceRange-20, spaceRange-20),
		                                           ofRandom(-spaceRange-20, spaceRange-20),
		                                           ofRandom(-spaceRange-20, spaceRange-20));
	glm::vec3 eyeOrientation(ofRandom(360), ofRandom(360), ofRandom(360));
	spheres[ofRandom(spheres.size())].setOrientation(eyeOrientation);


}

//--------------------------------------------------------------
void ofApp::draw(){
	//gui.draw();

	float time = ofGetSystemTimeMillis() / 100.0;
	cam.begin();
	//eye.getTexture().bind();
	ofPushMatrix();
	ofRotateDeg(time);
	for (int i = 0; i < spheres.size(); i++) {
		eye.getTexture().bind();
		spheres[i].draw();
		eye.getTexture().unbind();
	}
	ofPopMatrix();

	model.drawFaces();
	model.drawVertices();

	ofDrawBitmapString("I can do it! \nMick said they are super super easy...", -20, 300);
	cam.end();


	ofDrawBitmapString("Press f:fullscreen", 10, 220);
	ofDrawBitmapString("Press 1: play BBC", 10, 240);
	ofDrawBitmapString("Press 2: play Sea", 10, 260);
	ofDrawBitmapString("Press 3: play Mickmick", 10, 280);
	
	if (b_Sea) {
		ofSetBackgroundColor(ofRandom(255), ofRandom(255), ofRandom(255));
	}
	
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
	switch (key) {
	case 'f':
		ofToggleFullscreen();
		break;
	case OF_KEY_UP:
		spaceRange += 10;
		break;
	case OF_KEY_DOWN:
		spaceRange -= 10;
		break;
	case '1':
		voices[0].play();
		voices[1].stop();
		voices[2].stop();
		ofSetBackgroundColor(0);
		break;
	case '2':
		voices[1].play();
		voices[0].stop();
		voices[2].stop();
		ofSetBackgroundColor(255);
		break;
	case '3':
		voices[2].play();
		voices[1].stop();
		voices[0].stop();
		b_Sea = !b_Sea;
		break;

	default:
		break;
	}
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

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

void ofApp::loadVocal() {
	// load vocal samples
	totalVoices = 3;
	voices.clear();
	for (int i = 0; i < totalVoices; i++) {
		ofSoundPlayer voice;
		string path = "voices/0" + ofToString(i+1) + ".mp3";
		cout << "loading " << path << endl;
		voice.load(path);
		voice.setMultiPlay(true);
		voices.push_back(voice);
	}
}