#ifndef CREDIT_ADDRESS_
#define CREDIT_ADDRESS_
#include<iostream>

using namespace std;
#include "credit_string.h"

class Address {
    unsigned int houseNo_;
    String street_, city_, pin_;
    public:
   Address (unsigned int hn, const char *sn, const char *cn, const char *pn) :
   houseNo_(hn),
   street_(sn),
   city_(cn),
   pin_(pn)
    {
    cout << "Address Ctor: ";
    print();
    cout << endl;
   }

    Address (const Address& add) : 
    houseNo_(add.houseNo_),
    street_(add.street_),
    city_(add.city_),
    pin_(add.pin_)
    {
    cout << "Address Copy Ctor: ";
    print();
    cout << endl;
   }

    Address& operator= (const Address& add) {
    cout << "Address Copy assignment: ";
    if ( &add != this) {
     houseNo_ = add.houseNo_;
      street_ = add.street_;
     city_= add.city_;
     pin_= add.pin_;
    }
    print();
    cout << endl ;
    return *this;
   }

    ~Address () {
    cout << "Name Dtor: ";
    print();
    cout << endl;
   }

   void print () const {
    cout << houseNo_ << " | ";
    street_.print() ;
    cout << " | ";
    city_.print();
    cout << " | ";
    pin_.print();
    cout << endl;
   }
};
#endif