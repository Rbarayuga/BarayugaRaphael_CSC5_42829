/* 
 * File:   main.cpp
 * Author: Raphael M.B. Barayuga 
 * Purpose: Homework
 * Created on April 4, 2016, 9:50 AM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
//Variables
    float min, cal=3.6f, burn;
    
    //loop the calories burned
    for (min=5; min<= 30; min+=5)
    { 
        burn= min*cal; //calculation for how many calories burned by inc of 5
        cout<<"Feel the burn? You have lost:"<<burn<<" Calories in "<<min<<
                " minutes"<<endl;
    }
    
  //Exit Stage Right
   
    return 0;
}

