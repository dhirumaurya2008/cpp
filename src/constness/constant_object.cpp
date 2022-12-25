#include<iostream>
using namespace std;

class MyClass {
int myPriMember_;
public:
int myPubMember_;
MyClass(int mPri, int mPub):
myPriMember_(mPri),
myPubMember_(mPub)
{
  cout << " MyClass Ctor: " << endl;
}
int getMember()
{
    return myPriMember_;
}
void setMember(int val) {
    myPriMember_ = val;
}

void printMember() {
    cout << "myPriMember_ = " << myPriMember_ << " , myPubMember_ = " << myPubMember_ << endl;
}
};

int main () {
    const MyClass myObj(0, 1);
    cout << "getMember = " << myObj.getMember() << endl; // Error
    myObj.setMember(2); // Error
    myObj.myPubMember_ = 3; // Error
    myObj.printMember(); // Error
    return 0;
}

/*
Summary:
It is not allowed to invoke methods or make changes in constant object
Consequently we can not print the data memeber of class even when it is not changing it.
*/