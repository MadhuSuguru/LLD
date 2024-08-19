#ifndef DesktopDirector_H
#define DesktopDirector_H
#include "desktopbuilder.hpp"
class DesktopDirector{
    private:
        DesktopBuilder *desktopBuilder;
    public:
        DesktopDirector(DesktopBuilder *pdesktopBuilder){
            desktopBuilder = pdesktopBuilder;
        }
        Desktop *getDesktop(){
            return desktopBuilder->getDesktop();
        }

        Desktop* BuildDesktop(){
            desktopBuilder->buildKeyBoard();
            desktopBuilder->buildMonitor();
            desktopBuilder->buildMotherBoard();
            desktopBuilder->buildMouse();
            desktopBuilder->buildRAM();
            desktopBuilder->buildProcessor();
            desktopBuilder->buildSpeaker();
            return getDesktop();
        }
};

#endif