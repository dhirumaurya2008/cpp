#include<iostream>
using namespace std;

class Person {

};

class Student: private Person{

};
void eat(const Person& p) {

} //anyone can eat 
void study(const Student& s){

} // only student study


int main()
{
Person p; //p is a Person
Student s; //s is a Student
eat(p); // fine as p is Person
eat(s); // fine as s is Student, and Student is-a Person 

}

/*Summary
    - compiler will not converts a derived class object into base class object if inheritance is private.
*/
