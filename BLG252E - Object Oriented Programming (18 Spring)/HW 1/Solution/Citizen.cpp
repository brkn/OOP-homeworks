#include "Citizen.h"
#include <string.h>

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
	//this->appTime = new Time;
	this->appTime = new Time(info[4], info[6]);
}

const Time* Citizen::getAppTime() const{
	return this->appTime;
	
}
bool Citizen::getHasApp() const{
	return this->hasApp;
}
const char* Citizen::getAppSlot() const{
	return this->appSlot;
}
const char* Citizen::getName() const {
	return this->name;
}

std::string Citizen::getInfos() const {
	std::string str(this->idNo);
	str += "\t";
	str += this->name;
	str += "\t";
	str += this->surname;
	str += "\t";
	if (this->hasApp) str += "TRUE";
	else str += "FALSE";
	str += "\t";
	int x = this->appTime->getDate();
	int y = x % 100;
	if (y < 10) str += '0';
	str += std::to_string(y);
	str += "-";
	x = x / 100;
	y = x % 100;
	if (y < 10) str += '0';
	str += std::to_string(y);
	str += "-";
	x = x /100;
	y = x % 100;
	if (y < 10) str += '0';
	str += std::to_string(y);
	str += "\t";
	str += this->appSlot;
	str += "\t";
	str += this->appTime->getTime();
	return str;
}