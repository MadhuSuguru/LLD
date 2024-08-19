#ifndef logger_h
#define logger_h

#include<string>
#include<mutex>

using namespace std;
class Logger{
    Logger();
    Logger(const Logger&);
    Logger operator = (const Logger &);
    static Logger* inst ;
    static mutex mtx;
    public:
        static Logger *getInstance();
        void Log(std::string message);
};

#endif