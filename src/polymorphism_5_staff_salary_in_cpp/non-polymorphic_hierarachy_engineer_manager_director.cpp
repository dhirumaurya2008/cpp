#include<iostream>
#include<string>
using namespace std;

/*Newchange - Added Dir*/
enum E_TYPE {Er, Mgr,Dir};

class Engineer {
protected:
    string name_;
    E_TYPE type_;
public:
    Engineer(const string& name, E_TYPE e = Er) : name_(name), type_(e) {

    }

    E_TYPE GetType() {return type_;}

    void ProcessSalary() {
        cout << name_ << " : Process Salary for Engineer " << endl;
    }
};

class Manager:public Engineer {
protected:
Engineer *reports_[10];
public:
    Manager(const string& name, E_TYPE e = Mgr) : Engineer(name, e) {

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
    Director(const string& name, E_TYPE e = Dir) : Manager(name, e) {

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
        E_TYPE t = staff[i]->GetType();

        switch (t)
        {
        case Er:
            staff[i]->ProcessSalary();
            break;
        
        case Mgr:
            ((Manager*)staff[i])->ProcessSalary();
            break;
        case Dir: /*Newchange - Added new case*/
            ((Director*)staff[i])->ProcessSalary();
            break;

        default:
            cout << " Invalid Staff " << endl;
            break;
        }
    }
    return 0;
}

/*Summary -
Advantage over c program design- 
1# Data is encapsulated
2# Hirarchy factors common data members
3# Ctr/Dtor to manage lifetime
4# E_Type subsumed in class, no need for union 
5# Code reused

Stil concerns -
1# Type of object managed by E_Type
2# Addition to new type needs to be add 
    - new enum type in class 
    - Additional Switch case

Solution - Use Polymorphic hierarchy with dynamic dispatch.
*/

