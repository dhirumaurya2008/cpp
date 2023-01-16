#include<iostream>
using namespace std;
class B {
    protected:
    B() {
        cout << " B " ;
    }

    ~B() {
        cout << " ~B " ;
    }
};

class C: public B {
    protected:
    C() {
        cout << " C " ;
    }

    ~C() {
        cout << " ~C " ;
    }
};

class D: private C {
     //C data_;
     public:
    D() {
        cout << " D " ;
    }

    ~D() {
        cout << " ~D " ;
    }
};
int main() {
    D d;
}