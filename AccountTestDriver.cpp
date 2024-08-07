#include <iostream>
#include "Account.h"

using namespace std;

int main(){
    Account a("Kharandeep Hothi");
    a.accountDetails();
    a.DepositSavings(1000);
    a.WithdrawSavings(800);
    a.WithdrawCredit(980);
    a.accountDetails();

    return 0;
}