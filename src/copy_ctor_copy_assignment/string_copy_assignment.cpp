#include<iostream>
#include<cstring>
#include<cstdlib>
using namespace std;

class String {
    char *str_;
    int len_;
    public:
    String(char *s) : str_(strdup(s)), len_(strlen(str_)){
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

    void print() {
        cout << "( " << str_ << " : " << len_ << ")" << endl;
    }

    void setChar(char c, int index) {
        str_[index] = c;
    }

    char getChar(int index) {
        return str_[index];
    }
    int len() 
    {
        return len_;
    }
};

void strToUpper(String a) {
    for (int i = 0; i<a.len(); i++) {
        a.setChar(toupper(a.getChar(i)), i);
    }

    cout << "strToUpper: ";
    a.print();
}

int main () {
    String s1 = "Dhirendra", s2 = "Beerendra";
    s1.print();
    s2.print();
    cout << "Now assigning s1 in s2 " << endl;
    s2 = s1;
    s2.print();
    //strToUpper(s);
    return 0;
}

/*Summary:
What if we did s1 = s1 ?


*/