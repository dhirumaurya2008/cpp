#include<iostream>
using namespace std;
int main ( ) {
    int i = 2; int*pi = &i;
    long j;     
    double d = 3.7;  
    double *pd = &d;
    void *pv = 0;

    //Supressing
    i = d ; // implicit warning 
    i = static_cast<int>(d); //static_cast okay
    i = (int)d;  // c-style -Okey 

    //Promotion 
    d = i; //Implicit Okay
    d = static_cast<double>(i);//static_cast Okay
    d = (double)i;

    pv = pi; // implicit Ok
    pi = pv; // implecit Error
    pi = static_cast<int*>(pi);//static_cast ok
    pi = (int*)pv;

    j = pd; //implicit --error
    j = static_cast<long>(pd); // static_cast error
    j = (long)pd; // c-style Ok risky 
    i = (int)pd; // error sizeof(int) = 4 != 8 sizeof(double*)
}