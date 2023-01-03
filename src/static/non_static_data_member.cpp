#include<iostream>
using namespace std;

class MyClass {
    int x;
    public:
    void get() {
        x = 15;
    }

    void print () {
        x = x + 10;
        cout << "x = " << x << endl;
    }
};

int main () {
    MyClass obj1, obj2; // Both will have distinct x
    obj1.get();
    obj2.get();
    obj1.print();
    obj2.print();
}