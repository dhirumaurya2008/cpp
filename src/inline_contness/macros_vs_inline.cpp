/*
- SQUARE(a+1), SQUARE(++a) will fail in macros case
- SQUARE(++a) does not check type

inline - is Directive 
* expanded at the place of call
* efficient in execution as no stack is formed 
* parameters type checking is robust
* errors are checked during compilation
* avialable to debugger in debug mode
*/
#include<iostream>
using namespace std;
#if 0
#define SQUARE(x) x * x 

#else 
inline int SQUARE(int x) 
{
return x * x;
}
#endif
int main () 
{
int a = 3, b;
b = SQUARE(a);
cout << "Sqaure = " << b << endl;
return 0;
}


