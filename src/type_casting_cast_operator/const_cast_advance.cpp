#include<iostream>
using namespace std;

struct type {
    int i;
    type() : i(3) {}

    void m1(int v) const {
       // this->i = v; // Error can't be modified access through a const object
        const_cast<type*>(this)->i = v; 
        /*Here we have trimmed the constness and then created a temp
        variable and on that temp variable we are updating its value.
        */
    }
};

int main () {
    int i = 3;
    const int& cref_i = i;
    const_cast<int&>(cref_i) = 4; // Ok 
    cout << "i = " << i << endl;


    type t; // note, if this is const type t;
    t.m1(4);
    cout << "type::i = " << t.i << endl;

    const int j = 3; // j is declared const 
    int* pj = const_cast<int*>(&j);
    *pj = 4;
    cout << j << " " << *pj << endl;

    void (type::*mfp)(int) const = &type::m1; //pointer to member function
    //const_cast<void>(type::*)(int)->(mfp);
}