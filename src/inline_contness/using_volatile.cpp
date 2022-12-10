#include<iostream>
using namespace std;

#if 0
static int i;

void fun(void)
{
 i = 0;
 while ( i != 100); 
 //while ( 1 ); //Compiler optimizes it 
}

#else 

static volatile int i;

void fun(void)
{
 i = 0;
 while ( i != 100); //Compiler won't optimizes it 
}
#endif

int main () {
 fun();
return 0;
}
