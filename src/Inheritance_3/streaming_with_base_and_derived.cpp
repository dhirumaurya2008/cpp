#include<iostream>
using namespace std;

class B {
protected:
int m_data; //accessible to child and but not for others
public:
B(int x = 0) : m_data(x) {
    
}
friend ostream& operator<<(ostream& os, const B& b) {
    os << " B Object: ";
    os << b.m_data << endl; 
    return os;
}

};

class D: public B {
int m_info;
public:
D(int x = 0, int y = 0) : B(x), m_info(y) {
    
}

friend ostream& operator<<(ostream& os, const D& d) {
    os << " D Object: ";
     os << d.m_data << " ,  " ; //Here m_data is inherited and accessible since protected access
    os << d.m_info << endl;
    return os;
}

};

int main () {
    B b(0);
    cout << b ;

    D d(1,2);
    cout << d ;
    return 0;
}