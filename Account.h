#ifndef ACCOUNT
#define ACCOUNT

#include <iostream>
using namespace std;

class Account{
    private:
        string name;
        long accountNumber;
        long savingsBalance;
        int creditLimit;
        int creditOwing;

    public:
        Account();
        Account(string name);
        Account(string name, long savingsBalance, long creditLimit);

        void accountDetails();
        long CreateAccountNumber();
        long DepositSavings(int amount);
        long WithdrawSavings(int amount);
        void PrintCreditDetails();
        int PayCreditOwing(int amount);
        int WithdrawCredit(int amount);
        long GetAccountNumber();

};

#endif