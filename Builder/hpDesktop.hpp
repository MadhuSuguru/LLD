#ifndef hpDesktop_H
#define hpDesktop_H

#include "desktopbuilder.hpp"

class HPDesktop : public DesktopBuilder{
    
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