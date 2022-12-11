#include<iostream>
using namespace std;

//Function prototype 
void func(
    int&, //Reference parameter
    int); //Value parameter
int main () {
   
   int a = 20;
   cout << "a = " << a << " , &a= " << &a <<  endl;
   func(a, a);
    return 0;
}

void func(int &b, int c) 
{
    cout << "b = " << b << " , &b= " << &b <<  endl;
    cout << "c = " << c << " , &c= " << &c <<  endl;
}

/*Summary:
1. Actual param a and Formal param b , get the same address in called function
2. Actual param a and Formal param c , get the different address in called function
*/