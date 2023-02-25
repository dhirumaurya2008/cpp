
#include<iostream>
using namespace std;

class Base1 {
    public:
    Base1(int a, int b){

    }
    void f(int) {
        cout << "Base1::f(int)" <<  endl;
    }

    void g() {
        cout << "Base1::g()" <<  endl;
    }
};

class Base2 {
    public:
    Base2(int a, int b){

    }
    void f(int) {
        cout << "Base2::f(int)" <<  endl;
    }

    void g(int) {
        cout << "Base2::g(int)" <<  endl;
    }
};

class Derived: public Base1, public Base2 {
public:
Derived(int x, int y, int u, int v, int z):Base1(x, y), Base2(u, v) {

}
using Base1::f; // Hide Base2::f
using Base2::g;  // Hide Base1::g
};

int main()
{
Derived c(1, 2, 3 , 4, 5);
c.f(5); //Base1::f(int)
c.g(5); //Base2::g(int)
c.Base2::f(5); //Base2::f(int) 
c.Base1::g();  //Base1::g()
}

//Summary - Overload resolution does not work between Base1::g() and Base2::g(int)
//using hides other condidates; Explicit base class name can resolve (weak solution)
