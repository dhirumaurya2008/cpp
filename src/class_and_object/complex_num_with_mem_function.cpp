#include<iostream>
#include<cmath>
using namespace std;
class Complex {
public:
double re, im;
double norm () {
    return sqrt(re*re + im*im);
}

void print () {
   cout << "|" << re  << " + " << im << " |"  << endl ;
   cout << norm () << endl;
}
};

int main () {
Complex c = {34, 5.6};
c.print();
return 0;
}