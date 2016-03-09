/* 
* File:   main.cpp
* Author: Raphael M.B. Barayuga
* Purpose: Sqrt approx
* Created on March 9, 2016, 8:05 AM
*/

//System Libraries
#include <iostream>

using namespace std;

/*
//User Libraries

//Global Constants

//Execution Begins Here
*/
int main(int argc, char** argv) {
//Declare Variables 
float n, r, guess;

//Input our number to square root

cout << "What number would you like to find the square root of?" << endl;
cin >> n;

//Calculate the first approximation

guess = n / 2;
r = n / guess;
guess = (guess + r) / 2;

//Output the first approximation

cout << "First approximation = square root("<<n<<") = r("
<<r<<"),guess("<<guess<<")" << endl;

//Calculate the second approximation

r = n / guess;
guess = (guess + r) / 2;

//Output the second approximation

cout << "Second approximation = square root("<<n<<") = r("
<<r<<"),guess("<<guess<<")"<<endl;

//Calculate the third approximation

r = n / guess;
guess = (guess + r) / 2;

//Output the third approximation

cout << "Third approximation = square root("<<n<<") = r("
<<r<<"),guess("<<guess<<")" << endl;

//Calculate the fourth approximation

r = n / guess;
guess = (guess + r) / 2;

//Output the Fourth approximation

cout << "Fourth approximation = square root("<<n<<") = r("
<<r<<"),guess("<<guess<<")" << endl;

//Calculate the fourth approximation

r = n / guess;
guess = (guess + r) / 2;

//Calculate the fifth approximation

r = n / guess;
guess = (guess + r) / 2;

//Output the fifth approximation

cout << "fifth approximation = square root("<<n<<") = r("
<<r<<"),guess("<<guess<<")" << endl;   

//Calculate the sixth approximation

r = n / guess;
guess = (guess + r) / 2;

//Output the Sixth approximation

cout << "Sixth approximation = square root("<<n<<") = r("
<<r<<"),guess("<<guess<<")" << endl; 

//Exit stage Left

    return 0;
}

