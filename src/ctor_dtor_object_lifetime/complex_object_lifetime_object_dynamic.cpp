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
unsigned char buf[100];   // Buffer for placement object
Complex* pc = new Complex(4.3, 5.3); // new allocate memmory calls Ctor
Complex* pd = new Complex[2]; // new [] allocate memory, calls default Ctor twice
Complex* pe = new (buf) Complex(5.5, 8.8); // placement new only calls Ctor, no alloc of memory, uses buf 

// Use Objects
pc->print();
pd[0].print();
pd[1].print();
pe->print();

// Release of object can be done in any order
delete pc; // delete calls Dtor, and memory deallocated.
delete [] pd; // calls 2 Dtor and relese memory
pe->~Complex(); // explicit calls to Dtor, use with extreme care
return 0;
} // Scope over objects no more avialable Dtor called -- C2 the c1 in reverse order