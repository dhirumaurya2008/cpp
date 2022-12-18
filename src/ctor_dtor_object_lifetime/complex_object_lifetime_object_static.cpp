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

Complex c(4.4, 6.6); // static global object c, Constructed before main starts 
int main () { 
cout << "main() starts" <<  endl; 
Complex c1(3.4, 4.6), c2(4.5, 5.5); // Complex Ctor called c1 then c2 gets ready
c1.norm(); // Object in use
c2.norm(); 
return 0;
} // Scope over objects no more avialable Dtor called -- C2 the c1 in reverse order