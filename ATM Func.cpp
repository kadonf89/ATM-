//
//  ATM Func.cpp
//  ATM Application
//
//  Created by Kadon Fontenot on 5/7/22.
//

#include "ATM Func.hpp"
#include <iostream>
using namespace std;

void showMenu(){
    cout << "**********Menu**********" << endl;
    cout << "1. Check Balance" << endl;
    cout << "2. Deposit" << endl;
    cout << "3. Withdrawl" << endl;
    cout << "4. Exit" << endl;
    cout << "************************" << endl;
}

void balanceCheck(double &balance){
    cout << "Balance is: $" << balance << endl;
}

double Deposit(double &balance){
    double depositAmount;
    
    cout << "Deposit amount: ";
    cin >> depositAmount;
    
    balance  += depositAmount;
    
    return balance;
}

double Withdrawl(double &balance){
    double withdrawlAmount;
    
    cout << "Withdrawl amount: ";
    cin >> withdrawlAmount;
    
    if (withdrawlAmount <= balance){
        balance  -= withdrawlAmount;
    }
    
    else{
        cout << "Insufficient Funds" << endl;
    }
    
    return balance;
}
