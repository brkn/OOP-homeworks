#include "Grayling.h"
#include <iostream>

using namespace std;
//static members
const double Grayling1::mpi_rate = 30;
const double Grayling2::mpi_rate = 40;
const double Grayling3::mpi_rate = 50;
const double Grayling1::m_at = 60;
const double Grayling2::m_at = 80;
const double Grayling3::m_at = 100;

//default consturctor
Grayling::Grayling() {
	isalive = false;
}
Grayling1::Grayling1():Grayling() {
}
Grayling2::Grayling2():Grayling() {
}
Grayling3::Grayling3():Grayling() {
}
//constructor
Grayling::Grayling(char c, string s) {
	this->age =0;
	this->name = s;
	this->gender = c;
	this->isalive = true;
	this->ismutant = false;

	this->mp = 0;
}
Grayling1::Grayling1(char c, string s): Grayling(c,s){
	this->current_variation = "Grayling1"; 
}
Grayling2::Grayling2(char c, string s) : Grayling(c, s) {
	this->current_variation = "Grayling2";
}
Grayling3::Grayling3(char c, string s) : Grayling(c, s) {
	this->current_variation = "Grayling3";
}
//copy constructors
Grayling::Grayling(const Grayling& given_grayling) {
	this->age = given_grayling.age;
	this->isalive = given_grayling.isalive;
	this->ismutant = given_grayling.ismutant;
	this->current_variation = given_grayling.current_variation;
	this->mp = given_grayling.mp;
}
Grayling1::Grayling1(const Grayling1& given_grayling, char g, string n): Grayling(given_grayling){
	name = n;
	gender = g;
}
Grayling2::Grayling2(const Grayling2& given_grayling, char g, string n) : Grayling(given_grayling) {
	name = n;
	gender = g;
}
Grayling3::Grayling3(const Grayling3& given_grayling, char g, string n) : Grayling(given_grayling) {
	name = n;
	gender = g;
}
//print
void Grayling1::print() const {
	cout << this->current_variation <<" -> Age: " << this->age << " Name: " << this->name << " G:" << this->gender;
	cout << " MPI: " << this->mpi_rate << " MP: " << this->mp << " Mutate at: " << this->m_at <<"\n";
}
void Grayling2::print() const {
	cout << this->current_variation << " -> Age: " << this->age << " Name: " << this->name << " G:" << this->gender;
	cout << " MPI: " << this->mpi_rate << " MP: " << this->mp << " Mutate at: " << this->m_at << "\n";
}
void Grayling3::print() const {
	cout << this->current_variation << " -> Age: " << this->age << " Name: " << this->name << " G:" << this->gender;
	cout << " MPI: " << this->mpi_rate << " MP: " << this->mp << " Mutate at: " << this->m_at << "\n";
}
//give birth
void Grayling1::givebirth(){
	if (!this->isalive) {
		cout << "Trying to GIVE BIRTH BUT " << this->name << " is not alive and No ability to give birth!\n";
		return;
	}
	if (this->gender == 'm') {
		cout << this->name << " Can not give birth because of gender being male!\n";
		return;
	}
	cout << this->name << " gave birth to 2 offsprings!\n";
}
void Grayling2::givebirth() {
	if (!this->isalive) {
		cout << "Trying to GIVE BIRTH BUT " << this->name << " is not alive and No ability to give birth!\n";
		return;
	}
	if (this->gender == 'm') {
		cout << this->name << " Can not give birth because of gender being male!\n";
		return;
	}
	if (this->ismutant) {
		cout << this->name << " died when trying to reproduce\n";
		this->isalive = false;
	}
	else
		cout << this->name << " gave birth to 1 offsprings!\n";
}
void Grayling3::givebirth() {
	if (!this->isalive) {
		cout << "Trying to GIVE BIRTH BUT " << this->name << " is not alive and No ability to give birth!\n";
		return;
	}
	if (this->gender == 'm') {
		cout << this->name << " Can not give birth because of gender being male!\n";
		return;
	}
	cout << this->name << " died when trying to reproduce\n";
	this->isalive = false;
}
//aging
void Grayling1::aging(){
	if (!this->isalive) {
		cout << "Trying to AGING BUT " << this->name << " is not alive.\n";
		return;
	}
	this->age++;
	if (this->ismutant) {
		this->mp += this->mpi_rate + 10;
		cout << "Aging: name: " << this->name << " -> " << this->current_variation
			<< " Age: " << this->age << " MPI: " << this->mpi_rate+10 << " MP: " << this->mp << " \n";
	}
	else {
		this->mp += this->mpi_rate;
		cout << "Aging: name: " << this->name << " -> " << this->current_variation
			<< " Age: " << this->age << " MPI: " << this->mpi_rate << " MP: " << this->mp << " \n";
	}
	if (this->ismutant) {
		if (this->age == 4) {
			this->isalive = false;
			cout << this->name << " is dead bacuse of AGING!\n";
		}
		//this->mp = this->mpi_rate + 10;
		if (this->mp == (this->m_at + 20)) {
			this->current_variation = "Grayling3";
			this->mp = 0;
		}
	}
	else {
		if (this->age == 5) {
			this->isalive = false;
			cout << this->name << " is dead bacuse of AGING!\n";
		}
		//this->mp += this->mpi_rate;
		if (this->mp == this->m_at) {
			this->ismutant = true;
			this->current_variation = "Grayling2";
			this->mp = 0;
			cout << "Mutated TO: " << this->current_variation << "\n";
		}
	}
}
void Grayling2::aging() {
	if (!this->isalive) {
		cout << "Trying to AGING BUT " << this->name << " is not alive.\n";
		return;
	}
	this->age++;
	if (this->ismutant) {
		this->mp += this->mpi_rate + 10;
		cout << "Aging: name: " << this->name << " -> " << this->current_variation
			<< " Age: " << this->age << " MPI: " << this->mpi_rate + 10 << " MP: " << this->mp << " \n";
	}
	else {
		this->mp += this->mpi_rate;
		cout << "Aging: name: " << this->name << " -> " << this->current_variation
			<< " Age: " << this->age << " MPI: " << this->mpi_rate << " MP: " << this->mp << " \n";
	}
	if (this->ismutant) {
		if (this->age == 3) {
			this->isalive = false;
			cout << this->name << " is dead bacuse of AGING!\n";
		}
		//this->mp = this->mpi_rate + 10;
		if (this->mp == 100) {
			this->isalive = false;
			cout << this->name << " is dead because of HIGH MUTATION RATE!\n";
		}
	}
	else {
		if (this->age == 4) {
			this->isalive = false;
			cout << this->name << " is dead bacuse of AGING!\n";
		}
		//this->mp += this->mpi_rate;
		if (this->mp == this->m_at) {
			this->ismutant = true;
			this->current_variation = "Grayling3";
			this->mp = 0;
			cout << "Mutated TO: " << this->current_variation << "\n";
		}
	}
}
void Grayling3::aging() {
	if (!this->isalive) {
		cout << "Trying to AGING BUT " << this->name << " is not alive.\n";
		return;
	}
	this->age++;
	this->mp += this->mpi_rate;
	cout << "Aging: name: " << this->name << " -> " << this->current_variation
		<< " Age: " << this->age << " MPI: " << this->mpi_rate << " MP: " << this->mp << " \n";
	if (this->age == 3) {
		this->isalive = false;
		cout << this->name << " is dead bacuse of AGING!\n";
	}
	if (this->mp == this->m_at) {
		this->isalive = false;
		cout << this->name << " is dead because of HIGH MUTATION RATE!\n";
	}
}