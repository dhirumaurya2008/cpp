class Student;
class Faculty;
class TA: public Student, public Faculty;


//Diamond Hierarchy
class Employee;
class Manager: public Employee;
class Director: public Employee;
class ManagingDirector:public Manager,public Director;
