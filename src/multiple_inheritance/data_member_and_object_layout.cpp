#include<iostream>
using namespace std;

class Base1 {
    protected:
    int i_,data_;
    public:
};

class Base2 {
    protected:
    int j_, data_;
    public:

};

class Derived: public Base1, public Base2 {
    int k;
    public:
}

// Summary Object Derived has two data_ member 
// Ambibuity to be resolved with base class name Base1::data_, Base2::data_

