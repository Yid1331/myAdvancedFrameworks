//
//  baby_boid.hpp
//  ArtificialLife_Boids
//
//  Created by Sally Mallat on 01/02/2022.
//

#ifndef baby_boid_hpp
#define baby_boid_hpp

#include <stdio.h>
#include <vector>
#include "ofMain.h"
#include "boid.h"

// Make the pointer array static and const
// in the parent class.

class baby_boid : public Boid {
    
public:
    
    //ofVec3f newPos = getPosition();
    //ofVec3f newVel = getVelocity();
        
    //void draw();
        //Added "virtual" to void draw in boid.h to override in derived class
        //Adding "virtual" froze the newBoids
        //Removing "virtual" allows newBoids to move..
        //Why? draw and update functions are separate?
    
    
    //ofVec3f ptrSeparation = getSeparation();
        //Encapsulation then dereferencing
        //Can't use the memory address of separation with dereferencing?
        //Error: Reference to non-static member function must be called
};

#endif /* baby_boid_hpp */
