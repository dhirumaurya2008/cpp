#include<iostream>
using namespace std;

int init_m1(int m) { // Function to init m1

    cout << " Init m1_ " <<  m <<  endl;
    return m;
}

int init_m2(int m) { // Function to init m2

    cout << " Init m2_ " <<  m <<  endl;
    return m;
}

class X 
{
    int m1_;
    int m2_;
    public:
    X(int m1, int m2):
     m1_(init_m1(m1)), // called first
     m2_(init_m2(m2))  // called second
     {
        cout << " Ctor: " << endl; 
     }

     ~X() {
        cout << " Dtor: " << endl;  
     }

};

class Y 
{
    int m2_;  // Order of data member swapped
    int m1_;
   
    public:
    Y(int m1, int m2):
     m1_(init_m1(m1)), // called second 
     m2_(init_m2(m2))  // called first
     {
        cout << " Ctor: " << endl; 
     }

     ~Y() {
        cout << " Dtor: " << endl;  
     }

};

int main () {

    X a(2, 3);
    Y b(2, 3);
    return 0;

}

/*
Summary:
1# Order of initialization does not depends on order mentioned in initialization list.
   It Depends on the order mentioned in data member.
Why ?
 It is because there can be mutiple Costructor where initializer list might have different order so , to make it
 consistent it's done like in that way.
*/