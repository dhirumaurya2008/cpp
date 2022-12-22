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

Complex(const Complex& c): re(c.re), im(c.im) {
    cout << "Complex Copy Ctor: ";
    print();
}

Complex& operator= (const Complex& c){
    cout << "Complex Copy Assignment: ";
    re = c.re;
    im = c.im;
    print();
    return *this;
}

~Complex(){
    cout << "Complex Dtor: ";
    print();
}
double norm () {
    return sqrt(re*re + im*im);
}

void print () {
   cout << "|" << re  << " + " << im << " |"  << endl ;
   cout << norm () << endl;
}

};
void Dispaly(Complex c) { // Call By Value
    cout << "Display: " ;
    c.print();
}
int main () {
Complex c1(3.4, 4.6), c2(c1), c3 = c2;
c1.print();
c2.print();
c3.print();
cout << "Calling Display " << endl;
Dispaly(c3);// Copy Constructor called to copy c3 to c in Display

cout << "Copy Assignent use case " << endl;
c1 = c2 = c3 ;

return 0;
}