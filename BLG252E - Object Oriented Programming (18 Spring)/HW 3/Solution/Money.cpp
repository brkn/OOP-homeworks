#include "Money.h"


Money::Money(int l, int k) {
	if (100 * lira - kurus < 0) throw "The amount of money cannot be below 0";

	lira = l;
	kurus = k;
}

Money::~Money() { //unncessery? //delete

}
 
 
 