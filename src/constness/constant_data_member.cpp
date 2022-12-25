/*
- Constant data member can not be changed in non-constant object
- Constant data member must be initialized on the initalization list.
*/

#include<iostream>
using namespace std;
class MyClass {
const int cPriMem_;
int priMem_;
public:
const int cPubMem_;
int pubMem_;
MyClass(int cPriMem, int priMem, int cPubMem, int pubMem) :
cPriMem_(cPriMem),
priMem_(priMem),
cPubMem_(cPubMem),
pubMem_(pubMem)
{
   cout << " MyClass Ctor " << endl;
}
int getcPri() {
    return cPriMem_;
}

void setcPri(int val) {
    //cPriMem_ = val; // Error, assignment to constant data memeber
}

int getPri() {
    return priMem_;
}

void setPri(int val) {
    priMem_ = val;
}

};

int main () {
    MyClass myObj(1,2,3,4);
    cout << "getcPri = " << myObj.getcPri() << endl;
    myObj.setcPri(6);

    cout << "getPri = " << myObj.getPri() << endl;
    myObj.setPri(7);

    cout << "cPubMem = " << myObj.cPubMem_ <<  endl;
    //myObj.cPubMem_ = 3 ; // error, assignment to constant data memeber
}