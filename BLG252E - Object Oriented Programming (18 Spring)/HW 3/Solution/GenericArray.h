#ifndef GENERICARRAY_H
#define GENERICARRAY_H

#define MAX 100;

using namespace std;

template <class t1>
class genericArray{
    t1 array[MAX];
    int size;
    public:
        t1 total;
        genericArray();
        t1 sum();
};
#endif