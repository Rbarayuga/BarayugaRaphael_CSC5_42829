/* 
 * File:   main.cpp
 * Author: Raphael M.B. Barayuga
 * Purpose:Lab
 * Created on March 14, 2016, 9:52 AM
 */
//System Libraries
#include <iostream>

using namespace std;

/*
//Global Constants
//User Libraries 
 */

int main(int argc, char** argv) {
   
bool x=true;
bool y=true;
// ! = not
// && = and
// || = or
// ^= exclusively order
cout<<(x?'T':'F')<<(y?'T':'F')<<(!x?'T':'F')<<(!y?'T':'F')<<(x&&y?'T':'F')<<
(x||y?'T':'F')<<(x^y?'T':'F')<<(x^y^y?'T':'F')<<(x^y^x?'T':'F')<<
(!(x&&y)?'T':'F')<<(!x||!y?'T':'F')<<(!x&&!y?'T':'F')<<endl;

x=true;
y=false;
cout<<(x?'T':'F')<<(y?'T':'F')<<(!x?'T':'F')<<(!y?'T':'F')<<(x&&y?'T':'F')<<
(x||y?'T':'F')<<(x^y?'T':'F')<<(x^y^y?'T':'F')<<(x^y^x?'T':'F')<<
(!(x&&y)?'T':'F')<<(!x||!y?'T':'F')<<(!x&&!y?'T':'F')<<endl;

x=false;
y=true;
cout<<(x?'T':'F')<<(y?'T':'F')<<(!x?'T':'F')<<(!y?'T':'F')<<(x&&y?'T':'F')<<
(x||y?'T':'F')<<(x^y?'T':'F')<<(x^y^y?'T':'F')<<(x^y^x?'T':'F')<<
(!(x&&y)?'T':'F')<<(!x||!y?'T':'F')<<(!x&&!y?'T':'F')<<endl;

x=false;
y=false;
cout<<(x?'T':'F')<<(y?'T':'F')<<(!x?'T':'F')<<(!y?'T':'F')<<(x&&y?'T':'F')<<
(x||y?'T':'F')<<(x^y?'T':'F')<<(x^y^y?'T':'F')<<(x^y^x?'T':'F')<<
(!(x&&y)?'T':'F')<<(!x||!y?'T':'F')<<(!x&&!y?'T':'F')<<endl;

//Exit Stage Right
    return 0;
}

