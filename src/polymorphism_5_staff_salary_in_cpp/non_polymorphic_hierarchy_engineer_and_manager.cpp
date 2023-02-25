#include<iostream>
#include<string>
using namespace std;

enum E_TYPE {Er, Mgr};

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

int main() {
    Engineer e1("Rohit"), e2("Kavita"), e3("Shambhu");
    Manager m1("Kamala"), m2("Rajib");
    Engineer *staff[] = {&e1, &m1, &m2, &e2, &e3};

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
        default:
            cout << " Invalid Staff " << endl;
            break;
        }
    }
    return 0;
}


