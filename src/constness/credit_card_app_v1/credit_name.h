#ifndef NAME_H
#define NAME_H
#include<iostream>

using namespace std;
#include "credit_string.h"

class Name {
    String firstName_;
    String lastName_;
   public:
   Name (const char *fn, const char *ln) : firstName_(fn), lastName_(ln) {
    cout << "Name Ctor: ";
    print();
    cout << endl;
   }

    Name (const Name& name) : firstName_(name.firstName_), lastName_(name.lastName_) {
    cout << "Name Copy Ctor: ";
    print();
    cout << endl;
   }

    Name& operator= (const Name& name) {
    cout << "Name Copy assignment: ";
    if ( &name != this) {
        firstName_ = name.firstName_;
        lastName_ = name.lastName_;
    }
    print();
    cout << endl ;
    return *this;
   }

    ~Name () {
    cout << "Name Dtor: ";
    print();
    cout << endl;
   }

   void print () const {
    firstName_.print() ;
    cout << " ";
    lastName_.print();
   }
};

#endif