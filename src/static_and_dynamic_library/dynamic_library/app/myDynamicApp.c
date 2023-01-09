#include<stdio.h>
#include<stdlib.h>
#include "lib_myMath.h"
#include "lib_myPrint.h"
#include<dlfcn.h>

int main() {

	void *lib_handle; //handle of the open library 
	const char* error_msg; // Pointer to an error string 
	// Load the shared library 
	lib_handle = dlopen("../lib/lib_mylib.so", RTLD_LAZY);
	if (lib_handle) {
		int (*myMax) (int, int);
		int (*myMin) (int, int);
		void (*myPrint) (const char*, int);
		myMax = dlsym(lib_handle, "myMax");
		if (error_msg = dlerror())
			goto Error;
		myMin = dlsym(lib_handle, "myMin");
		if (error_msg = dlerror())
			goto Error;
		myPrint = dlsym(lib_handle, "myPrint");
		if (error_msg = dlerror())
			goto Error;
		//call the functions
		(*myMax)("Max(3, 5)", (*myMax)(3, 5));	
		(*myMin)("Min(3, 5)", (*myMin)(3, 5));	

		//Unload the shared library
		dlclose(lib_handle);
		return 0;
Error:
		fprintf(stderr, "%s\n", error_msg);
		exit(1);
	}
}
