
#include<iostream>
using namespace std;

class A {
    public:
    virtual ~A() {}
};

class B:public A {

};

class C {
    public:
    virtual ~C() {}
};

int main () {
    A a; B b; C c;
    try {
    B &rB1 = b; 
    A &rA2 = dynamic_cast<A&>(rB1);
    cout << "Upcast Valid " <<  endl;
    
    A &rA3 = b; 
    A &rB4 = dynamic_cast<B&>(rA3);
    cout << "Downcast Valid " <<  endl;

    try {
        A &rA5 = a;
        B &rB6 = dynamic_cast<B&>(rA5);
    } catch (bad_cast e) {

        cout << "Downcast invalid : " << e.what() << endl;
    }
    
    try {
        A &rA7 = (A&)c;
        C &rC8 = dynamic_cast<C&>(rA7);
    } catch (bad_cast e) {

        cout << "Unrelated-cast invalid : " << e.what() << endl;
    }

    } catch (bad_cast e) {
        cout << "Bad-cast: " << e.what() << endl;
    }

    //pA = dynamic_cast<A*>(pV); // Error
}