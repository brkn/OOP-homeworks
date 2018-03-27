#ifndef CivilRegistry_H
#define CivilRegistry_H
#include <list>
#include "Citizen.h"

class CivilRegistry{
	public:
		std::list<Citizen> wApp;
		std::list<Citizen> wOutApp;

        CivilRegistry();
        int insertCitizen(const char[7][30]);
        bool removeCitizen();
};
#endif