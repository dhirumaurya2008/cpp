#include<iostream>
using namespace std;
class A {
public:
void f() {
    cout << "A::f() " << endl;
}
};

class B:public A {
    public:
using A::f;
void f(int i) {
     cout << "A::f(int i) overloaded" << i << endl;
}
};

int main () {
    B b; // function call resolved at compile time.

    b.f();
    b.f(4);

}