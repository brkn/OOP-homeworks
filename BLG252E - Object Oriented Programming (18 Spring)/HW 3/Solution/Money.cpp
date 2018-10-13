#include "Money.h"


Money::Money(int l, int k) {
	if (100 * l - k < 0) throw "The amount of money can not be below zero!";
	lira = l + k / 100;
	kurus = k % 100;
}

bool Money::operator>(const Money& m2) const {
	return ((this->lira * 100 + this->kurus) > (m2.lira * 100 + m2.kurus));
}
bool Money::operator<(const Money& m2) const {
	return ((this->lira * 100 + this->kurus) < (m2.lira * 100 + m2.kurus));
}

Money& Money::operator+=(const Money& m2) {
	this->lira += m2.lira;
	this->kurus += m2.kurus;
	this->lira += this->kurus / 100;
	this->kurus = this->kurus % 100;
	return *this;
}

Money& Money::operator-=(const Money& m2) {
	this->lira--;
	this->kurus += 100;
	this->lira -= m2.lira;
	this->kurus -= m2.kurus;
	this->lira += this->kurus / 100;
	this->kurus = this->kurus % 100;
	return *this;
}
 
 