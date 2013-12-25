//
//  ofxMagnifyingGlass.h
//
//  Created by TORU URAKAWA on 2013/12/25.
//

#include "ofMain.h"

class ofxMagnifyingGlass {
protected:
    ofFbo fbo;
    ofFbo preFbo;
    float size;
    ofVec2f centerPos;
    float magnificationRate;
    bool bDrawGlass;
    
public:
    void setup(float, float);
    void begin();
    void end();
    void setDrawGlass(bool);
    void setCenterPos(ofVec2f);
};
