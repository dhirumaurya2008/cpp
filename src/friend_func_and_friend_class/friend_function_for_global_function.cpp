#include<iostream>
using namespace std;

class MyClass {
    int data_;
    public:
    MyClass(int i) : data_(i) {

    }
   friend void display(const MyClass& a);
};

void display(const MyClass& a) {
   cout << " data_ " << a.data_; // Global function won't able to access private data member of a class.
}


int main () {
    MyClass myObj(10);
    display(myObj);
    return 0;
}

/*Summary :
- display() is non member function but friend to a MyClass.
- Always use it judiciausly as it break encapsulation principle.
*/