#include<iostream>
using namespace std;
class Complex {
 public :
double m_re;
double m_im;

double get_real() {
    return m_re;
}
double get_imag() {
    return m_im;
}

void  set_real(double re) {
    m_re = re;
}
void set_imag(double im) {
     m_im = im;
}

};
int main () {
Complex c = {3.4, 5.6}; //STATE-1
cout << "|" << c.get_real()  << " + " << c.get_imag() << " |" ;

c.set_real(5.7); // STATE-2

c.set_imag(9.8); // STATE-3

c.get_real(); // STATE-2 no state changes

return 0;
}