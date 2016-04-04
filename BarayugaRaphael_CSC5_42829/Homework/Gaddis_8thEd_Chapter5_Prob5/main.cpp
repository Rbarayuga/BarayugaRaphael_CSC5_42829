/* 
 * File:   main.cpp
 * Author: Raphael M.B. Barayuga 
 *
 * Created on April 4, 2016, 10:10 AM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
//Variables
    float year=25, rise=1.5, num, future;
    
    cout<<"YEARS"<<"\t\t"<<"MILLIMETERS"<<endl;
    cout<<"_____________________________"<<endl;
    //loop the calories burned
    for (num=1; num <= year; num++)
    { 
        future = num * rise;
        cout<<num<<"\t\t"<<future<<endl;
    }
    
  //Exit Stage Right
   
    return 0;
}

