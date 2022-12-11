#include <iostream>
using namespace std;

using namespace std;

int main () {

    int a = 10, &b = a ; // b is referenc of a;

    //a and b have same memory location 
    cout << "a= " << a << ", b= " << b << " | &a = " << &a << ", &b= " << &b << endl;

    //changing a appear as changes in b
    ++a;
    cout << "a= " << a << ", b= " << b << endl;

    //changing b appear as changes in a
    ++b;
    cout << "a= " << a << ", b= " << b << endl;

    return 0;
}

/*Summary :
1. a and b have same memory location, hence changing one changes the other
*/