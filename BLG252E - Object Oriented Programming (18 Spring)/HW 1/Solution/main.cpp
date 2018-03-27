#include <iostream>
#include <fstream>
#include <cstdlib>

#include "CivilRegistry.h"
#include "Time.h"
#include "Citizen.h"

using namespace std;

void sortWApps() {
	registry.wApp.sort();

}
void sortWoutApps() {
	registry.wOutApp.sort();
}

int printOutput(int sw) {
	if (sw == 1) { //print to a text file
		ofstream fs;
		fs.open("output.txt");
		if (!fs.is_open()) return -2; //cant open error
		fs << "idNo/tName/tSurname/thasApp/tappDate/tappSlot/t/tentryClock" << endl;
		cout << "idNo/tName/tSurname/thasApp/tappDate/tappSlot/t/tentryClock" << endl; //delete this
		//iterator here
		//for(itr = ) {

		//}
		//iterator = other list
		//for(itr = ) {

		//}
	}
	else{
		cout << "idNo/tName/tSurname/thasApp/tappDate/tappSlot/t/tentryClock" << endl;
	}
}

CivilRegistry registry;

int main(int argc, const char * argv[]) {
	ifstream fs;
	fs.open("input.txt");
	if (!fs.is_open()) return -2; //cant open error

	char info[7][30];
	for (int i = 0; i < 7; i++) fs >> info[0]; //skip first line
	
	while (!fs.eof()) { //file line loop
		fs >> info[0];
		if (info[0] == "/n" || info[0] == " " || info[0] == "/t") continue;
		for (int i = 1; i < 7; i++) fs >> info[i]; //reads 1 line
		registry.insertCitizen(info);
		//delete this //check if it ends correctly 
	}
	//move the upper to a "readfile()" function //delete this 
	sortWApps(); //check if correct
	sortWoutApps();
	printOutput(1);

	//close file pointers //delete this 
	//check if deconstructers work//delete this 
    return 0;
}