#include<iostream>
using namespace std;
class B {

};

class D : public B {

};

int main () {
    B *p;  
    p = new D; // Static type for p: B 
    //Dynamic type for p: D
}