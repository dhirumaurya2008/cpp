#include<iostream>
using namespace std;

#if 0
class B {
    public:
    void f() {
        cout << " B::f() " << endl;
    }
};

class D : public B {
    public:
    void f () {
        cout << " D::f() " << endl;
    }
};

int main () {
    B b;
    D d;

    B *p;

    p = &b;
    p->f(); //B::f()
    p = &d;
    p->f(); //B::f();

}
/*Summary 
Binding is decided by the type of pointer.
Here, its static binding
*/
#else 
class B {
    public:
    virtual void f() {
        cout << " B::f() " << endl;
    }
};

class D : public B {
    public:
    virtual void f () {
        cout << " D::f() " << endl;
    }
};

int main () {
    B b;
    D d;

    B *p;

    p = &b;
    p->f(); //B::f()
    p = &d;
    p->f(); //D::f();

}
/*Summary 
Binding is decided by the type of object.
Since, p is of type B and in B function f defined as virtual
Here, its dynamic binding.
*/
#endif

