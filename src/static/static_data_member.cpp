#include<iostream>
using namespace std;

class MyClass {
   static int x; //Declare static 
    public:
    void get() {
        x = 15;
    }

    void print () {
        x = x + 10;
        cout << "x = " << x << endl;
    }
};

int MyClass::x = 0; // Define static data member

int main () {
    MyClass obj1, obj2; // Both will have same x
    obj1.get();
    obj2.get();
    obj1.print();
    obj2.print();
}

/*Summary:
Static data member must be defined in the global scope.
- Static data member initialized before main start.
*/