#include<iostream>
using namespace std;
class Data {
string id_;
public:
Data(const string &id): id_(id) {
    cout << " Ctor " << id_ << endl;
}
~Data() {
    cout << " Dtor: " << id_ << endl;
}
};

class MyClass {
static Data d1_; // Listed 1st
static Data d2_; // Listed 2nd
};

Data MyClass::d1_("obj1"); // Constructructed 1st
Data MyClass::d2_("obj2"); // Constructed 2nd

int main () {

}
