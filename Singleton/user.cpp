#include "logger.hpp"
#include<iostream>
#include<thread>

using namespace std;

void user1 (){
    Logger* Logger1 = Logger::getInstance();
    Logger1->Log("hey bro! Logger1");
}

void user2(){
    Logger* Logger2 = Logger::getInstance();
    Logger2->Log("hey bro! Logger2");
}

int main(){
    
    thread t1(user1);
    thread t2(user2);

    t1.join();
    t2.join();
    
    
    return 0;


}