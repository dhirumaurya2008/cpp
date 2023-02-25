#include<iostream>
using namespace std;
class Base1 {
    protected:
    int i_, data_;
    public:
    Base1(int a, int b): i_(a), data_(b) {

    }

    void f(int) {
        cout << "Base1::f(int) \n" << endl;
    }

    void g() {
        cout << "Base1::g()" << endl;
    }
};

class Base2 {
    protected:
    int j_, data_;
    public:
    Base2(int a, int b): j_(a), data_(b) {}
    void h(int) {
        cout << "Base2::h(int)" << endl;
    }
};

class Derived: public Base1, public Base2 {
int k_;
public:
Derived(int x, int y, int u, int v, int z): Base1(x, y), Base2(u, v), k_(z) {

}

void f(int) {
        cout << "Derived::f(int)" << endl; //Overriden Base1::f(int)
}

// Inherited Base1::g()

void h(string) {
    cout << "Derived::h(string)" << endl; //Overload Base2::h(int)
}

void e(char) {

    cout << "Derived::e(char)" << endl; // Added Derived::e(char)
}
};

int main() {
    Derived c(1, 2, 3, 4, 5);
    c.f(5); //Derived::f(int)  --Overridden Base1::f(int)
    c.g();  //Base1::g()       --Inherited Base1::g()
    c.h("dhiru"); //Derived::h(string) --Overloading Base2::h(int)
    c.e('a'); //Derived::e(char) --Added Derived::e(char)
}