#include<iostream>
using namespace std;
/*Casting allowed between 
1# numerical types 
2# nemerical and pointer type
3# pointer to different numerical types and void
 
*/
double f (int i, int j) {
    
    return (double) i/j;

}

int main () {

    cout << "Printing return value " << f(2, 3) << endl;

    int i = 3;
    double d = 2.5;

    double result = d/i; // i is cast to double and used

    cout << "Implicit casting " << result << endl;

    /* Implicit and explicit casting*/
    {
    int i = 3;
    double d = 2.5;
    double *p = &d;

    d = i; // Implicit casting from int to double
    i = d; // Implicit casting from double to int with warning

    d = (double) i; // explicit int to double 
    i = (int)d; // explicit double to int


    //i = p; // error '=' can not convert from double* to int
    //i = (int)p;  // explicit double* to int
    }

}

/*

Compiler generate 
double f (int i, int j) {
    double temp_i = i; // Exlicit conversion by double in temporary
    double temp_j = j; // Emplicit conversion int temporary mixed mode
    return temp_i/temp_j;
}
*/