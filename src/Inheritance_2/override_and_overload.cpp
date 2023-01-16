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
    public:
    //using B::f;
    void D::f(int i);
    void D::f(string &s);
    void D::h(int i);

    
};

 void D::f(int i) {
        cout << "this function D::f = " << i <<  "| and overrding B::f(int) " << endl ;
    }
    
    void D::f(string &s) {
        cout << "this function D::f = " << s <<  "| and Overloading B::f(int) " << endl ;
    }

    void D::h(int i) {
        cout << "this function D::h = " << i <<  " Addition of new member" << endl ;
    }

int main () {
    B b;
    D d;

    b.f(1); // calls B::f(int)
    b.g(2); // calls B::g(int)

    d.f(1);  // calls d::f(int) Overriding 
    d.g(2); // calls B::g(int) Inherit 

    d.f(" Dhiru ") ; // calls d.f(string &) overloading
    d.h(5); // call d.h(int) normal function
}