#include<iostream>
using namespace std;

int main () {
int i, *p = 0; long j;

/*
sizeof(i) = sizeof(int) = 4
sizeof(j) = sizeof(long) = 8
sizeof(p) = size(int*) = sizeof(void*) = 8 
*/

i = p;
p = i;
i = (int)p; // error invalid conversion from int* to int
p = (int*)i; // 

j = (long)p;
p = (int*)j; 
}