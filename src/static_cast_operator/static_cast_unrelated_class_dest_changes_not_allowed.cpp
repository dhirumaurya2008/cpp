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

//A ==>int 
i = a; // error
i = static_cast<int>(a); // error
i = (int)a;
}
#else
//unrelated types 
class B;
class A {
    int i_;
    public:
    A(int i = 0): i_(i) {
        cout << "A::A(i) " << endl;
    }

    operator int() {
        cout << "A::operator int()" << endl;
        return i_;
    }
};

class B {
    public:
     operator A() {
        cout << "B::operator A()" << endl;
        return A();
    }
};

int main () {
A a;
B b;
int i = 5;
// B ==> A 
a = b; // Uses B::operator (A);
a = static_cast<A>(b);  // Uses B::operator (A);
a = (A)b; // Uses B::operator (A);

//A ==>int 
i = a; // Uses A::operator int();
i = static_cast<int>(a); // Uses A::operator int();
i = (int)a; // Uses A::operator int();
}
#endif

/*Summary -
When we are allowed to make changes in detination classes
*/