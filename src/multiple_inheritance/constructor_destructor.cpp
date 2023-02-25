#include<iostream>
using namespace std;

class Base1 {
protected:
int i_;
int data_;
public:
Base1(int a, int b): i_(b) {
    cout << "Base1::Base1()" << endl;
}
~Base1() {
    cout << "Base1::~Base1()" << endl;
}
};

class Base2 {
protected:
int j_;
int data_;
public:
Base2(int a=0, int b=0): j_(b) {
    cout << "Base2::Base2()" << endl;
}
~Base2() {
    cout << "Base2::~Base2()" << endl;
}
};

class Derived: public Base1, public Base2 {
    int k_;
    public:
    Derived(int x, int y, int z): Base1(x, y), k_(z) {
        cout << "Derived::Derived()" << endl;
    }
    ~Derived() {
        cout << "Derived::~Derived()" << endl;
    }
};

int main()
{
    Base1 b1(2, 3);
    Base2 b2(3, 7);
    Derived d(5, 3, 2);
}