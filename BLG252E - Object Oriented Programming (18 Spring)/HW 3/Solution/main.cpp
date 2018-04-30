#include <iostream>
#include "GenericArray.h"
#include "Money.h" //? //delete

using namespace std;

int main() {
	
	genericArray<int> m1(5);
	genericArray<double> m2(5);
	genericArray<Money> m3(5);

	Money d(-1, 89);
	Money a(10, 5);
	Money b(10, 5);
	Money c(43, 7);
	Money k(50, 6);
	Money m(10, 20);
	Money bonus(5, 0);

	m3.elements[0] =a;
	m3.elements[1] =b;
	m3.elements[2] =c;
	m3.elements[3] =k;
	m3.elements[4] =m;

	m2.elements[0] =12,5;
	m2.elements[1] =11,6;
	m2.elements[2] =13,9;
	m2.elements[3] =23,7;
	m2.elements[4] =130,7;

	m1.elements[0] =1;
	m1.elements[1] =2;
	m1.elements[2] =5;
	m1.elements[3] =9;
	m1.elements[4] =90;
	
	m3.total = m3.sum();
	m3.total = m3.sum();
	m3.total = m3.sum();
	return 0; 
} 
 
 
 
 
 