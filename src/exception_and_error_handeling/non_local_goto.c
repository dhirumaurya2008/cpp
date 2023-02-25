#include<stdio.h>
#include<stdbool.h>
#include<setjmp.h>

jmp_buf jbuf;
 void g() {
    bool error = true;
    printf("g() started\n");
    if (error)
        longjmp(jbuf, 1);
    printf("g() ended\n");
    return;
 }
int main () {
    if (setjmp(jbuf) == 0) {
        printf("g() called \n");
        g();
        printf("g() returned \n");
    }
    else 
        printf("g() failed\n");
    
    return 0;
}