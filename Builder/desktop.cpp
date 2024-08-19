#include "desktop.hpp"

#include<iostream>

void Desktop::setKeyboard(string keyboard){
    Keyboard = keyboard;
}

void Desktop::setMonitor(string monitor){
    Monitor = monitor;
}

void Desktop::setMotherBoard(string mB){
    motherBoard = mB;
}

void Desktop::setMouse(string mouse){
    Mouse = mouse;
}

void Desktop::setProcessor(string processor){
    Processor = processor;
}

void Desktop::setRam(string ram){
    RAM = ram;
}

void Desktop::setSpeaker(string speaker){
    Speaker = speaker;
}

void Desktop::showAll(){

    cout<<"Monitor is"<<Monitor<<endl;
    cout<<"Keyboard is"<<Keyboard<<endl;
    cout<<"Mouse is"<<Mouse<<endl;
    cout<<"MotherBoard is"<<motherBoard<<endl;
    cout<<"RAM is"<<RAM<<endl;
    cout<<"Processor is"<<Processor<<endl;
    cout<<"Speaker is"<<Speaker<<endl;

    
}