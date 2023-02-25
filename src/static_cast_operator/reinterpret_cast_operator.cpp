#include<iostream>
using namespace std;

class A {};
class B {};

int main () {

    long i = 2;
    double d = 3.7;
    double *pd = &d;

    i = pd; // implicit error
    i = reinterpret_cast<long>(pd); //reinterpret_cast OK
    i = (long)pd; //c-style ok
    cout << pd << " " << i << endl;

    A *pA;
    B *pB;

    pA = pB; //implicit --error
    pA = reinterpret_cast<A*>(pB); // reinterpret_cast okey
    pA = (A*)pB; // c-style ok
}