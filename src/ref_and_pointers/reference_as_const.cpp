#include<iostream>
using namespace std;
int ref_const (const int &x) {
    //++x; // Error not allowed
    return (x+1);
}

int main () {
  int a = 10, b;

  b = ref_const(a);
  cout << "a = " << a << " , b= " << b <<  endl;
}

/*Summary :
1. use constant when we do not want value gets changed in calling function 
*/