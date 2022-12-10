#include<iostream>
#include<cstring>
using namespace std;
int main () {

//Case 1- Non-constant string, and non-constant pointer to string
char *str = strdup("Dhirendra Maurya");
str[0] = 'N'; //Editing is allowed
cout << str << endl;
str = strdup("Beerendra Maurya");
cout << str << endl;

//Case 2- Constant string to non-constant pointer | To stop changing the name 
{
const char *str = strdup("Dhirendra Maurya");
str[0] = 'N'; //Error Editing is not allowed
cout << str << endl;
str = strdup("Beerendra Maurya");
cout << str << endl;
}

//Case 3- Constant string to constant pointer to string | to stop both
{
const char * const str = strdup("Dhirendra Maurya");
str[0] = 'N'; //Error Editing is not allowed
cout << str << endl;
str = strdup("Beerendra Maurya"); //Can not change the name
cout << str << endl;
}

	return 0;
}
