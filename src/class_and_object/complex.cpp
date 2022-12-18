#include<iostream>
using namespace std;
class Complex {
public : 
double re;
double im;
};
int main () {
Complex c = {34, 5.6};
cout << "|" << c.re  << " + " << c.im << " |" ;
return 0;
}

/*
Summary - By default access specifiier is private.
*/