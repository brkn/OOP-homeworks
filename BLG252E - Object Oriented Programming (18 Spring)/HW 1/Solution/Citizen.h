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
        Citizen(char info[7][30]);
        const Time* getAppTime() const;
		bool getHasApp() const;
		const char* getAppSlot() const;
};
#endif