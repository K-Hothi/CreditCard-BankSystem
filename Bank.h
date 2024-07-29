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
        Vector<Account>* accounts;
        int capacity;
    public:
        Bank(string name);
        ~Bank();

        void createAccount(){
            Account* a = new Account();
            
        }
        unsigned int accountNumber;
        string fullName;
        string creationDate;
        string creditcardNumber;
        unsigned int savingBalance;
        int creditcardOwing;
        int creditLimit;
        void menu();
        int withdraw(int amount);
        int deposit(int amount);
        void accountDetails();
};

#endif