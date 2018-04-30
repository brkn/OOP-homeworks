#ifndef MONEY_H
#define MONEY_H

class Money{
    int lira, kurus;
    public:
        bool operator<(const Money& m2) const; //public? //delete
};
#endif