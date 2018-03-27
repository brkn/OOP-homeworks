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
        Citizen();
        void getAppTime();
};
#endif