#include<iostream>
using namespace std;

class Complex {
public:
double re, im;
//No implicit conversion is allowed
explicit Complex(double a = 0, double b = 0) : re(a), im(b) { 

}

void disp() {
    cout << re << " +j" << im << endl;
}

};

Complex operator+ (const Complex&a, const Complex& b) { //Overload-1
    Complex r;

    r.re = a.re + b.re;
    r.im = a.im + b.im;

    return r;
}

Complex operator+ (const Complex&a, double b) { //Overload-2
    Complex r(b);
    return (a+r); // Create temporary object and use overload-1
}

Complex operator+ (double b, const Complex&a) { //Overload-3
    Complex r(b);
    return (a+r); //Create temporary object and use overload-1
}


int main () {
    Complex d1(3.4, 4.4), d2(4.5, 5.5), d3;
    d3 = d1 + d2; //Overlaod-1
    d3.disp(); 
    d3 = d1 + 6.7; //Overload-2
    d3.disp();
    d3 = 4.2 + d2; // Overload-3
    d3.disp();
    return 0;
}

/*
Summary- 
Works fine with 3 overlaoded global function.

Issue - This is a bad solution as it breaks the encapsulation.
Solution - Use member function for this.
*/