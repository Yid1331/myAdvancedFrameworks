#include "testApp.h"

testApp::~testApp()
{
    for (int i = 0; i < boids.size(); i++)
    {
        delete boids[i];
    }
    
    
    for (int i = 0; i < newBoids.size(); i++)
    {
        delete newBoids[i];
    }
}

//--------------------------------------------------------------
void testApp::setup(){
    
    
    screenW = ofGetScreenWidth();
    screenH = ofGetScreenHeight();

    ofBackground(0,0,0);
    
    // set up the boids
    for (int i = 0; i < 25; i++)
        boids.push_back(new Boid());
    
    // Polymorphism
    for (int i = 0; i < 25; i++)
        {
        Boid *temp = new baby_boid();
        newBoids.push_back(temp);
        }
    
}


//--------------------------------------------------------------
void testApp::update(){
    
    ofVec3f min(0, 0);
    ofVec3f max(ofGetWidth(), ofGetHeight());
    for (int i = 0; i < boids.size(); i++)
    {
        boids[i]->update(boids, min, max);
    }
    
    // Must update or the boids won't move
    for (int i = 0; i < newBoids.size(); i++)
    {
        newBoids[i]->update(newBoids, min, max);
    }

}

//--------------------------------------------------------------
void testApp::draw(){

    for (int i = 0; i < boids.size(); i++)
    {
        boids[i]->draw();
    }
    
    // Let's draw the new boids!
    for (int i = 0; i < newBoids.size(); i++)
    {
        newBoids[i]->drawnew();
    }

}


//--------------------------------------------------------------
void testApp::keyPressed(int key){
 
}

//--------------------------------------------------------------
void testApp::keyReleased(int key){
    
}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y ){
    
}

//--------------------------------------------------------------
void testApp::mouseDragged(int x, int y, int button){
    
}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button){
    
}

//--------------------------------------------------------------
void testApp::mouseReleased(int x, int y, int button){
    
}

//--------------------------------------------------------------
void testApp::windowResized(int w, int h){
    
}
