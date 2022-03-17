#ifndef _TEST_APP
#define _TEST_APP


#include "ofMain.h"
#include <vector>
#include "boid.h"
#include "baby_boid.hpp"

class testApp : public ofBaseApp{
    
public:
    ~testApp();
    
    virtual void setup();
    virtual void update();
    virtual void draw();
    
    virtual void keyPressed(int key);
    virtual void keyReleased(int key);
    virtual void mouseMoved(int x, int y );
    virtual void mouseDragged(int x, int y, int button);
    virtual void mousePressed(int x, int y, int button);
    virtual void mouseReleased(int x, int y, int button);
    virtual void windowResized(int w, int h);
    
    int screenW;
    int screenH;

    std::vector<Boid *> boids;
    std::vector<Boid *> newBoids; // Declaring 2nd dynamic vector array

};

#endif    
