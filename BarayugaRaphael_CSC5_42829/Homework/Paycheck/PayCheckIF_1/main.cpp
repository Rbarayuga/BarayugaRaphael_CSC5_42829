/* 
 * File:   main.cpp
 * Author: Raphael M.B. Barayuga        
 * Purpose: Independent If's
 * Created on March 16, 2016, 8:55 AM
 */

#include <iostream>

using namespace std;

/*/
//User Libraries
 
//Global Constants

//Function Prototypes
 
//Execution Begins Here!
*/
int main(int argc, char** argv) {
//Declare Variables
    float payRate,hrsWrkd,payChk;
    float ovrTime=40;//Where overtime begins
      
    //Input values
    cout<<"Input Pay Rate ($'s/hr) and Hours Worked both dd.dd format"<<endl;
    cin>>payRate>>hrsWrkd;
    
    //Map the Inputs to the outputs
    if(hrsWrkd <= ovrTime)payChk=hrsWrkd*payRate;
    if(hrsWrkd > ovrTime)payChk=hrsWrkd*payRate+(hrsWrkd-ovrTime)*payRate;
    if(hrsWrkd < 0 || hrsWrkd > 98) payChk = 0;
            
    //Output the results
    cout<<"Paycheck = $"<<payChk<<" for "
            <<hrsWrkd<<" hours worked @ $"<<payRate<<"/hr"<<endl;
            
    return 0;
}

