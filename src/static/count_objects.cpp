#include<iostream>
#include<string>
using namespace std;

class MyClass {
string id_;
static int nObjCons;
static int nObjDes;
public:
MyClass(const string& id): id_(id) {
    ++nObjCons;
    cout << " ctor: " << id_ << " " ;
    getObjectLive();
}
~MyClass() {
    ++nObjDes;
    cout << " dtor: " << id_ << " " ;
    getObjectLive();
}

static int getObjConstructed() {
    return nObjCons;
}

static int getObjDestructed() {
    return nObjDes;
}

static int getObjectLive() {
    int liveObj = nObjCons - nObjDes ;
    cout << " Live Objects " << liveObj << endl;
    return liveObj;
}

};

int MyClass::nObjCons = 0;
int MyClass::nObjDes = 0;

int dummy1(MyClass::getObjectLive()); // Before any Object
MyClass  sObj("sObj");

int dummy2(MyClass::getObjectLive()); // Just Before main

int main () {
    MyClass::getObjectLive(); // Entered main 
    MyClass aObj("aObj");

    MyClass *dObj = new MyClass("dObj");
    {
       MyClass bObj("bObj");
       delete dObj;
    }
    MyClass::getObjectLive();
}


/*
Output :
Live Objects 0 // Before Any Object
 ctor: sObj  Live Objects 1 
 Live Objects 1 // Before Main starts
 Live Objects 1 // Enter main
 ctor: aObj  Live Objects 2
 ctor: dObj  Live Objects 3
 ctor: bObj  Live Objects 4
 dtor: dObj  Live Objects 3
 dtor: bObj  Live Objects 2
 Live Objects 2    // Exit main
 dtor: aObj  Live Objects 1
 dtor: sObj  Live Objects 0 
*/