#include<iostream>
using namespace std;

class A {};
class B: public A {};

int main () {
A *pa = 0;
B *pb = 0;

void *pv = 0;

pa = pb; //UPCAST okay 

pb = pa; // Downcasting 

pv = pa; // Okey but it will loose type from A* to void*
pv = pb; // Ok but it will loose type for B* to A*

pa = pv; 
pb = pv;
}