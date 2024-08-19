#include "DesktopDirector.hpp"
#include "dellDesktop.hpp"
#include "hpDesktop.hpp"

#include<iostream>
#include<string>

using namespace std;

int main(){
    DellDesktop* dell = new DellDesktop();
    DesktopDirector* DellDirector= new DesktopDirector(dell);

    HPDesktop* hp = new HPDesktop();
    DesktopDirector* HPDirector= new DesktopDirector(hp);

    Desktop* DellDesktop = DellDirector->BuildDesktop();
    Desktop* HPDesktop = HPDirector->BuildDesktop();

    DellDesktop->showAll();
    HPDesktop->showAll();
  


    return 0;
}