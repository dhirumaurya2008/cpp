#include<iostream>
using namespace std;
class A {};
class B : public A {};

int main () {

    A *pa = 0;
    B *pb = 0;
    void *pv = 0;

    pa = pb ; // upcasting , means derived to base is Okey

    pb = pa; // Downcasting

    pv = pa;
    pv = pb;

    pa = pv;
    pb = pv;
}