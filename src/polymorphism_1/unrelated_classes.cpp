#include<iostream>
using namespace std;
class A {
    int i;
};

class B {
    double d;
};

int main (){
A a;
B b;
A *p = &a;
A *q = &b;

a = b;
a = (A)b;

b = a;
b = (B)a;
#if 1
p = q;
q = p;

p = (A*)&b;
q = (B*)&a;
#endif
return 0;
}