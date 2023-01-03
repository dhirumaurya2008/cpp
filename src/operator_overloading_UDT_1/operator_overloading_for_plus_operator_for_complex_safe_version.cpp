#include<iostream>
using namespace std;

class Complex {
    double re, im;
    public:
    Complex(double a = 0.0, double b = 0.0) : re(a), im(b) {

    }

    ~Complex() {

    }

    double getReal() {
        return re;
    }

    double getImag() {
        return im;
    }

    void setReal(double val) {
        re = val;
    }

    void setImag(double val) {
        im = val;
    }
    void display();
};

void Complex::display() {
    cout << re << " + " << im << "j" << endl;
}

Complex operator+(Complex &a, Complex &b) {
    Complex r;
    r.setReal(a.getReal() + b.getReal());
    //r.re = a.re + b.re;
    r.setImag(a.getImag()+b.getImag());
    //r.im = a.im + b.im;
    return r;
}

int main () {
    Complex d1(10.5, 12.25), d2(20.5, 30.25), d;
    cout << "First Complex Number is "; d1.display();
    cout << "Second Complex Number is "; d2.display();
    d = d1 + d2;

    cout << "Sum = "; d.display();

    
    return 0; 
}

/*Summary:
This safe as data member is public.
- Code is clusmsy. As so many get/set will gets invoked.
Question - Can we do better ?
Ans - 1. Member operator function 2. friend operator function
*/