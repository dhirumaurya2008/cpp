#include<errno.h>
#include<math.h>
#include<stdio.h>

int main() {
    double x, y, result;

    errno = 0;

    result = pow(x, y);

    if (errno == EDOM)
        printf("Domain error on x/y pair \n");
    else 
        if (errno == ERANGE) 
            printf("range error in result \n");
        else 
            printf("x to the y = %d \n", result);

}