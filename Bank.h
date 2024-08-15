#ifndef BANK_H
#define BANK_H

#include "LinkedList.h"
#include "Account.h"
#include <iostream>

using namespace std;

class Bank{
    private:   
        string name;    
        unsigned int assetsTotal;
        LinkedList* users;

    public:
        Bank();
        Bank(string name);
        Bank(string name, unsigned int totalAssets);
        Account* findAccount(long accountNumber);

        



};

#endif