#include <iostream>
#include "Bank.h"

using namespace std;

Bank::Bank(string name){
    bankName = name;
    capacity = 20;
    accountNumbers = new int[capacity];
    accounts = new Vector<Account>;
}

Bank::~Bank(){
    delete[] accountNumbers;
    delete accounts;
}


void Bank::createAccount(){
    
}

void menu();
int withdraw(int amount);
int deposit(int amount);
void accountDetails();