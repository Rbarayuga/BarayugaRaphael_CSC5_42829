/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Raphael M.B. Barayuga
 * Purpose: Homework
 * Created on February 29, 2016, 2:44 AM
 */

#include <iostream>

using namespace std;

/*
 // One Acre is equivalent to 43,560 sqft.
 // 
 // number of acres with 391,876 sqft 
 */
int main(int argc, char** argv) {
    int land, sqft , acres;
    sqft = 43560; //square feet per acre
    land = 391876;
    
   //How many acres in land
    acres = land / sqft ;
            
    cout << " there are " << acres << " acres " << endl;
    
    return 0;
}

