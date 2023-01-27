#include<iostream>
using namespace std;
#if 0 //Inherited Method 
class B {
    public:
    void f() {
        cout << " B::f() " << endl;
    }
};

class D : public B {
    public:
    void g() {
        cout << " D::g() " << endl;
    } //added new function

};

int main() {
    B b;
    D d;
    b.f();
    d.f(); // ---> Inherited
    d.g(); //---> Added
}
/*
Output -  
B::f() 
 B::f() 
 D::f() 
*/
#else 

//Overridden 
class B {
    public:
    void f() {
        cout << " B::f() " << endl;
    }
};

class D : public B {
    public:
    void f() {
        cout << " D::f() " << endl;
    } //added new function

};

int main() {
    B b;
    D d;
    b.f();
    d.f(); // ---> Overridden
    
}
/*Output 
 B::f() 
 D::f()
*/
#endif

/*Summary-
If member function of base class is redefined in derived class with same signature then it mask the base class
methods.
Then how to avialble base class methods with same signature ?
*/