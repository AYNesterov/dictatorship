#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    receive.setup(PORT);
    ofSetFrameRate(60);
    ofBackground(0,0,0);
    
}

//--------------------------------------------------------------
void ofApp::update(){
    while(receive.hasWaitingMessages()) {
        ofxOscMessage m;
        receive.getNextMessage(&m);
        
        if (m.getAddress() == "/gyrosc/gyro") {
            gyro = m.getArgAsFloat(0);
    }
        
        if (m.getAddress() == "/gyrosc/accel") {
            accel = m.getArgAsFloat(0);
        }
        
        if (m.getAddress() == "/gyrosc/rrate") {
            rrate = m.getArgAsFloat(0);
        }
        
        
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
    width = ofGetViewportWidth();
    ofDisableSmoothing();
    ofNoFill();
    ofSetColor(255, 255, 255, 255);
    ofSetLineWidth(2);
    ofDrawCurve(-40, 1+gyro*300, -40, 1, width, 1, width, 1+gyro*600);
    ofDrawCurve(-40, 25+accel*800, -40, 25, width, 25, width, 25-accel*300);
    ofDrawCurve(-40, 45+accel*1500, -40, 45, width, 45, width, 45-accel*1000);
    ofDrawCurve(-40, 65+gyro*400, -40, 65, width, 65, width, 65-gyro*450);
    ofDrawCurve(-40, 85+accel*300, -40, 85, width, 85, width, 85-rrate*800);
    ofDrawCurve(-40, 105+accel*450, -40, 105, width, 105, width, 105+accel*500);
    ofDrawCurve(-40, 125+accel*100, -40, 125, width, 125, width, 125-accel*800);
    ofDrawCurve(-40, 145+gyro*1000, -40, 145, width, 145, width, 145-gyro*600);
    ofDrawCurve((width+165), 165+accel*400, -40, 165, width, 165, (width+40)*0.25, 165-accel*400);
    ofDrawCurve((width+40), 185+accel*1000, -40, 185, width, 185, (width+40)*0.25, 185-rrate*300);
    ofDrawCurve((width+40)*1.25, 205+accel*1000, -40, 205, width, 205, (width+40)*1.75, 205-rrate*1000);
    ofDrawCurve((width+40)*0.5, 225+gyro*450, -40, 225, width, 225, (width+40)*0.5, 225-rrate*400);
    ofDrawCurve((width+40)*0.25, 245+rrate*600, -40, 245, width, 245, (width+40)*0.75, 245-accel*900);
    ofDrawCurve(-40, 265+rrate*900, -40, 265, width, 265, width, 265+gyro*450);
    ofDrawCurve(-40, 285+accel*450, -40, 285, width, 285, width, 285-accel*640);
    ofDrawCurve(-40, 305+accel*1000, -40, 305, width, 305, width, 305-accel*600);
    ofDrawCurve(-40, 325+gyro*700, -40, 325, width, 325, width, 325-gyro*400);
    ofDrawCurve(-40, 345+rrate*1300, -40, 345, width, 345, width, 345-rrate*800);
    ofDrawCurve(-40, 365+accel*800, -40, 365, width, 365, width, 365-accel*400);
    ofDrawCurve(-40, 385+rrate*700, -40, 385, width, 385, width, 385+rrate*300);
    ofDrawCurve(-40, 405+accel*800, -40, 405, width, 405, width, 405+accel*1200);
    ofDrawCurve((width+40), 425+rrate*800, -40, 425, width, 425, (width+40)*0.25, 425-rrate*300);
     ofDrawCurve((width+40)*1.25, 445+rrate*650, -40, 445, width, 445, (width+40)*1.75, 445-rrate*750);
    ofDrawCurve((width+40), 465+accel*950, -40, 465, width, 465, (width+40), 465-rrate*1000);
     ofDrawCurve((width+40)*1.25, 485+rrate*300, -40, 485, width, 485, (width+40)*1.75, 485-rrate*500);
    ofDrawCurve(-40, 505+accel*300, -40, 505, width, 505, width, 505+accel*300);
    ofDrawCurve(-40, 525+rrate*980, -40, 525, width, 525, width, 525+gyro*400);
    ofDrawCurve(-40, 545+rrate*800, -40, 545, width, 545, width, 545-rrate*200);
    ofDrawCurve(-40, 565+accel*700, -40, 565, width, 565, width, 565-accel*1600);
    ofDrawCurve(-40, 585+accel*400, -40, 585, width, 585, width, 585-accel*900);
    ofDrawCurve(-40, 605+accel*300, -40, 605, width, 605, width, 605-gyro*600);
    ofDrawCurve(-40, 625+accel*1500, -40, 625, width, 625, width, 625-accel*300);
    ofDrawCurve(-40, 645+rrate*1000, -40, 645, width, 645, width, 645-rrate*400);
    ofDrawCurve(-40, 665+accel*400, -40, 665, width, 665, width, 665-gyro*1000);
    ofDrawCurve(-40, 685+gyro*700, -40, 685, width, 685, width, 685-rrate*300);
    ofDrawCurve(-40, 705+accel*300, -40, 705, width, 705, width, 705-gyro*450);
    ofDrawCurve((width+40)*0.25, 725+accel*300, -40, 725, width, 725, (width+40)*0.75, 725-rrate*950);
    ofDrawCurve((width+40)*1.25, 745+accel*250, -40, 745, width, 745, (width+40)*1.75, 745-accel*1000);
    ofDrawCurve((width+40)*0.5, 765+gyro*450, -40, 765, width, 765, (width+40)*0.5, 765-accel*300);
    ofDrawCurve((width+40)*-0.25, 785+rrate*800, -40, 785, width, 785, (width+40)*-1.75, 785-gyro*600);
    ofDrawCurve(-40, 805+rrate*450, -40, 805, width, 805, width, 805-accel*900);
    ofDrawCurve(-40, 825+accel*1000, -40, 825, width, 825, width, 825-accel*700);
    ofDrawCurve(-40, 845+gyro*400, -40, 845, width, 845, width, 845-accel*500);
    ofDrawCurve((width+40)*-0.25, 865+rrate*1600, -40, 865, width, 865, (width+40)*0.75, 865-accel*300);
    ofDrawCurve((width+40)*-1.25, 885+accel*250, -40, 885, width, 885, (width+40)*-1.75, 885-rrate*1000);
    ofDrawCurve((width+40)*0.5, 905+rrate*300, -40, 905, width, 905, (width+40)*0.5, 905-gyro*300);
    ofDrawCurve((width+40)*-0.25, 925+accel*300, -40, 925, width, 925, (width+40)*-0.75, 925-rrate*400);
    ofDrawCurve(-40, 945+accel*400, -40, 945, width, 945, width, 945-accel*700);
    ofDrawCurve(-40, 965+gyro*300, -40, 965, width, 965, width, 965-accel*800);
    ofDrawCurve(-40, 985+accel*700, -40, 985, width, 985, width, 985-gyro*1000);
    ofDrawCurve(-40, 1005+accel*900, -40, 1005, width, 3005, width, 1005-gyro*800);
    ofDrawCurve(-40, 1025+gyro*450, -40, 1025, width, 1025, width, 1025-accel*550);
    ofDrawCurve(-40, 1045+rrate*400, -40, 1045, width, 1045, width, 1045+gyro*450);
    ofDrawCurve(-40, 1065+rrate*1000, -40, 1065, width, 1065, width, 1065-accel*400);
    ofDrawCurve(-40, 1085+accel*450, -40, 1085, width, 1085, width, 1085-gyro*500);
    ofDrawCurve(-40, 2005+gyro*700, -40, 2005, width, 2005, width, 2005+accel*600);


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
