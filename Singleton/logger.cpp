#include "logger.hpp"
#include<iostream>

Logger* Logger::inst = nullptr;
mutex Logger::mtx; 

Logger::Logger(){
    cout<<"New Logger instance created\n";
}

Logger* Logger::getInstance(){
    if(inst == nullptr){
        mtx.lock();

        if(inst == nullptr){
            inst = new Logger();
        }

        mtx.unlock();
    }
    return inst;
}

void Logger::Log(string message){
    cout<<"New logger message "<<message<<endl;
}