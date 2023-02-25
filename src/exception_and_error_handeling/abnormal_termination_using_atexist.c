#include<stdio.h>
#include<stdlib.h>

static void atexist_handler_1(void) {
    printf("within 'atexist_handler_1' \n");
}

static void atexist_handler_2(void) {
    printf("within 'atexist_handler_2' \n");
}

int main () {
    atexit(atexist_handler_1);
    atexit(atexist_handler_2);
    exit(EXIT_SUCCESS);
    printf("This line should never appear\n");
    return 0;
}