#include<iostream>
using namespace std;

/*Inheritance*/
#if 0
class B {
public:
    void f (int i) {
        cout << "B::f(int) " << endl;
    }

    void g (int i) {
        cout << "B::g(int) " << endl;
    }
};

class D: public B {
public:
//Inherited f(int) 
//Inherited g(int)
};
int main () {
B b;
D d;
b.f(1); // call B::f(int)
b.g(2); // call B::g(int)
d.f(3); // call B::f(int)
d.g(4); // call B::g(int)
}
#else //Override and overload
class B {
public:
     void f (int i) {
        cout << "B::f(int) " << endl;
    }

    void g (int i) {
        cout << "B::g(int) " << endl;
    }
};

class D: public B {
public:
//using B::f;
//Inherited f(int) 
#if 1
void f(int i) { //Override
    cout << "D::f(int) override B::f(int) " << endl;
}
#endif
//
void f(const string& s) {
    cout << " D::f(string&) overloaded B::f(int) " << endl;
}


//Inherited g(int)

void h (int i) {
    cout << "D::h(int) added here " << endl;
}

};
int main () {
B b;
D d;
b.f(1); // call B::f(int)
b.g(2); // call B::g(int)
d.f(3); // call d::f(int)
d.g(4); // call B::g(int)

d.f("red"); // call D::f(string&)
d.h(5); // call D::h(int)
}
#endif


