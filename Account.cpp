#include <iostream>
#include<ctime>
#include <sstream>
#include "Account.h"

using namespace std;

Account::Account(){
    fullName = "John Doe";
    accountNumber = 12345;

    // Get current time
    time_t now = time(0);
    tm *ltm = localtime(&now);
    // Format time as a string (YYYY-MM-DD HH:MM:SS)
    stringstream ss;
    ss << 1900 + ltm->tm_year << "-"
       << 1 + ltm->tm_mon << "-"
       << ltm->tm_mday << " "
       << 1 + ltm->tm_hour << ":"
       << 1 + ltm->tm_min << ":"
       << 1 + ltm->tm_sec;

    creationDate = ss.str();

    string creditcardNumber = "123 456 7890";
    savingBalance = 0;
    creditcardOwing = 0;
    creditLimit = 1000;

}

int Account::withdraw(int amount){
    savingBalance -= amount;
    return savingBalance;
}

unsigned int Account::createAccountNumber(){
        
    srand(time(0));
    int randomNumber = 10000000 + rand() % 90000000;
    return randomNumber;
}

unsigned int Account::deposit(unsigned int amount){
    savingBalance += amount;
}

void Account::creditCardDetails(){
    cout << "Number: " << creditcardNumber << endl;
    cout << "Owing: " << creditcardOwing << endl;
    cout << "Limit: " << creditLimit << endl;

}

//Description: Pays credit card amount with savings account balance.
//Output: Returns the amount still owing on the creditcard
//Big O of (1)
int Account::payCreditCard(int amout){
    if(savingBalance > creditcardOwing){
        savingBalance -= creditcardOwing;
        creditcardOwing = 0;
        return 0;
    }
    else if(savingBalance < creditcardOwing){
        creditcardOwing - savingBalance;
        savingBalance = 0;
        return creditcardOwing;
    }

}

//Description: Checks if account can be erased by checking if there is an ammount still owing
//Output: Returns true if account is valid to close (no debt) else returns false
//Big O of (1)
bool Account::removeAccount(){
    if(creditcardOwing > 0){
        return false;
    }
    else{
        savingBalance = 0;
        return true;
    }

}