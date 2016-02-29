/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Raphael M.B. Barayuga
 * Purpse: Homework
 * Created on February 29, 2016, 3:47 AM
 */

#include <iostream>

using namespace std;

/*
 //add values and divide the sum by number of values
 */
int main(int argc, char** argv) {
    int valu_1, valu_2, valu_3, valu_4, valu_5, sum, average;
    valu_1 = 28;
    valu_2 = 32;
    valu_3 = 37;
    valu_4 = 24;
    valu_5 = 33;
    
    // sum of the variables
    sum = valu_1 + valu_2 + valu_3 + valu_4 + valu_5;
    
    //average of variables
    average = sum / 5;
    
    // display of average
    cout<< " Average of values is " << average << endl;
    return 0;
}

