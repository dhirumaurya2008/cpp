#include<iostream>
using namespace std;

class MyClass {
    int data;
    public:
    MyClass(int d): data(d) {

    }

    ~MyClass() {

    }

    //Pre-Increment , Operate and return the operated Object.
    MyClass& operator++() { 
        ++data;
        return *this;
    }

    MyClass operator++(int) {
        MyClass x(data);
        ++data;
        return x;
    }

    void display() {
        cout << "Data = " << data << endl;
    }
};

int main () {
    MyClass obj1(8); 
    obj1.display();
    cout << "Post fix ++ " <<  endl;
    MyClass obj2 = obj1++;
    cout << " Displaying obj2 " ;
    obj2.display(); 
    cout << " Displaying obj1 " ;
    obj1.display();

    cout << "Pre fix ++ " <<  endl;
    obj2 = ++obj1;

    cout << " Displaying obj2 " ;
    obj2.display(); 
    cout << " Displaying obj1 " ;
    obj1.display();

    return 0;
}


/*
Summary:
- Pre-Operator first perform the operation and then return the object. Hence its reurn type should be MyClass& and 
    it should return *this.
- Post operator should perform the operation after its returns the original value. hence it should copy the,
    original object in temporary MyClass x; and then return x, It should return MyClass by value.
*/