#include<iostream>
#include<string>
using namespace std;

class Engineer {
protected:
    string name_;
public:
    Engineer(const string& name) : name_(name){

    }

    virtual void ProcessSalary() {
        cout << name_ << " : Process Salary for Engineer " << endl;
    }
};

class Manager:public Engineer {
protected:
Engineer *reports_[10];
public:
    Manager(const string& name) : Engineer(name) {

    }

    void ProcessSalary() {
        cout << name_ << " : Process Salary for Manager " << endl;
    }
};

/*Newchange - Added Director class*/
class Director:public Manager {
protected:
Manager *reports_[10];
public:
    Director(const string& name) : Manager(name) {

    }

    void ProcessSalary() {
        cout << name_ << " : Process Salary for Director " << endl;
    }
};

int main() {
    Engineer e1("Rohit"), e2("Kavita"), e3("Shambhu");
    Manager m1("Kamala"), m2("Rajib");
    Director d1("Ranjana");
    Engineer *staff[] = {&e1, &m1, &m2, &e2, &e3, &d1};

    for (int i =0; i< sizeof(staff)/sizeof(Engineer*); i++) {
        staff[i]->ProcessSalary();
    }
    return 0;
}

/*Summary -
Advantage over c program design- 
1# Data is encapsulated
2# Polymorphic heirarchy removes the need for explicit E_TYPE
3# App code is independent of types in the system 
4# High Code reused

Stil concerns -
1# Difficult to add employee type that is not part of this hierarchy 
example Sales Division

Solution - Use an abstract base class for emplyees.
*/

