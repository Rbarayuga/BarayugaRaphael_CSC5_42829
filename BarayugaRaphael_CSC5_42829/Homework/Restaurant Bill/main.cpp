/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Raphael M.B. Barayuga
 * Purpose: Homework
 * Created on February 28, 2016, 10:10 PM
 */

#include <iostream>

using namespace std;

/*
 // Tax and Tip on restaurant 
 
 */
int main(int argc, char** argv) {
    
  float costbil, taxam, costax, costip, meal, pertax, tip ;          
      meal = 88.67;           
      pertax = 0.0675;
      tip = 0.2;
   
      //taxam- tax amount
      //costax- cost of tax
      //costip- cost of tip
      //pertax- percent tax
      
//Calc tax amount
taxam = meal * pertax;

//Holding for total tax
costax = meal + taxam;

//Calc tax amount
costip = costax * tip;

//Calc total amount
costbil = costax + costip;

//Display of Meal cost
cout << " Meal cost is $ " << meal << endl;
 
//Display of Tax amount
cout << " Tax amount is $ " << costax << endl;

//Display of tip amount
cout << " Tip amount is $ " << costip << endl;

//Display of Total bill
cout << " Total amount is $" << costbil << endl;

    return 0;
}

