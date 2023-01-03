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
static Data d2_; // Listed 2nd
static Data d1_; // Listed 1st
};

Data MyClass::d1_("obj1"); // Constructructed 1st
Data MyClass::d2_("obj2"); // Constructed 2nd

int main () {

}

/*Summary:
# Order of static data member does not depend on the order of their defination in the class. It depends on the 
order of their defination and intialization in the class.
*/
