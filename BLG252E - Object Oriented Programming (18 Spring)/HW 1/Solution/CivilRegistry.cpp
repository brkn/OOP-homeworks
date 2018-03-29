#include "CivilRegistry.h"

CivilRegistry::CivilRegistry(){
}

void CivilRegistry::insertCitizen(Citizen Kane) {
	if (Kane.getHasApp()) {
		this->wApp.push_back(Kane);
	}
	else {
		this->wOutApp.push_back(Kane);
	}
}
