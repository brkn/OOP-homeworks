#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string.h>

#include "CivilRegistry.h"
#include "Time.h"
#include "Citizen.h"

using namespace std;

CivilRegistry registry;


void sortWApps() {
	registry.wApp.sort([](const Citizen& first, const Citizen& second)
		{
		if (first.getAppTime()->getDate() != second.getAppTime()->getDate())
			return (first.getAppTime()->getDate() < second.getAppTime()->getDate());
		int comp = strcmp(first.getAppSlot(), second.getAppSlot());
		if (comp) {
			if (comp < 0) return true;
			else return false;
		}
		else
			return (*first.getAppTime() < *second.getAppTime());
		}
		);
}
void sortWoutApps() {
	registry.wOutApp.sort([](const Citizen& first, const Citizen& second)
	{
		return (*first.getAppTime() < *second.getAppTime());
	}
	);
}

bool printOutput() { 
	ofstream fs;
	fs.open("output.txt");
	if (!fs.is_open()) return false; //cant open error

	list<Citizen>::iterator itr;
	fs << "Citizens with appointment:" << endl;
	cout << "Citizens with appointment:" << endl;
	for (itr = registry.wApp.begin(); itr != registry.wApp.end(); itr++) {
		fs << itr->getName() << endl;
		cout << itr->getName() << endl;
	}
	fs << "Citizens without an appointment:" << endl;
	cout << "Citizens without an appointment:" << endl;
	for (itr = registry.wOutApp.begin(); itr != registry.wOutApp.end(); itr++) {
		fs << itr->getName() << endl;
		cout << itr->getName() << endl;
	}
	fs.close();
	return true;
}

bool readFileAndInsertAll(const char* filename) {
	ifstream fs;
	fs.open(filename);
	if (!fs.is_open()) return false; //cant open error

	char info[7][30];
	for (int i = 0; i < 7; i++) fs >> info[0]; //skip first line
	
	while (!fs.eof()) { //file line loop
		fs >> info[0];
		if (info[0] == "\n" || info[0] == " " || info[0] == "\t") continue;
		for (int i = 1; i < 7; i++) fs >> info[i]; //reads 1 line
		Citizen ct(info);
		registry.insertCitizen(ct);
	}
	fs.close();
	return true;
}

void freeMemory() {
	registry.wApp.clear();
	registry.wOutApp.clear();
}

int main(int argc, const char * argv[]) {
	if (!readFileAndInsertAll("input.txt")) //reads file and inserts to both lists unsorted
		return -2; //cant open error
	sortWApps(); //sorts wApp list
	sortWoutApps();//sorts woutApp list 
	printOutput(); //prints output both console and output.txt
	freeMemory();
    return 0;
}