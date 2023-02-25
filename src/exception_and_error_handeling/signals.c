#include <stdio.h>
#include <stdlib.h>
#include<signal.h>

void SignalHandler(int signal) {
    printf("Application aborting ...\n");
}

int main() {
    typedef void (*SignalHandlerPointer)(int);

    SignalHandlerPointer prevHandler;

    prevHandler = signal(SIGABRT, SignalHandler);

    abort();
    return 0;
}