#include<iostream>
using namespace std;

class A {
    int i_; // Non Pointer Data
    int *p_; // Pointer Data
    public:
    A(int i, int j): i_(i), p_(new int(j)) {
        cout << "A Ctor: " << endl;
    }
    ~A() {
        cout << "Dtor: " << this << endl; // Object Identity 
        cout << "i_" << i_ << " p_= " << p_ << " *p_ = " << *p_ << endl; // Object state
        delete p_; // Release resorce 
        p_ = NULL;  
    }
};

int main () {
    A a1(2, 3);
    A a2(a1);

    cout << "&a1 = " << &a1 << " &a2 = " << &a2 << endl;
}

/*Summary: 
If class contains pointer type then always make User Defined Copy Constructor.
*/