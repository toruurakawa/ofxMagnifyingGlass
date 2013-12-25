#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
    img.loadImage("img.JPG");
    mg.setup(300, 3);
}

//--------------------------------------------------------------
void testApp::update(){

}

//--------------------------------------------------------------
void testApp::draw(){
    mg.begin();
    img.draw(0, 0);
    ofSetColor(0, 255, 0);
    ofDrawBitmapString("press any key to show a magnifying glass", ofVec2f(50, 25));
    mg.end();
}

//--------------------------------------------------------------
void testApp::keyPressed(int key){
    mg.setDrawGlass(true);
}

//--------------------------------------------------------------
void testApp::keyReleased(int key){
    mg.setDrawGlass(false);
}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y ){
    mg.setCenterPos(ofVec2f(x, y));
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

//--------------------------------------------------------------
void testApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void testApp::dragEvent(ofDragInfo dragInfo){ 

}
