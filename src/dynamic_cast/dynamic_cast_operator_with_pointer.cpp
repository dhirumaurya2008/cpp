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
    B* pB = &b; A *pA = dynamic_cast<A*>(pB);
    cout << pB << " cast to " << pA << ": Upcast Valid " <<  endl;

    pA = &b; pB = dynamic_cast<B*>(pA);
    //downcast is valid because pA was holding b.
    cout << pA << " cast to " << pB << ": DownCast Valid " <<  endl;

    pA = &a; pB = dynamic_cast<B*>(pA);
    cout << pA << " cast to " << pB << ": DownCast InValid " <<  endl;

    //Unrelated classes
    pA = (A*)&c; C *pC = dynamic_cast<C*>(pA);
    cout << pA << " cast to " << pC << ": Unrelated case InValid " <<  endl;
    
    pA = 0; pC = dynamic_cast<C*>(pA);
    cout << pA << " cast to " << pC << ": Unrelated case Valid for NULL " <<  endl;

    pA = &a; void *pV = dynamic_cast<void*>(pA);
    cout << pA << " cast to " << pV << " Cast-to-void: Valid " << endl;

    //pA = dynamic_cast<A*>(pV); // Error
}