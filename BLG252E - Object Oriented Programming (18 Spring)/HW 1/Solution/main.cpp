#include <iostream>
#include <fstream>
#include <cstdlib>

#include "CivilRegistry.h"
#include "Time.h"
#include "Citizen.h"

using namespace std;

CivilRegistry registry;
list<Citizen> temp;

void sortWApps() {

}
void sortWoutApps() {

}

int printOutput() {
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

bool readFileAndInsertAll(const char* filename) {
	ifstream fs;
	fs.open(filename);
	if (!fs.is_open()) return false; //cant open error

	char info[7][30];
	for (int i = 0; i < 7; i++) fs >> info[0]; //skip first line
	
	while (!fs.eof()) { //file line loop
		fs >> info[0];
		if (info[0] == "/n" || info[0] == " " || info[0] == "/t") continue;
		for (int i = 1; i < 7; i++) fs >> info[i]; //reads 1 line
		Citizen ct(info);
		registry.insertCitizen(ct);
		
		//check if it ends correctly //delete this 
	}
	fs.close();
	return true;
}

int main(int argc, const char * argv[]) {
	if (!readFileAndInsertAll("input.txt")) //reads file
		return -2; //cant open error
	sortWApps(); //check if correct //delete this 
	sortWoutApps();
	printOutput();

	//close file pointers //delete this 
	//check if deconstructers work//delete this 
    return 0;
}