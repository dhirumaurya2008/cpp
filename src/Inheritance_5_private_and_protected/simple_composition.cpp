#include<iostream>
using namespace std;
class Engine {
    public:
    Engine(int numCylinder) {

    }
    void start() {

    }
};

class Car {
    public:
    Car() : e_(8) {}
    void start() {
        e_.start();
    }
    private:
    Engine e_; // car has-a engine
};

int main () {
    Car c;
    c.start();
}
