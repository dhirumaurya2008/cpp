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
    MyClass myObj(0, 1);
    cout << "getMember = " << myObj.getMember() << endl;
    myObj.setMember(2);
    myObj.myPubMember_ = 3;
    myObj.printMember();
    return 0;
}