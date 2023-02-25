#include<iostream>
#include<typeinfo>
using namespace std;

class X {};
class Y : public X {

};
int main () {
X x;
cout << typeid(x).name() << " : " << typeid(&x).name() << endl; //static
X *q = &x;
cout << typeid(q).name() << " : " << typeid(*q).name() << endl; //Dynamic

Y y;
cout << typeid(y).name() << " : " << typeid(&y).name() << endl; //static
q = &y;
cout << typeid(q).name() << " : " << typeid(*q).name() << endl; //Dynamic

X &r1 = x; 
X &r2 = y;
cout << typeid(r1).name() << " : " << typeid(r2).name() << endl;

}