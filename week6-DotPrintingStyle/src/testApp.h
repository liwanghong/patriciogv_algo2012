#pragma once

#include "ofMain.h"

#include "ofxFX.h"

#include "vectorField.h"
#include "particle.h"

class testApp : public ofBaseApp{
public:
    void setup();
    void update();
    void draw();

    void keyPressed  (int key);
    void keyReleased(int key);
    void mouseMoved(int x, int y );
    void mouseDragged(int x, int y, int button);
    void mousePressed(int x, int y, int button);
    void mouseReleased(int x, int y, int button);
    void windowResized(int w, int h);
    void dragEvent(ofDragInfo dragInfo);
    void gotMessage(ofMessage msg);
		
    ofVideoGrabber  video;
    
    ofPixels brightPixels;
    
    ofxGrayscale    grayscale;
    ofxGaussianBlur blur;
    ofxNormals      normals;
    
    vector<Particle> particles;
    vectorField     VF;
    
    float   prevMouseX;
    float   prevMouseY;
    
    int     width, height,scale;
    
    bool    bDrawField;
};
