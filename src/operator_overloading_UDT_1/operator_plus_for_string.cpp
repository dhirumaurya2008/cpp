#include<iostream>
#include<cstdlib>
#include<cstring>
using namespace std;
typedef struct String_ {
    char *str;
}String;

String operator+ (const String& s1, const String & s2) {
    String s;
    s.str = (char*) malloc (strlen(s1.str)+strlen(s2.str)+1);
    strcpy(s.str, s1.str);
    strcat(s.str, s2.str);
    return s;
}

int main () {
    String lName, fName, name;
     fName.str = strdup("Dhirendra ");
     lName.str = strdup("Maurya");
    name = fName + lName;

    cout << "First Name " << fName.str << endl ;
    cout << "Last Name " << lName.str << endl;

    cout << "Full Name " << name.str;
}