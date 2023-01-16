#include<iostream>
using namespace std;

class B {
    int data1B;
    public:
    int data2B;
};

class D : public B {

   
    public: 
    int infoD_;

};



int main () {
    B b;
    D d;
    //cout << b.data1B << b.data2B << endl ;
     cout << b.data2B << endl ;
    //cout << d.data1B << endl;
    cout << d.data2B << " | " << d.infoD_ << endl;
}

/*
Summary - 
- d can not access data1B even though it is part of d!
- d can access data2B
*/