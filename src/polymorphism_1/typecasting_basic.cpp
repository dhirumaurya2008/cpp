#include<iostream>
using namespace std;

int main() {
    int i = 3;
    double d = 2.5, *p = &d;
    double result = d/i ; // i is cast to double and used

    d = i; // implicit int to double 
    i = d; // implicit double to int * warning 
    d = (double)i;
    i = (int)d;
    i= p; // error: invalid conversion from 'double*' to 'int'
    i = (int)p; //error: cast from 'double*' to 'int' loses precision

}