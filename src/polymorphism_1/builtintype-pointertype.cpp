#include<iostream>
using namespace std;

int main () {
    int i = 1, *p = &i, a[10];
    double d = 1.1, *q = &d;
    void *r;

    q = p;// error as different type pointer 
    p = q;// error as different type pointer 
    q = (double*)p;
    p = (int*)q;

    r = p;
    p = r; // void* to int*
    p = (int*)r;

    p = a;
    a = p; //constant pointer
}

/*Summary-
1. Implicit casting between different pointer is not allowed
2. any pointer can be typecast to void* but opposite is not true

*/