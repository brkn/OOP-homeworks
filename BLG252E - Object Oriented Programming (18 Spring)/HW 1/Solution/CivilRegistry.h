#ifndef CivilRegistry_H
#define CivilRegistry_H
#include <list>
#include "Citizen.h"

class CivilRegistry{
	public:
		std::list<Citizen> wApp;
		std::list<Citizen> wOutApp;

        CivilRegistry();
        void insertCitizen(Citizen);
        Citizen removeCitizen();
};
#endif