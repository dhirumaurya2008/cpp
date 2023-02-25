#include<iostream>
using namespace std;

class Person {
public:
Person(int x) {
    cout << "Person::Person(int)" << endl;
}
};

class Faculty:public Person {
    public:
    Faculty(int x): Person(x) {
    cout << "Faculty::Faculty(int)" << endl;
    }
};

class Student:public Person {
    public:
    Student(int x): Person(x) {
    cout << "Student::Student(int)" << endl;
    }
};

class TA: public Faculty, public Student {
    public: TA(int x): Student(x), Faculty(x) {
    cout << "TA::TA(int)" << endl;
    }
};

int main() {
    TA ta(30);
}

//Problem: Two instances of base class present in TA object