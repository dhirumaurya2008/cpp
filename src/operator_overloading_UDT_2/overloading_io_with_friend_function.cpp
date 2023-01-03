#include<iostream>
using namespace std;

class Complex {
double re, im;
public:

Complex(double a = 0, double b = 0) : re(a), im(b) {

} 
friend ostream& operator<<(ostream &os, const Complex &a) {
    os << a.re << " +j" << a.im <<  endl;
    return os;
}

friend istream& operator>>(istream &is, Complex &a) {
    is >> a.re >> a.im;
    return is;
}
};



int main () {
    Complex d;
    cin >> d;
    cout << d;
    return 0;
}

/*
Summary: 
Works fine with friend function
*/