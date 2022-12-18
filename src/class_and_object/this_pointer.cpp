#include<iostream>
using namespace std;

class MyClass {
    public:
    int m1, m2;
    void func (int k1, int k2) {
        m1 = k1;            //Implicit access without this pointer
        this->m2 = k2;      // Explicit access without this pointer
        cout << "ID " << this << endl; // Identity of the object;
    }
};

int main () {
MyClass myClass;

myClass.func ( 2, 3);
cout << "myClass Object Adress " << &myClass << endl ; // Address Identity of the object;
cout << "myClass.m1 = " << myClass.m1 <<  "myClass.m2 = " << myClass.m2 << endl;
return 0;
}

/*
Summary:
1# this pointer implicitly passed to methods
*/