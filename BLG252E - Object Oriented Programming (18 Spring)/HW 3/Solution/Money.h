#ifndef MONEY_H
#define MONEY_H

using namespace std;

class Money{
	int lira, kurus;
    public:
        Money(int, int);
        ~Money();
        bool operator<(const Money& m2) const; //public? //delete
};
#endif