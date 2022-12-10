#include<iostream>
#include<cmath>
using namespace std;

#if 0 //Using #define
#define TWO 2
#define PI 4.0*atan(1.0) 
int main() {
int r = 10;
double peri = 2 * PI * r;
cout << "Perimeter = " << peri << endl;
#else //Using constant
const int TWO = 2;
const double PI = 4.0*atan(1.0);
int main() {
int r = 10;
double peri = 2 * PI * r;
cout << "Perimeter = " << peri << endl;
#endif
return 0;
}
