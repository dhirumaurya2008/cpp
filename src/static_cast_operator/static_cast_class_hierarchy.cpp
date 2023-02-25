#include<iostream>
using namespace std;

class A{

};

class B:public A {

};

int main() {
A a;
B b;

//UPCAST 
A *p = NULL;
p = &b; //implicit OK
p = static_cast<A*>(&b); //static_cast ok
p = (A*)&b; // C-style OK

//Downcast 
B *q = NULL;
q = &a; //implicit error
q = static_cast<B*>(&a); //static_cast ok but risky
q = (B*)&a; // C-style OK
}