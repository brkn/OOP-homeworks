#ifndef GENERICARRAY_H
#define GENERICARRAY_H
#include <iostream>
#include <typeinfo>
using namespace std;

template <class t1>
class genericArray{
    int size;
    public:
		t1* elements;
        t1 total;
        genericArray(int givensize);
        ~genericArray();
        t1 sum();
};

template <class t1>
genericArray<t1>::genericArray(int givensize) {
	if (givensize <= 0) throw "size cannot be lower than 1";
	size = givensize;
	elements = new t1[givensize];
}

template <class t1>
genericArray<t1>::~genericArray() {
	delete[] elements;
}

template <class t1>
t1 genericArray<t1>::sum() {
	total = static_cast<t1>(0);
	for (int i = 0; i < size; i++)
		total += elements[i];
	cout << "The total amount for " << typeid(this->elements[0]).name() << " array is: " << total << endl;
	if (total > static_cast<t1>(100)) {
		total += static_cast<t1>(5);
		cout << "You have won 5 points bonus, new total is: " << total << endl;
	}
	if (total < static_cast<t1>(100)) {
		total -= static_cast<t1>(5);
		cout << "You have lost 5 points, new total is: " << total << endl;
	}
	return total;
}
#endif