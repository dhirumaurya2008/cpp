#include<iostream>
using namespace std;
class Point {
public:
int x, y;
};

class Rect {
    public:
    Point TL;
    Point BR;
    int area() {
        return (abs(TL.x - BR.x) * abs(TL.y - BR.y));
    }
};

int main() {

Rect r = {{2, 4}, {5, 7}};
cout << "[{ " << r.TL.x << " , " << r.TL.y << " }, { " << r.BR.x << " , " << r.BR.y << " }]" ;
cout << "Area of rectangle " << r.area() << endl;
return 0; 

}