/*
1# Error Incidence
2# Create Object & Raise exception 
3# Detect Exception 
4# Handle Exception 
5# Recover from Exception 
*/

//Template
int f() {
    int error;

    if (error) //Stage 1: error occurred 
        return -1;// Stage 2: generate exception object
}

int main(void) {

    if (f() != 0 ) //Stage 3: detect exception 
    {
        //Stage 4: handle exception
    }
    //Stage 5: recover
}

//Another example 
int func(int signum, int sigaction) {
    if (sigaction == ...) 
        goto sigerror;
    
    if (signum == ...) 
        goto sigerror;
    else 
        goto sigok;
    
    sigok:
        return success;
    sigerror:
        errno = EINAL;
        return(SIG_ERR);
}
