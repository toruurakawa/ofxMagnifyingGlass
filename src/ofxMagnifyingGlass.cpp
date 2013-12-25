//
//  ofxMagnifyingGlass.cpp
//
//  Created by TORU URAKAWA on 2013/12/25.
//
//

#include "ofxMagnifyingGlass.h"

void ofxMagnifyingGlass::setup(float s, float m){
    size = s;
    magnificationRate = m;
    
    fbo.allocate(size / magnificationRate, size / magnificationRate);
    fbo.begin();
    ofClear(255,255,255, 0);
    fbo.end();
    
    preFbo.allocate(ofGetWidth(), ofGetHeight());
    preFbo.begin();
    ofClear(255,255,255, 0);
    preFbo.end();
    
}

void ofxMagnifyingGlass::begin(){
    ofPushStyle();
    preFbo.begin();
}

void ofxMagnifyingGlass::end(){
    preFbo.end();
    ofPopStyle();
    
    preFbo.draw(0, 0);
    
    if (bDrawGlass) {
        fbo.begin();
        ofPushMatrix();
        ofTranslate(-centerPos.x + size / magnificationRate / 2., -centerPos.y + size / magnificationRate / 2.);
        preFbo.draw(0, 0);
        ofPopMatrix();
        fbo.end();
        
        fbo.draw(centerPos.x - size / 2., centerPos.y - size / 2., size, size);
    }

}

void ofxMagnifyingGlass::setDrawGlass(bool b){
    bDrawGlass = b;
}

void ofxMagnifyingGlass::setCenterPos(ofVec2f p){
    centerPos = p;
}