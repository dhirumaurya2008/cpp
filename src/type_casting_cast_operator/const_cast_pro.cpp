#include<iostream>
using namespace std;

class A {
    int i_;
    public:
    A(int i) : i_(i) {}
    int get() const {return i_;};
    void set(int j) { i_ = j;}
};

void print(char *str) {
    cout << str;
}

int main () {
    const char *c = "sample test";
    print(c); // error as conversion from const char* to char*

    print(const_cast<char*>(c));
    /*Here we have just removed the constness
     and while passing to argument we have copied to another variable where we trimmed the constness
    */

   const A a(1);
   a.get();

   //a.set(5); 
   /*Error as void A::set(int) can not convert this pointer from 
   'const A' to 'A &'
   */ 

  const_cast<A&>(a).set(5); 

  const_cast<A>(a).set(5);

}