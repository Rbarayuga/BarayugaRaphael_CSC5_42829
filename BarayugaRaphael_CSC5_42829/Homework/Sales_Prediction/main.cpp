/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Raphael M.B. Barayuga
 * Purpose: homework
 * Created on February 29, 2016, 3:55 AM
 */

#include <iostream>

using namespace std;

/*
 //predicting sales of 58% of 8.6 mil
 // East Coast division generating of sales
 */
int main(int argc, char** argv) {
    float sales, percent, ecd;
    sales = 8600000;
    percent = 0.58;
    
    //ecd is the company East Coast division
    //Generation of sales
    ecd = sales * percent;
    
    cout << " East Coast division will generate " << ecd << endl;
    return 0;
}

