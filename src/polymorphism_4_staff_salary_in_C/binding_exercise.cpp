#include<iostream>
using namespace std;

class A {
    public:
    virtual void f(int i) {
        cout << " A::f(int) " << endl;
    }
    virtual void g(double d) {
        cout << " A::g(double) " << endl;
    }

    int h(A* a) {
        cout << " A::h(A*) " << endl;
    }
};

class B:public A {
     public:
    void f(int i) {
        cout << " B::f(int) " << endl;
    }

    virtual int h(B* a) {
        cout << " B::h(B*) " << endl;
    }
};

class C:public B {
 public:
    void g(double d) {
        cout << " C::g(double) " << endl;
    }
    
    int h(B* a) {
        cout << " C::h(B*) " << endl;
    }
};

int main() {
    A a;
    B b;
    C c;
    A *pA;
    B *pB;

    pA = &a;
    cout << " For pA " << endl;
    pA->f(2);  // A::f(int)
    pA->g(3.2); // A::g(double)
    pA->h(&a);   // A::h(A*)
    pA->h(&b);   // A::h(A*) 
    
    pA = &b;
    cout << " For pB " << endl;
    pA->f(2);  //  B::f(int)
    pA->g(3.2); // A::g(double)
    pA->h(&a);   // A::h(A*) Error
    pA->h(&b);   // A::h(B*) 

    pA = &c;
    cout << " For pC " << endl;
    pA->f(2);  //  B::f(int)
    pA->g(3.2); // c::g(double)
    pA->h(&a);   // A::h(A*) Error
    pA->h(&b);   // A::h(B*) 

    return 0;
}

/*Output-
For pA 
 A::f(int) 
 A::g(double) 
 A::h(A*) 
 A::h(A*) 
 For pB 
 B::f(int) 
 A::g(double) 
 A::h(A*) 
 A::h(A*) 
 For pC 
 B::f(int) 
 C::g(double) 
 A::h(A*) 
 A::h(A*) 
*/