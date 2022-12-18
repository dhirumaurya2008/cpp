#include<iostream>
#include<cmath>
using namespace std;
class Complex {
    double re, im;
public:

//Ctor with parameter 
Complex(double f_re, double f_im) : re(f_re), im(f_im) { // Two parameter in Initializer list to initialize data member
    cout << "Complex Ctor called with Two parameter" << endl;
}

Complex(double f_re) : re(f_re), im(0.0) { //TOne parameter in Initializer list to initialize data member
    cout << "Complex Ctor called with One Pameter" << endl;
}

Complex() : re(0.0), im(0.0) { //Zero parameter in  Initializer list to initialize data member
    cout << "Complex Ctor called Zero parameter" << endl;
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