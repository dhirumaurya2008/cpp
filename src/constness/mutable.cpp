#include<iostream>
using namespace std;

class MyClass {
int mem_;
mutable int mutableMem_;
public:
 MyClass(int m, int mn) :
 mem_(m), mutableMem_(mn) {
    cout << "MyClass Ctor: " <<  endl;
 }
 int getMem() const {
    return mem_;
 }
 void setMem(int i) {
    mem_ = i;
 }

 int getMutableMem() const {
    return mutableMem_;
 }

 void setMutableMem(int i) const {
    mutableMem_ = i; // OK to change mutable
 }
};
int main () {
const MyClass myConstObj(1, 2);
cout << myConstObj.getMem() <<  endl;
//myConstObj.setMem(3);
cout << myConstObj.getMutableMem() << endl;
myConstObj.setMutableMem(4);
cout << myConstObj.getMutableMem() << endl;
return 0;
}

/*Summary
- setMutableMem() is a constant member function so that constant myConstObj can invoke it.
- setMutableMem() can still set mutableMem_ because mutableMem_ is mutable
- In contrast, myConstObj can not invoke setMem() and hence mem_ cannot be changed.
*/