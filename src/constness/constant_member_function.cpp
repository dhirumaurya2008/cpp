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
int getMember () const
{
    return myPriMember_;
}
void setMember(int val) {
    myPriMember_ = val;
}

void printMember() const {
    cout << "myPriMember_ = " << myPriMember_ << " , myPubMember_ = " << myPubMember_ << endl;
}
};

int main () {
    MyClass myObj(0, 1);
    // Non Constant object , it can invoke all member function and update data member
    cout << "getMember = " << myObj.getMember() << endl; 
     myObj.setMember(2); // Error
     myObj.myPubMember_ = 3; // Error
    myObj.printMember(); 

    /*Constant object, can not allow any change*/
    const MyClass myConstObj(5, 6);
    cout << "getMember = " << myConstObj.getMember() << endl; 
     //myConstObj.setMember(2); // Error // It can not invoke non-contant member function
     //myConstObj.myPubMember_ = 3; // Error
    myConstObj.printMember();
    return 0;
}

/*
Summary:
It is not allowed to invoke methods or make changes in constant object
Consequently we can not print the data memeber of class even when it is not changing it.
*/