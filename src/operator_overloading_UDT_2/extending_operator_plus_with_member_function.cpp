#include<iostream>
using namespace std;

class Complex {
    double re, im;
public:
//No implicit conversion is allowed
explicit Complex(double a = 0, double b = 0) : re(a), im(b) { 
}

void disp() {
    cout << re << " +j" << im << endl;
}
Complex operator+ (const Complex& b) { //Overload-1
    Complex r;
    r.re = re + b.re;
    r.im = im + b.im;
    return r;
}

Complex operator+ (double d) { //Overload-2
    Complex r(d);
    return  (*this + r);
}

};




int main () {
    Complex d1(3.4, 4.4), d2(4.5, 5.5), d3;
    d3 = d1 + d2; //Overlaod-1
    d3.disp(); 
    d3 = d1 + 6.7; //Overload-2
    d3.disp();

    //d3 = 4.2 + d2; // Overload-3
    //d3.disp();
    //Here Overload-3 won't be possible as left operand is double - not an object
    return 0;
}
