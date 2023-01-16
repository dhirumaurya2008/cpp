#include<iostream>
using namespace std;

class B {
protected:
int m_data; //accessible to child and but not for others
public:
B(int x = 0) : m_data(x) {
    cout << " B::B(int): " << m_data << endl ;
}

~B(){
    cout << " ~B::B(int): " << m_data << endl ;
}

};

class D: public B {
int m_info;
public:
D(int x, int y) : B(x), m_info(y) {
    cout << " D::D(int, int): " << m_data << " , " << m_info << endl ;
}
D(int x) : m_info(x) {
    cout << " D::D(int): " << m_data << " , " << m_info << endl ;
}

~D(){
    cout << " ~D::D(int, int): " << m_data << " , " << m_info << endl ;
}
};

int main () {
    B b(5);
    D d1(1,2);
    D d2(3);
    return 0;
}