#include<iostream>
using namespace std;

class PrintJobs {
int nPages_;
public:
static int nTraypages_;
static int nJobs_;
PrintJobs(int nP):nPages_(nP) {
    ++nJobs_;
    cout << " Printing " << nP << " nPages " << endl;
    nTraypages_ = nTraypages_ - nP;
}
~PrintJobs() {
    --nJobs_;
    cout << " Now remaining jobs are = " << nJobs_ << endl;
}

};

int PrintJobs::nTraypages_ = 500; // Defination and Intialization -- load paper
int PrintJobs::nJobs_ = 0;   // Defination and Intialization -- nojob to start with

int main () {
    cout << "Jobs = " << PrintJobs::nJobs_ << endl;
    cout << "Pages = " << PrintJobs::nTraypages_ << endl;
    PrintJobs jobs1(10);
    cout << "Jobs = " << PrintJobs::nJobs_ << endl;
    cout << "Pages = " << PrintJobs::nTraypages_ << endl;
    {
        PrintJobs jobs1(10), jobs2(20);
        cout << "Jobs = " << PrintJobs::nJobs_ << endl;
        cout << "Pages = " << PrintJobs::nTraypages_ << endl;
        PrintJobs::nTraypages_ += 100;
    }
    
    cout << "Jobs = " << PrintJobs::nJobs_ << endl;
    cout << "Pages = " << PrintJobs::nTraypages_ << endl;

    return 0; 
}

/*Summary:
- Why it is unsafe ?
It is unsafe because nTraypages_ is declared public and user can play with it.
*/