#include<iostream>
using namespace std;

class PrintJobs {
int nPages_;
static int nTraypages_;
static int nJobs_;
public:
PrintJobs(int nP):nPages_(nP) {
    ++nJobs_;
    cout << " Printing " << nP << " nPages " << endl;
    nTraypages_ = nTraypages_ - nP;
}
~PrintJobs() {
    --nJobs_;
    cout << " Now remaining jobs are = " << nJobs_ << endl;
}

static int getJobs() {
    return nJobs_;
}

static int checkPages() {
    return nTraypages_;
}

static void loadPages(int nP) {
    nTraypages_ += nP;
}

};

int PrintJobs::nTraypages_ = 500; // Defination and Intialization -- load paper
int PrintJobs::nJobs_ = 0;   // Defination and Intialization -- nojob to start with

int main () {
    cout << "Jobs = " << PrintJobs::getJobs() << endl;
    cout << "Pages = " << PrintJobs::checkPages() << endl;
    PrintJobs jobs1(10);
    cout << "Jobs = " << PrintJobs::getJobs() << endl;
    cout << "Pages = " << PrintJobs::checkPages() << endl;
    {
        PrintJobs jobs1(10), jobs2(20);
        cout << "Jobs = " << PrintJobs::getJobs() << endl;
        cout << "Pages = " << PrintJobs::checkPages() << endl;
        PrintJobs::loadPages(100);
    }
    
    cout << "Jobs = " << PrintJobs::getJobs() << endl;
    cout << "Pages = " << PrintJobs::checkPages() << endl;

    return 0; 
}

/*Summary:
- This is safe version  as we have not given control to user.
- If user have to change any thing they will invoke statik member function to work on static
   data member.
*/