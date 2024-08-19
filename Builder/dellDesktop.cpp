#include "dellDesktop.hpp"

#include<iostream>
#include<string>

void DellDesktop::buildMonitor(){
    desktop->setMonitor("Dell");
}

void DellDesktop::buildKeyBoard(){
    desktop->setKeyboard("Dell");
}

void DellDesktop::buildMouse(){
    desktop->setMouse("Dell");
}

void DellDesktop::buildRAM(){
    desktop->setRam("Dell");
}

void DellDesktop::buildProcessor(){
    desktop->setProcessor("Dell");
}
void DellDesktop::buildMotherBoard(){
    desktop->setMotherBoard("Dell");
}

void DellDesktop::buildSpeaker(){
    desktop->setSpeaker("Dell");
}