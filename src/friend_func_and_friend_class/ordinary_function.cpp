#include<iostream>
using namespace std;

class MyClass {
    int data_;
    public:
    MyClass(int i) : data_(i) {

    }

};

void display(const MyClass& a) {
   cout << " data_ " << a.data_; // Global function won't able to access private data member of a class.
}


int main () {
    MyClass myObj(10);
    display(myObj);
    return 0;
}

/*Summary: 
How global function can access the data member's of a class when 
encapsulation is in place and without get/set ?
Ans - frind function.
*/