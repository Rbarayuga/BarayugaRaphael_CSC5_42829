/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: HydraSniper
 *
 * Created on February 29, 2016, 4:06 AM
 */

#include <iostream>

using namespace std;

/*
 // find how many bytes data type uses
 // char, int, float, and double.
 */
int main(int argc, char** argv) {        
  //Size of a char
    
   cout << "the size of a char is " << sizeof(char);
   cout << " bytes. "<< endl;
   
  //Size of a int
           
   cout << "the size of a int is " << sizeof(int);
   cout << " bytes. "<< endl;
   
  //Size of a Float
   
   cout << "the size of a float is " << sizeof(float);
   cout << " bytes. "<< endl;
    
 //Size of a double 
   
   cout << "the size of a double is " << sizeof(double);
   cout << " bytes. "<< endl;
    return 0;
}

