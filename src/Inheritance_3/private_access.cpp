#include<iostream>
using namespace std;

class B {
private:
int m_data; //Inaccessible to child and others
public:
B(int x = 0) : m_data(x) {
    
}
void Print() {
    cout << " B Object: " <<  endl;
    cout << m_data << endl; 
}
};

class D: public B {
int m_info;
public:
D(int x = 0, int y = 0) : B(x), m_info(y) {
    
}
void Print() {
    cout << " D Object: ";
   // cout << m_data << " ,  " ; //Here m_data is inherited but inaccessible
    cout << m_info << endl;
}
};

int main () {
    B b(0);
    D d(1,2);

   // b.m_data = 5; // Inaccessible since it's private

    b.Print();
    d.Print();
    return 0;
}