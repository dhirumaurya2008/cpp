#include<iostream>
using namespace std;

class B {
public:
void f(int i);
void g(int i);
};

void B::f(int i) {
    cout << "this is function B::f = " << i <<  endl ;
}

void B::g(int i) {
    cout << "this is function B::g = " <<  i << endl ;
}

class D : public B {
    //Inheritance B::f(int)
    //Inherit B::g(int)
};

int main () {
    B b;
    D d;

    b.f(1); // calls B::f(int)
    b.g(2); // calls B::g(int)

    d.f(1);  // calls B::f(int)
    d.g(2); // calls B::g(int)
}