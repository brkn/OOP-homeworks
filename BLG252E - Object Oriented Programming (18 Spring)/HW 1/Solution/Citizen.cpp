#include "Citizen.h"

Citizen::Citizen(char info[7][30]) {
	this->idNo = new char[sizeof(info[0])];
	strcpy(this->idNo , info[0]);

	this->name = new char[sizeof(info[1])];
	strcpy(this->name, info[1]);

	this->surname = new char[sizeof(info[2])];
	strcpy(this->surname, info[2]);
	
	if (!strcmp(info[3], "TRUE")) {
		this->hasApp = true;
		this->appSlot = new char[sizeof(info[5])];
		strcpy(this->appSlot, info[5]);
	}
	else {
		this->hasApp = false;
	}
	this->appTime = &Time(info[4], info[6]);
}

const Time* Citizen::getAppTime(){
	return this->appTime;
}
bool Citizen::getHasApp() {
	return this->hasApp;
}
/*
bool Citizen::operator<(const Citizen& x) const{
	return this->appTime < x.appTime;
}
bool Citizen::operator>(const Citizen& x) const {
	return this->appTime > x.appTime;
}
bool Citizen::operator==(const Citizen& x) const {
	return this->appTime == x.appTime;
}*/