/* 
 * File:   main.cpp
 * Author: Raphael M.B. Barayuga
 * Purpose: Homework
 * Created on April 4, 2016, 9:10 AM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    //Variables
    int sum,num,i;
   
    
     cout<<"Enter a number less than 50"<<endl;
        cin>>num;
        
    //Sum of numbers loop less than 50
    for (i=1; i<=num && num <= 50 ; i++) 
    {
        sum=sum+i;
        cout<<"The sum of the numbers are: "<<sum<<endl;
    }
        
    
    return 0;
}

