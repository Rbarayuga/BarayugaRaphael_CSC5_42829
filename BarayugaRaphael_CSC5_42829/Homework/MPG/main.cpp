/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Raphael M.B. Barayuga
 *Purpose: Homework
 * Created on February 29, 2016, 1:12 AM
 */

#include <iostream>

using namespace std;

/*
 //Car holds 15 Gal
 //Car can Travel 375 Mi 
 //Calculate MPG
 */
int main(int argc, char** argv) {
    int car, gas, miles;
    gas = 15;
    miles = 375;

    
//Miles / Gallons for MPG
car = miles / gas;
    
// Display MPG
cout << " MPG is " << car << endl;           
    
    return 0;
}

