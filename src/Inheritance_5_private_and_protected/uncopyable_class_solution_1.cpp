/*
Problem - How we can create a uncopyable class
so that every object is unique.

*/

#include<iostream>
using namespace std;

class MyClass {
  private:
    MyClass(const MyClass&);
    MyClass& operator=(const MyClass&);
    public:
    MyClass() {

    }
};

int main() {
    MyClass m1;
    MyClass m2;
    MyClass m3(m1);
    m1 = m2;
}

/*Summary-
    not elegant solution 
    has to depend on programer to do right things for every uncopyabe class 
    Better -Solution is private inheritance.
*/

