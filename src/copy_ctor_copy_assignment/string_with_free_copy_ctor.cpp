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
    String s = "Dhirendra";
    s.print();
    strToUpper(s);
    return 0;
}

/*Summary:
When strToUpper gets called, then copy constructor gets invoked.
Issue :-  str_ of actual argument and formal argument pointing to same value.
*/