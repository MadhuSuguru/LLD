#include "hpDesktop.hpp"

#include<iostream>
#include<string>

void HPDesktop::buildMonitor(){
    desktop->setMonitor("HP");
}

void HPDesktop::buildKeyBoard(){
    desktop->setKeyboard("HP");
}

void HPDesktop::buildMouse(){
    desktop->setMouse("HP");
}

void HPDesktop::buildRAM(){
    desktop->setRam("HP");
}

void HPDesktop::buildProcessor(){
    desktop->setProcessor("HP");
}
void HPDesktop::buildMotherBoard(){
    desktop->setMotherBoard("HP");
}

void HPDesktop::buildSpeaker(){
    desktop->setSpeaker("HP");
}