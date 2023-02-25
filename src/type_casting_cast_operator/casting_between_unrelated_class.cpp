#include<iostream>
using namespace std;

class A {
    int ;
};
class B {
    double d;
};

int main() {
A a;
B b;

A *p = &a;
B *q = &b;

a = b; // Error 
a = (A)b; // Error 

b = a; // Error
b = (B)a;  // Error

p = q;
q = p;

p = (A*)&b;
q = (B*)&a;
}