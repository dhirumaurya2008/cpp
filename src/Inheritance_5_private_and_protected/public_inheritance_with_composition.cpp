#include<iostream>
using namespace std;
 class B {
    public:
    B() {
        cout << " B Ctor ";
    }
    ~B() {
        cout << " ~B Dtor ";
    }
 };

class C {
    public:
    C() {
        cout << " C Ctor ";
    }
    ~C() {
        cout << " ~C Dtor ";
    }
 };

 class D : public B {
    C data_;
    public:
    D() {
        cout << " D Ctor ";
    }
    ~D() {
        cout << " ~D Dtor ";
    }
 };

 int main()
 {
    D d;
 }

 /*Summary
    Output - B Ctor  C Ctor  D Ctor  ~D Dtor  ~C Dtor  ~B Dtor 
    - Order of construction is B as it is base class, then embeded object then D
 */
