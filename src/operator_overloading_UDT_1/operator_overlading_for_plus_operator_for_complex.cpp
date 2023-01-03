#include<iostream>
using namespace std;

struct Complex {
    double re, im;
};

Complex operator+(Complex &a, Complex &b) {
    Complex r;
    r.re = a.re + b.re;
    r.im = a.im + b.im;
    return r;
}

int main () {
    Complex d1, d2, d;

    d1.re = 10.5; d1.im = 12.25;
    d2.re = 20.5; d2.im = 30.25;
    d = d1 + d2;

    cout << d.re << " + " << d.im << "j";
    return 0; 
}

/*Summary:
This unsafe as data member is public.
*/