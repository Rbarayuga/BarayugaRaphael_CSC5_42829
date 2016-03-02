/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Raphael M.B. Barayuga
 Purpose: Homework
 * Created on February 29, 2016, 1:27 AM
 */

#include <iostream>

using namespace std;
/*
//Car with 20 Gallons of gas
//Distance for Town
//Distance for Highway
// AVG MPG * Gallons
 * 
 */
int main(int argc, char** argv) {
    float car, towgal, tmpg, higal, hmpg;
            car = 20; //gallons in car
            
            towgal; // gallon in town
            
            tmpg = 23.5; //town MPG
            
            higal; // gallons in town
            
            hmpg = 28.9; // highway MPG
            
    
    //Distance for town
    towgal = car * tmpg;
    
    //Distance for highway
    higal = car * hmpg;
    
    //Display for town
    cout << " Miles in town is " <<  towgal  << endl;
    
    //Display for highway
    cout << " Miles on highway is " <<  higal  << endl;        
    
    return 0;
}

