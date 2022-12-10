#include<iostream>
using namespace std;
/*Pointer to constant data- Pointee data can not be changed*/
/*constant pointer- Pointer can not be changed*/
int main() {
//Case 1: pointer and pointee combination without constant
int m = 4;
int n = 5;
int *p = &n; //p point n , *p is 5

n = 6 ; //*p and n changes to 6
*p = 7; //*p and n changes t0 7 , POINTEE changes

p = &m; //p points to m , Pointer changes changes
*p = 8;

// Case 2: pointer to constant data
{
  int m;
  const int n = 5;
  const int *p = &n;
#if 0
  n = 6;  //Error
  *p = 7 ; //Error
  p = &m; //OK
  *p = 8; // Error
   m = 9; //OK
#endif
  int *q = n;
}
// Case 3: constant pointer 
{
 int m = 4, n = 5;
 int *const p = &n;
 n = 6; //OK
*p = 7; // OK
 p = &m; // Error as pointer is constant 
}
// Case 4: constant pointer and constant pointee 
{
const int m = 4;
const int n = 5;
const int* const p = &n;
n = 6; //Err as n is constant, it can not be changed
*p = 7; // Err as p is pointing to constant pointee
p = &m;


}
// Finally to decide the const-ness draw a mental line through *
{
int n = 5;
int *p = &n; // Non-constant Pointer and Non-constant Pointee
const int *p = &n; // Non-Constant Pointer and Constant Pointee
int * const p = &n; //Constant Pointer and Non-Constant Pointee
const int * const p = &n ; //Constant Pointer and Constant Pointee
}
return 0;
}
