#include "Bank.h"
#include <iostream>

using namespace std;

Bank::Bank(){
    name = "Temp Bank";
    assetsTotal = 1,000,000,000;
    users = new LinkedList();
}

Bank::Bank(string name){
    this->name = name;
    assetsTotal = 1,000,000,000;
    users = new LinkedList();   
}
Bank::Bank(string name, unsigned int totalAssets){
    this->name = name;
    assetsTotal = totalAssets;
    users = new LinkedList();
}

Account* Bank::findAccount(long accountNumber){
    return users->searchAccount(accountNumber);
}