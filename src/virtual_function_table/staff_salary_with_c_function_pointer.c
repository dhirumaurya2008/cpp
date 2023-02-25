#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef enum E_TYPE {
    Er,
    Mgr,
    Dir
}E_TYPE;

//Processing function pointer type passing the object by void*
typedef void (*psFuncPtr)(void*);
typedef struct Engineer {
    char *name_;
}Engineer;

Engineer *InitEngineer(char *name) {
    Engineer* e = (Engineer*)malloc(sizeof(Engineer));
    e->name_ = strdup(name);
   return e;
}

void ProcessEngineerSalary(void *v) {
    Engineer* e = (Engineer*)v;
    printf("%s: Processing Salary for Engineer \n", e->name_);
}

typedef struct Manager {
    char *name_;
    Engineer* reports_[10];
}Manager;

Manager *InitManager(char *name) {
    Manager* e = (Manager*)malloc(sizeof(Manager));
    e->name_ = strdup(name);
   return e;
}

void ProcessManagerSalary(void *v) {
    Manager* e = (Manager*)v;
    printf("%s: Processing Salary for Manager \n", e->name_);
}

typedef struct Director {
    char *name_;
    Manager* reports_[10];
}Director;

Director *InitDirector(char *name) {
    Director* e = (Director*)malloc(sizeof(Director));
    e->name_ = strdup(name);
   return e;
}

void ProcessDirectorSalary(void *v) {
    Director* e = (Director*)v;
    printf("%s: Processing Salary for Director \n", e->name_);
}
typedef struct Staff {
    E_TYPE type_;
    void *p;
}Staff;

int main() {
    psFuncPtr Arr[] = {ProcessEngineerSalary, ProcessManagerSalary, ProcessDirectorSalary};
    Staff staff[] = {
                        {Er, InitEngineer("Rohit")}, {Mgr, InitManager("Kamala")},
                        {Mgr, InitManager("Rajib")}, {Er, InitEngineer("Kavita")},
                        {Er, InitEngineer("Shambhu")}, {Dir, InitDirector("Ranjana")}
                    };

    for (int i = 0; i<sizeof(staff)/sizeof(Staff); i++) {
        Arr[staff[i].type_](staff[i].p);
    }

    return 0;
}