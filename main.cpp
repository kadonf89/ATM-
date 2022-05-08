//
//  main.cpp
//  ATM Application
//
//  Created by Kadon Fontenot on 5/7/22.
//

#include <iostream>
#include <curses.h>
#include <cstdlib>
#include <stdlib.h>
#include "ATM Func.hpp"
using namespace std;


int main() {
    
    int option;
    double balance = 500;
    
    do{
        showMenu();
        
        cout << "Option: ";
        cin >> option;
    
        system("clear");
        
        switch(option){
            case 1:{
                balanceCheck(balance);
                break;
            }
                
            case 2:{
                Deposit(balance);
                break;
            }
                
            case 3:{
                Withdrawl(balance);
                break;
            }
                
        }
        
    } while(option != 4);
    
    return 0;
}
