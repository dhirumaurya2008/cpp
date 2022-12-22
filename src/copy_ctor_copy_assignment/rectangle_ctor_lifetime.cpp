#include<iostream>
using namespace std;
class Point {
    int x_, y_;
public:
 Point(int x, int y): x_(x), y_(y) {
    cout << "Point Ctor: ";
    print();
    cout << endl;
 }
  ~Point() {
    cout << "Point Dtor: ";
    print();
    cout << endl;
 }

 void print () {
    cout << "( " << x_ << ", " << y_ << ")" << endl;
 }

};

class Rect {
    Point TL_;
    Point BR_;
    public:


    Rect(int tlx, int tly, int brx, int bry): TL_(tlx, tly), BR_(brx, bry) {
    cout << "Rect Ctor: ";
    print();
    cout << endl;
 }
  ~Rect() {
    cout << "Rect Dtor: ";
    print();
    cout << endl;
 }

void print() {
    cout << "[";
    TL_.print();
    cout << " " ;
    BR_.print();
    cout << "]";
}


};

int main() {

Rect r (0, 2, 5, 7);
cout << endl;
 r.print();
 cout << endl;
return 0; 

}