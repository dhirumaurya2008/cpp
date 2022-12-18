#include<iostream>
#include<cmath>
using namespace std;
class Complex {
    double re, im;
public:

//Ctor with parameter 
Complex(double f_re = 0.0, double f_im = 0.0) : re(f_re), im(f_im) { // Initializer list to initialize data member
    cout << "Complex Ctor called for (" <<  re << " , " << im << " )" << endl;
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
Complex c1(3.4, 4.6), c2(4.5), c3;
c1.print();
c2.print();
c3.print();
return 0;
}