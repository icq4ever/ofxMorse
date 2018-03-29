#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    ofxMorse Morse;
    string myWord = "I have two guns, one for each of ya.";
    
    string encodedString = Morse.encode( myWord );
    string decodedString = Morse.decode( encodedString );
        
    cout << "Encoding '" << myWord << "': " << endl << encodedString << endl << endl;
    cout << "Decoding '" << encodedString << "': " << endl << decodedString << endl;

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

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
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}