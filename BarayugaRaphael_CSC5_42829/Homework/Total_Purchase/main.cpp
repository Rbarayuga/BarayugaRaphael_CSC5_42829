/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Raphael M.B. Barayuga
 *
 * Created on February 28, 2016, 11:53 PM
 */

#include <iostream>

using namespace std;

/*
 * //Five Item purchase
 * //Five prices 
 * //Five variables for each item
 * //Display each variable price
 * //Display Subtotal
 * //Display Sales tax
 * //Display Total
 * //Sales tax is 0.07
 */
int main(int argc, char** argv) {
float totsale, item1, item2, item3, item4, item5, statax, subtot, totax;
        item1 = 15.95; 
        item2 = 24.95;
        item3 = 6.95;
        item4 = 12.95;
        item5 = 3.95;
        statax = 0.07;
        subtot;
        totax;

//Display each Variable price       
cout << " Item Price $ " << item1 << endl;

cout << " Item Price $ " << item2 << endl; 

cout << " Item Price $ " << item3 << endl; 

cout << " Item Price $ " << item4 << endl; 

cout << " Item Price $ " << item5 << endl; 

//Subtotal of Sale
subtot = item1 + item2 + item3 +item4 + item5;

cout << " Total $ " << subtot << endl; 

//Amount of sales tax
totax = subtot * statax;

cout << " Amount of sales tax $ " << totax << endl; 

//Display Total 
totsale = subtot + totax;

cout << " Total $ " << totsale << endl; 


    return 0;
}

