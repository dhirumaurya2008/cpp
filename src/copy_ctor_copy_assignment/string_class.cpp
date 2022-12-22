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
    ~String() {
        cout << "Dtor: ";
        print();
        free(str_);
    }

    void print() {
        cout << "( " << str_ << " : " << len_ << ")" << endl;
    }

    int len() 
    {
        return len_;
    }
};

class WrongString {
    int len_;
    char *str_;
  
    public:
    WrongString(char *s) : str_(strdup(s)), len_(strlen(str_)){
        cout << " Ctor: " ;
        print();
    }
    ~WrongString() {
        cout << "Dtor: ";
        print();
        free(str_);
    }

    void print() {
        cout << "( " << str_ << " : " << len_ << ")" << endl;
    }

    int len() 
    {
        return len_;
    }
};

int main () {
    String s = "Dhirendra";
    s.print();

    WrongString s1 = "Dhirendra";
    s1.print();
    return 0;
}

/*Summary:
Here order of len_ and str_ is important.  Here, str_ first constructred then ,
length of str_ gets calculated.
If changes order of data member then it can causes crash/or have garbage value since.
*/