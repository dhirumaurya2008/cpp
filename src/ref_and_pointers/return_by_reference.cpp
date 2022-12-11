#include<iostream>
using namespace std;

int& func(int &x) {
      cout << "x = " << x << " , &x= " << &x <<  endl;
      return x;
}

int func_v2(int &x) {
      cout << "x = " << x << " , &x= " << &x <<  endl;
      return x;
}

int& func_v3(int &x) {
    int t = x;
    t++;
    return t;
}

int main() {
    #if 0
    {
    int a = 10;
    cout << "a = " << a << " , &a= " << &a <<  endl;
    const int &b = func(a);  // here const is optional
    cout << "b = " << b << " , &b= " << &b <<  endl; 
    }

    {
    int a = 10;
    cout << "a = " << a << " , &a= " << &a <<  endl;
    const int &b = func_v2(a);  
    // here const is mandatory, as it is returning temp address of calling function local variable
    cout << "b = " << b << " , &b= " << &b <<  endl; 
    }
#endif
    {
       cout << "Returing reference to local variable which is risky" << endl;
        int a = 10; 
        //const int &b = func_v3(a);
        cout << "a = " << a << endl;
        // << " , b= " << b <<  endl;
        func_v3(a) = 3;
        cout << "a = " << a <<  endl;
    }
    return 0;
}

/*
Summary : 
1. Pass parameter of builtin types as value
2. Pass parameters of user defined type as reference
3. Never return local variable by reference
*/
