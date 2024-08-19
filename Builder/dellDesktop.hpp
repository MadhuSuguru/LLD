#ifndef dellDesktop_H
#define dellDesktop_H

#include "desktopbuilder.hpp"

class DellDesktop : public DesktopBuilder{
    
    public:
        void buildMonitor();
        void buildKeyBoard();
        void buildMouse();
        void buildRAM();
        void buildProcessor();
        void buildSpeaker();
        void buildMotherBoard();
};

#endif