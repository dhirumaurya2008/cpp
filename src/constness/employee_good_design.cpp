#include<iostream>
using namespace std;
class Employee {
const string name_;
const string id_;
mutable double salary_;
public:
Employee(string name = "No Name", string id="000-00-0000", double salary = 0) :
name_(name),
id_(id)
//salary_ = salary
{
   salary_ = salary;
}

string getName() const;
void setName(string name);
string getid() const;
void setid(string id);
double getSalary() const {
    return salary_;
};
void setSalary(double salary) ;
void promote(double salary) const {
    salary_ = salary;
}
};

int main () {
    Employee jhon("Dhiru", "007", 50000.0);
    jhon.promote(20000.0);
    cout << "Jhon Salary after promotion is ";
    cout << jhon.getSalary();
}