/* 
 * File:   main.cpp
 * Author: Raphael M.B. Barayuga
 * Purpose: Lab
 * Created on March 7, 2016, 9:41 AM
 */

//System Libraries
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

/*
//Global Constants
//User Libraries
 */

int main(int argc, char** argv) {
//Declare variables 
    float loanAm = 10000 , intRate = 0.01, numPay = 36, montPay, loanC;
    
//Calculate payments
    montPay = intRate * pow( 1+ intRate, numPay) / ( pow (1 + intRate, numPay) -
            1) * loanAm;

//Calculate Loan
    loanC = montPay * ( pow (1 + intRate, numPay) - 1 ) / (intRate * pow 
            ( 1 + intRate, numPay));
//Display Rate  
cout << "Monthly payment is $ " << fixed << setprecision(2)<< montPay << endl;

//Display Loan Check
cout << "Loan check $ " << loanC << endl;
    return 0;
}

