#ifndef desktop_h
#define desktop_h

#include<string>
using namespace std;
class Desktop{
    string Monitor;
    string Mouse;
    string Keyboard;
    string RAM;
    string Processor;
    string motherBoard;
    string Speaker;

    public:
        void setMonitor(string monitor);
        void setMouse(string mouse);
        void setKeyboard(string keyboard);
        void setRam(string ram);
        void setProcessor(string processor);
        void setMotherBoard(string mB);
        void setSpeaker(string speaker);
        void showAll();


};

#endif