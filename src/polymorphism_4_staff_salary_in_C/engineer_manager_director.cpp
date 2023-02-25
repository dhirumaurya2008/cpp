
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef enum _E_TYPE {
    Er,
    Mgr,
    Dir
} E_TYPE;

typedef struct _Engineer
{
    char *name_;
}Engineer;

Engineer *InitEngineer(const char *name) {
    Engineer *e = (Engineer*)malloc(sizeof(Engineer));
    e->name_ = strdup(name);
    return e;
}
 void ProcessSalaryEngineer(Engineer *e) {
    printf("%s: Process Salary for Engineer\n", e->name_);
 }

typedef struct _Manager
{
    char *name_;
    Engineer *reports_[10];
}Manager;

Manager *InitManager(const char *name) {
    Manager *m = (Manager*)malloc(sizeof(Manager));
    m->name_ = strdup(name);
    return m;
}
 void ProcessSalaryManager(Manager *m) {
    printf("%s: Process Salary for Manager\n", m->name_);
 }

 typedef struct _Director
{
    char *name_;
    Manager *reports_[10];
}Director;

Director *InitDirector(const char *name) {
    Director *m = (Director*)malloc(sizeof(Director));
    m->name_ = strdup(name);
    return m;
}
 void ProcessSalaryDirector(Director *m) {
    printf("%s: Process Salary for Director\n", m->name_);
 }


typedef struct _Staff
{
    E_TYPE type;
    union 
    {
        Engineer *pE;
        Manager *pM;
        Director *pD;
    };   
}Staff;

int main ()
{
    Staff allStaff[10];
    allStaff[0].type = Er; allStaff[0].pE = InitEngineer("Rohit");
    allStaff[1].type = Mgr; allStaff[1].pM = InitManager("Kamala");
    allStaff[2].type = Mgr; allStaff[2].pM = InitManager("Rajib");
    allStaff[3].type = Er; allStaff[3].pE = InitEngineer("Kavita");
    allStaff[4].type = Er; allStaff[4].pE = InitEngineer("Shambhu");
    allStaff[5].type = Dir; allStaff[5].pD = InitDirector("Dhiru");

    for (int i =0; i<6; i++) {
        switch(allStaff[i].type) {
            case Er:
                ProcessSalaryEngineer(allStaff[i].pE);
                break;
            case Mgr:
                ProcessSalaryManager(allStaff[i].pM);
                break;
            case Dir:
                ProcessSalaryDirector(allStaff[i].pD);
                break;
            default:
                printf("Invalid Staff type\n");
                break;

        }
    }

    return 0;
}
