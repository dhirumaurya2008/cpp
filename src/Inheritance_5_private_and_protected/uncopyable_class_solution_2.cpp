/*
Problem - How we can create a uncopyable class
so that every object is unique.

*/

#include<iostream>
using namespace std;
class Uncopyable {
    protected:
    Uncopyable() {}

    ~Uncopyable() {}
    private:
    Uncopyable(const Uncopyable&);
    Uncopyable& operator=(const Uncopyable&);

};

class MyClass : private Uncopyable{
    public:
    MyClass() {

    }
    ~MyClass() {

    }
};

int main() {
    MyClass m1, m2;

    m1 = m2;
}

/*Summary-
    not elegant solution 
    has to depend on programer to do right things for every uncopyabe class 
    Better -Solution is private inheritance.
*/

