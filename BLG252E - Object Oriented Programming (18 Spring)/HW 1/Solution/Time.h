#ifndef Time_H
#define Time_H
#include <string>
class Time{
    int minute, hour, day, month, year;
    public:
        Time(char* date, char* entryclock);
        char* getTime();
		int getDate() const;
        bool operator<(const Time& x) const; 
        bool operator>(const Time& x) const;
		bool operator==(const Time& x) const;
};
#endif