#ifndef Time_H
#define Time_H
#include <string>
class Time{
    int minute, hour, day, month, year;
    public:
        Time(int,int,int,int,int); 
        std::string getTime(); 
        bool operator<(Time); 
        bool operator>(Time);
        bool operator==(Time);
};
#endif