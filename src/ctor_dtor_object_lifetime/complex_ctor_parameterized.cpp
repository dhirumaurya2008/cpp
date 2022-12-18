#include<iostream>
#include<cmath>
using namespace std;
class Complex {
    double re, im;
public:

//Ctor with parameter 
Complex(double f_re, double f_im) : re(f_re), im(f_im) { // Initializer list to initialize data member
    cout << "Complex Ctor called" << endl;
}
double norm () {
    return sqrt(re*re + im*im);
}

void print () {
   cout << "|" << re  << " + " << im << " |"  << endl ;
   cout << norm () << endl;
}
};

int main () {
Complex c(3.4, 4.6), d(4.5, 6.7);
c.print();
d.print();
return 0;
}