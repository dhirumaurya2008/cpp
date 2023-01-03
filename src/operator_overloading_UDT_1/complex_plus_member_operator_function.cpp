#include<iostream>
using namespace std;

class Complex {
    double re, im;
    public:
    Complex(double a = 0.0, double b = 0.0) : re(a), im(b) {

    }

    ~Complex() {

    }

  
    void display();
    Complex operator+(Complex &a) {
    Complex r;
      r.re = re + a.re;
      r.im = im + a.im;
      return r;
}
};

void Complex::display() {
    cout << re << " + " << im << "j" << endl;
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
This safe as data member is private.
- Code is not clusmsy aswell as its gets compact.
- c1 + c2 = c.operator+(c2)
- No need of two arguments.
*/