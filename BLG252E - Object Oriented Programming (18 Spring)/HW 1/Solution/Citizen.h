#ifndef Citizen_H
#define Citizen_H
#include "Time.h"
class Citizen{
    char* idNo;
    char* name;
    char* surname;
    bool hasApp;
    Time* appTime;
    char* appSlot;
    public:
		/*bool operator<(const Citizen& x) const;
		bool operator>(const Citizen& x) const;
		bool operator==(const Citizen& x) const;*/
        Citizen(char info[7][30]);
        const Time* getAppTime();
		bool getHasApp();
};
#endif