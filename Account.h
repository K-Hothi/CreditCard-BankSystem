#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <iostream>
using namespace std;

class Account{
    private:
        unsigned int accountNumber;
        string fullName;
        string creationDate;
        string creditcardNumber;
        unsigned int savingBalance;
        int creditcardOwing;
        int creditLimit;

    public:
        int Account::withdraw(int amount);

        unsigned int createAccountNumber();

        unsigned int deposit(unsigned int amount);

        bool removeAccount();

        void creditCardDetails();

        int payCreditCard(int amout);
        

};

#endif