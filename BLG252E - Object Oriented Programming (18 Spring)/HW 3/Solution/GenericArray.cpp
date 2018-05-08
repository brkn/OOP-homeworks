#include "GenericArray.h"

template <class t1>
genericArray<t1>::genericArray(int givensize) {
	if (size <= 0) throw "size cannot be lower than 1";
	size = givensize;
	elements = new t1[givensize];
}

template <class t1>
genericArray<t1>::~genericArray(){
	delete[] elements;
}

template <class t1>
t1 genericArray<t1>::sum() {
	total = static_cast<t1>(0);
	for (int i = 0; i < size; i++)
		total += elements[i];
	if total > static_cast<t1>(100)
		std::cout << "You have won 5 points bonus, new total is: " << total << endl;
		total += static_cast<t1>(5);
	return total;
}