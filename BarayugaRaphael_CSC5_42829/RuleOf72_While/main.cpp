/* 
 * File:   main.cpp
 * Author: Raphael M.B. Barayuga    
 *Purpose: To Illustrate rule of 72 by way of while loop
 * Created on March 28, 2016, 8:10 AM
 */

//System Libraries
#include <iostream>
#include<iomanip>
using namespace std;

//User Libraries

// Global Constants

// Function Prototypes

// Execution Begins Here
int main(int argc, char** argv) {
// Declare variables
     float pv=100.0f;//Present Value
     float iRate=0.05f;//Interest Rate
     float nComp;//Number of compounding periods by rule of 72
     int nYears=0;//Comparison of calculations to the rule of 72
     float fv=pv;//Future Value
     
     //Calculate the approximate number of years to double by rule of 72
     nComp=static_cast<int>(0.72f/iRate);
     
     //Output the initial conditions and setup the table
     cout<<"Present Value = $ "<<pv<<endl;
     cout<<"Interest Rate = "<<iRate*100<<"%"<<endl;
     cout<<"Years Future Value"<<endl;
     cout<<fixed<<setprecision(2)<<showpoint;
     cout<<setw(3)<<nYears<<setw(10)<<" $"<<fv<<endl;
     
      //Loop each year until the future value is 2x the present value 
     while(fv<2*pv){
         fv*=(1+iRate);//Yearly interest rate calculation
         nYears++;     //Increment the number of years
          cout<<nYears<<" $"<<fv<<endl;
      
     }
     
     //Output the results
     cout<<"By the Rule of 72 it will take "<<nComp<<" years to double"<<endl;
     cout<<"The Future value = $"<<fv<<endl;
     cout<<"The number of years to more than double = "<<nYears<<endl;
     
     //Exit stage right
    return 0;
}

