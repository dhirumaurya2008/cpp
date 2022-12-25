#ifndef STRING_H
#define STRING_H
#include <iostream>
#include<cstring>
#include<cstdlib>
using namespace std;

class String {
    char *str_;
    int len_;
    public:
    String(const char *s) : str_(strdup(s)), len_(strlen(str_)){
        cout << " Ctor: " ;
        print();
    }

    String(const String &s) : str_(strdup(s.str_)), len_(strlen(str_)){
        cout << "Copy Ctor: " ;
        print();
    }

    String& operator= (const String &s) { // Copy assignment
        cout << "Copy Assignment: " ;
        if (this != &s) { // To ensure for same object like s1 = s1 
        free(str_);                    // Relese exiting memory
        str_ = strdup(s.str_);        // perform deep copy;
        len_ = s.len_;               //copy len
        print();
        }
        return *this;                 //return object for the chain assignment
    }
    ~String() {
        cout << "Dtor: ";
        print();
        free(str_);
    }

    void print() const {
        cout << "( " << str_ << " : " << len_ << ")" << endl;
    }

    int len() 
    {
        return len_;
    }
};

#endif