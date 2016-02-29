/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: HydraSniper
 *
 * Created on February 29, 2016, 1:42 AM
 */

#include <iostream>

using namespace std;

/*
// total sales tax on a 95 purchase
// state sale tax is 4%
// country sales tax is 2% 
 */
int main(int argc, char** argv) {
    float totax, countax, statax, bothtax;
        int purch = 95;
        countax = 0.04;
        statax = 0.02;
        bothtax;
       
// Total of Taxes
    bothtax = countax + statax;
    
//Total tax of both
totax = bothtax * purch;

//Display of total 

cout << " Total tax is $ " << totax << endl;
    
    return 0;
}

