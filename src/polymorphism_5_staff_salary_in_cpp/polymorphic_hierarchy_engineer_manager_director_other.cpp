#include<iostream>
#include<string>
using namespace std;
class Employee {
protected:
    string name_;
public:
virtual void ProcessSalary() = 0;
virtual ~Employee() {

}
};
class Engineer:public Employee {

public:
    Engineer(const string& name) {
        name_ = name;
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


class SalesExecutive:public Employee {

public:
    SalesExecutive(const string& name) {
        name_ = name;
    }

    virtual void ProcessSalary() {
        cout << name_ << " : Process Salary for Sales Executive " << endl;
    }
};

int main() {
    Engineer e1("Rohit"), e2("Kavita"), e3("Shambhu");
    Manager m1("Kamala"), m2("Rajib");
    Director d1("Ranjana");
    SalesExecutive s1("Hari"), s2("Vishnu");
    Employee *staff[] = {&e1, &m1, &m2, &e2, &e3, &d1, &s1, &s2};

    for (int i =0; i< sizeof(staff)/sizeof(Employee*); i++) {
        staff[i]->ProcessSalary();
    }
    return 0;
}

/*Summary -
Advantage over c program design- 
1# Data is encapsulated
2# Flexibible Polymorphic heirarchy  makes addition of any class possible
3# App code is independent of types in the system 
4# maximum code reuse

Stil concerns -
1# Still needs to maintain employee objects in code and add them to the staff error - this error prone.

Solution - Use vector as a class and insert staff as created.
*/

