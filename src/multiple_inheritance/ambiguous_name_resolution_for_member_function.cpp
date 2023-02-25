#include<iostream>
using namespace std;

class Bas1 {
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

class Bas2 {
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
Derived(int x, int y, int u, int v, int z);
};

int main()
{
c.f(5); //Base1::f(int) or Base2::f(int) ?
c.g(5); //Base1::g() or Base2::g(int) ?
c.f(5); //Base1::f(int) or Base2::f(int)?
c.g();  //Base1::g() or Base2::g(int)
}