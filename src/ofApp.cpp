#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(200,200,200);
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    float w = (ofGetWidth()-20) / 24;
    float h = (ofGetHeight()-20) / 24;
    
    ofSeedRandom(mouseX* 8934);
//    cout << mouseX << endl;
    
    for (int i = 10; i < ofGetWidth()-30; i = i + w) {
        for (int g = 10; g < ofGetHeight()-30; g = g + h) {
            int x = ofRandom(4);
            
            ofSetColor(0);
            
            if (x == 0) {
                ofSetLineWidth(8);
                ofDrawLine(i - 2, g - 2, i + w + 2, g + h + 2); // \
                }
                
            }
            
            if (x == 1) {
                ofSetLineWidth(8);
                ofDrawLine(i - 2, g + h + 2, i + w + 2, g - 2); // /
            }
            
            if (x == 2) {
                ofSetLineWidth(7);
               // ofDrawLine(i + 0.5 * w, g - 2, i + 0.5 * w, g + h + 2);
                ofDrawLine(i + 0.5 * w, g, i + 0.5 * w, g + h);// |
            }
            
            if (x == 3) {
                ofSetLineWidth(7);
                //ofDrawLine(i - 2, g + 0.5 * h, i + w + 2, g + 0.5 * h);
                ofDrawLine(i, g + 0.5 * h, i + w, g + 0.5 * h);// —
            }
            
        }
    }
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

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
