#include<iostream>
using namespace std;

class Shapes {
    public:
    virtual void draw() = 0; // Pure vertual function , no body only signature
};

class Polygon: public Shapes {
    public:
    void draw() {
        cout << "Polygon: Draw by Tringulation " << endl;
    }
};

class ClosedConics: public Shapes {
    public:
    // draw() inherited -Pure Virtual
};

class Triangle: public Polygon {
    public:
    void draw() {
        cout << "Triangle : Draw by lines " <<  endl;
    }
};

class Quadrilateral: public Polygon {
    public:
    void draw() {
        cout << "Quadrilateral : Draw by lines " <<  endl;
    }
};

class Circle: public ClosedConics {
    public:
    void draw() {
        cout << "Circle : Draw by Breshenam Algorithm " <<  endl;
    }
};

class Ellipse: public ClosedConics {
    public:
    void draw() {
        cout << "Ellipse : Draw by .. " <<  endl;
    }
};

int main() {
    Shapes *arr[] = {new Triangle, new Quadrilateral, new Circle, new Ellipse};
    for (int i = 0; i< sizeof(arr)/sizeof(Shapes*); ++i) {
        arr[i]->draw();
    } 
}

