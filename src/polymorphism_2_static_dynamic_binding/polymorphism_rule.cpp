#include<iostream>
using namespace std;

class A {
public:
void f() {  // Non Virtual 
    cout << " A::f() " << endl;
}

virtual void g() { //Virtual
    cout << " A::g() " << endl; 
}

void h()  { // Non-vitual method
   cout << " A::h() " << endl;  
}
};

class B:public A {
public:
void f() {  // Non Virtual 
    cout << " B::f() " << endl;
}

void g() { //Virtual since defined virtual in base class
    cout << " B::g() " << endl; 
}

virtual void h()  { // Non-vitual method
   cout << " B::h() " << endl;  
}
};

class C:public B {
public:
void f() {  // Non Virtual 
    cout << " C::f() " << endl;
}

void g() { //Virtual since defined virtual in base class
    cout << " C::g() " << endl; 
}

void h()  { // Virtual since defined virtual in base class B
   cout << " C::h() " << endl;  
}
};

int main () {
    B *q = new C;
    A *p = q;

    /*p -> type A
    Look into class A for method f() which is non vitual 
    Since f() is non virtual  so binding done using static and 
    it will invoke A::f()
    */
    p->f();

    /*p -> type A
    Look into class A for method g() which is  vitual 
    Since g() is  virtual  so binding done using dynamic and 
    it will invoke C::g() as q containing C class object. 
    */
    p->g();

    /*p -> type A
    Look into class A for method h() which is  non-vitual 
    Since h() is  non virtual  so binding done using static and 
    it will invoke A::h() as pointer type decide function invoked
    based on pointer type or type of object it pointing to. 
    */
    p->h();

    /*q -> type B
    Look into class B for method f() which is non vitual 
    Since f() is non virtual  so binding done using static and 
    it will invoke B::f()
    */
    q->f();

    /*q -> type B
    Look into class B for method g() which is  vitual 
    Since g() is  virtual  so binding done using dynamic and 
    it will invoke C::g() as q containing C class object. 
    */
    q->g();

    /*q -> type B
    Look into class B for method h() which is  vitual 
    Since h() is  virtual  so binding done using dynamic and 
    it will invoke C::h() as object which it pointing to decide function invoked. 
    */
    q->h();

}


/*Summary 
To decide whether function will invoked of base class or derived class
that will be done using 2 ways -
1# pointer type (non-virtual methods)
2# object which it pointing to   (virtual methods)
*/