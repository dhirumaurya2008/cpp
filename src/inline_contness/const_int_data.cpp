#include<iostream>
using namespace std;

typedef struct complex {
    float real;
    float imag;
} complexNumber;

int main() {
//constant variable con not be re-initialized after it's defination
const int n = 10;
#if 0
n = 5; 
#endif

int m ;
int *p = 0;
p = &m;
*p = 7 ; // change m by p, now p is 7

#if 0
p = &n; //comp_err - this will be compilation error as n may be changed by *p;
#endif

//Variable of any data type can be declared as constant

//const Complex c = {2.3, 4.5};
//Complex c = {2.3, 4.5};
const complexNumber c1 = {2.3, 4.5};
#if 1
c1.real= 5.6; 
#endif

return 0;
}
