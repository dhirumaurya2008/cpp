#include<iostream>
using namespace std;

class Printer {
static Printer *myPrinter;
Printer() {
    cout << " Printer ctor: " << endl;
}
public:

~Printer() {
    cout << " Printer dtor: " << endl;
}

static const Printer& printer() {
    if (NULL == myPrinter) {
       myPrinter = new Printer(); 
    }
    return *myPrinter;
} 

void print(int nP) const {
    cout << " Printing " << nP << " pages " << endl;
} 

};

Printer *Printer::myPrinter = 0;

int main () {
    Printer::printer().print(10);
    Printer::printer().print(20);

    delete &Printer::printer();
}