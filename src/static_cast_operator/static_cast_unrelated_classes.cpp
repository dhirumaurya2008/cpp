#include<iostream>
using namespace std;

#if 0
//unrelated types 
class B;
class A {
    public:
};

class B {

};

int main () {
A a;
B b;
int i = 5;
// B ==> A 
a = b; // Error 
a = static_cast<A>(b);  // Error
a = (A)b;

//int ==>A 
a = i; // error
a = static_cast<A>(i); // error
a = (A)i;
}
#else
//unrelated types 
class B;
class A {
    public:
    A(int i = 0) {
        cout << "A::A(i) " << endl;
    }

    A(const B&) {
        cout << "A::A(B&) " << endl;
    }
};

class B {

};

int main () {
A a;
B b;
int i = 5;
// B ==> A 
a = b; // Uses A::A(B&);
a = static_cast<A>(b);  // Uses A::A(B&);
a = (A)b; // Uses A::A(B&);

//int ==>A 
a = i; // Uses A::A(int);
a = static_cast<A>(i); // Uses A::A(int);
a = (A)i; // Uses A::A(int);
}
#endif

/*Summary -
When we are allowed to make changes in detination classes
*/