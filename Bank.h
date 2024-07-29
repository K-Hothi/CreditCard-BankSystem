#ifndef BANK_H
#define BANK_H

#include <iostream>
#include "Vector.h"
#include "Account.cpp"

using namespace std;

class Bank{
    private:
        string bankName;
        int* accountNumbers;
        Vector<Account> accounts;
    public:
        void createAccount();
};

#endif