/* 
 * File:   main.cpp
 * Author: Raphael M.B. Barayuga
 * Purpose:  To Illustrate the code for
 * developing a menu with a loop
 * Problem 1 -> Sum the numbers between 1 and 10
 * Problem 2 -> Multiply the numbers between 1 and 10
 * Problem 3 -> Divide the numbers between 1 and 10
 * Modified on April 4th, 2016
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes
void menu();
void prob1();
void prob2();
void prob3();

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare the loop variable
    char choice;
    //General Menu Format
    do{
        //Display the selection
        menu();
        //Read the choice
        cin>>choice;
        //Solve a problem that has been chosen.
        switch(choice){
                case 49:prob1();break;
                case 062:prob2();break;                   
                case 0x33:prob3();break;
                default:{
                        cout<<"Exit?"<<endl;
                }
        };
    }while(choice<='9');
    
    //Exit stage right
    return 0;
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
/*                  Menu
/*Inputs
 *      None
 * Outputs
 *      None
 */ 
void menu(){
        cout<<"Type 1 to solve problem 1"<<endl;
        cout<<"Type 2 to solve problem 2"<<endl;
        cout<<"Type 3 to solve problem 3"<<endl;
        cout<<"Type in a letter  to quit with no solutions."<<endl;
}
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
/*                  Problem 1
/*Inputs
 *       None
 * Outputs
 *       None
 */ 
void prob1(){
int sum=1+2+3+4+5+6+7+8+9+10;
        cout<<endl;
        cout<<"Solution to 1 sum(1->10)="<<sum<<endl;
        cout<<endl;
}
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
/*                  Problem 2
/*Inputs
 *       None
 * Outputs
 *      None
 */ 
void prob2(){
 int prod=1*2*3*4*5*6*7*8*9*10;
        cout<<endl;
        cout<<"Solution n!(1->10)="<<prod<<endl;
        cout<<endl;
}
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
/*                  Problem 3
/*Inputs
 *  None
 * Outputs
 *  None
 */ 
void prob3(){
   float quot=1.0f/2/3/4/5/6/7/8/9/10;
        cout<<endl;
        cout<<"Solution to 3 quot(1->10)="<<quot<<endl;
        cout<<endl;
}
