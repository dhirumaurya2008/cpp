#include<iostream>
using namespace std;


int main () 
{
    /*
    int &i; // Error, as no variable to refer to must be initialized | int &i = j; \\ OK
    int &j = 5; // Error, as no address to refer to as 5 is constant  | const int &j = 5; \\OK
    int &i = j + k ; // Error, only temporary address to refers to   | const int &i = j + k; \\ OK
   */
    
    int i = 2;
    int &j = i;
    //here const tells the compiler to allocate memory with value 5;
    const int &k = 5;
    // Similary, for j + k for l to refer to
    const int &l = j + k; 

    cout << i << " ,  " << &i << endl; 
    cout << j << " ,  " << &j << endl; 
    cout << k << " ,  " << &k << endl; 
    cout << l << " ,  " << &l << endl; 

    return 0;
}