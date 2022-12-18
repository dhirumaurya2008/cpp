#include<iostream>
#include<cmath>
using namespace std;
class Complex {
    double re, im;
public:

//Ctor with parameter 
Complex(double f_re = 0.0, double f_im = 0.0) :
 re(f_re), im(f_im) // E3 - Initialization
{ // E4 Object life time starts
    cout << "Complex Ctor called |" << re << " + " << im << "|" << endl;
}// E8 Object lifetime ends

~Complex () {
    cout << "Complex Dtor called |" << re << " + " << im << "|" << endl;
}
double norm () { // E6 - norm() executes
    return sqrt(re*re + im*im);
}

void print () {
   cout << "|" << re  << " + " << im << " |"  << endl ;
   cout << norm () << endl;
}
};

int main () { // E1 - Allocation of c1 on stack
Complex c1(3.4, 4.6); // E2 - Ctor called
c1.norm(); // E5 norm invoked
return 0; //E7 Destructor called
} //E9 Deallocation of c1 from stack