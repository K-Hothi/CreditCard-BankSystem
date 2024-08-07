#include <iostream>
#include <ctime>
#include "Account.h"

using namespace std;

Account::Account(){
    name = "John Doe";
    accountNumber = CreateAccountNumber();
    savingsBalance = 0;
    creditLimit = 1000;
    creditOwing = 0;
}

Account::Account(string name){
    this->name = name;
    accountNumber = CreateAccountNumber();
    savingsBalance = 0;
    creditLimit = 1000;
    creditOwing = 0;
}

Account::Account(string name, long savingsBalance, long creditLimit){
    this->name = name;
    accountNumber = CreateAccountNumber();
    this->savingsBalance = savingsBalance;
    this->creditLimit = creditLimit;
    creditOwing = 0;
}

void Account ::accountDetails(){
    cout << name << "'s Account" << endl;
    cout << "Account Number: " << accountNumber << endl;
    cout << "Savings Balance: " << savingsBalance << endl;
    PrintCreditDetails();
}

long Account::CreateAccountNumber(){
    srand(std::time(0));
    long long accountNumber = (long)((std::rand()) * std::rand());
    accountNumber = accountNumber % 9000000000 + 10000000;

    if(accountNumber < 0){
        accountNumber *= -1;
    }

    return accountNumber;
}

long Account::DepositSavings(int amount){
    savingsBalance += amount;
    return savingsBalance;
}

long Account::WithdrawSavings(int amount){
    if(amount > savingsBalance){
        return -1;
    }
    savingsBalance -= amount;
    return savingsBalance;
}

void Account::PrintCreditDetails(){
    cout << "Credit Limit: " << creditLimit << endl;
    cout << "Amount Owing: " << creditOwing << endl;
}

int Account::WithdrawCredit(int amount){
    if(creditLimit - creditOwing <= amount){
        return -1;
    }
    creditOwing += amount;
    return creditLimit - creditOwing;
}

int Account::PayCreditOwing(int amount){
    int outputCode = WithdrawSavings(amount);
    if(outputCode > -1){
        savingsBalance -= amount;
        creditOwing -= amount;
    }
    return creditOwing;
}