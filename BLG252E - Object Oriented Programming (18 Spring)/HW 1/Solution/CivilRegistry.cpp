#include "CivilRegistry.h"

CivilRegistry::CivilRegistry(){

}

int CivilRegistry::insertCitizen(Citizen Kane) {
	if (Kane.getHasApp()) {
		this->wApp.push_back(Kane);
	}
	else {
		this->wOutApp.push_back(Kane);
	}
	return 0; //not sure if necessery //delete this
}
