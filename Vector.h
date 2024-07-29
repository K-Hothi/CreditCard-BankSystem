#ifndef VECTOR_H
#define VECTOR_H

#include <iostream>
using namespace std;

class Vector{
    private:
        int* arr;
        int length;
    public:
        int insert(int data);
        int remove(int data);
        
};

#endif