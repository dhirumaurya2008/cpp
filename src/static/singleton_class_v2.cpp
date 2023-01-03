#include<iostream>
using namespace std;

class Printer {
//static Printer *myPrinter;
Printer() {
    cout << " Printer ctor: " << endl;
}
~Printer() {
    cout << " Printer dtor: " << endl;
}
public:

static const Printer& printer() {
    static Printer myPrinter;
   // if (NULL == myPrinter) {
     //  myPrinter = new Printer(); 
    //}
    return myPrinter;
} 

void print(int nP) const {
    cout << " Printing " << nP << " pages " << endl;
} 

};

//Printer *Printer::myPrinter = 0;

int main () {
    Printer::printer().print(10);
    Printer::printer().print(20);

    //delete &Printer::printer();
}

/*
Summary:
1# Function local static object is used
2# No memory management overhead - So, destructor to get private
3# This is called Meyer's Singleton 
*/