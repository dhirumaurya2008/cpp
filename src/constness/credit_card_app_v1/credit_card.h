#include<iostream>
using namespace std;
#include "credit_date.h"
#include "credit_name.h"
#include "credit_address.h" 

class CreditCard {
typedef unsigned int UINT;
char *cardNumber_;
const Name holder_;
Address addr_;
Date issueDate_;
Date expiryDate_;
UINT cvv_;
public:
 // CreditCard cc(cC, "Dhirendra", "Maurya", 221, "Baker Street", "London", "NW1 6XE", 7, 2014, 6, 2016, 811);
CreditCard(const char* cNumber, const char* fn, const char *ln, UINT hn, const char* sn, const char* cn, const char* pin, UINT issueMonth, UINT issueYear, UINT expiryMonth, UINT expiryYear, UINT cvv):
holder_(fn, ln),
addr_(hn, sn, cn, pin),
issueDate_(1, issueMonth, issueYear),
expiryDate_(1, expiryMonth, expiryYear),
cvv_(cvv)
{
  cardNumber_ = new char [strlen(cNumber)+1];
  strcpy(cardNumber_, cNumber);
  cout << "Credit Card Ctor: ";
  print();
  cout << endl;
}

~CreditCard() {
    cout << "Credit card Dtor: ";
    print();
    cout << endl;
    delete [] cardNumber_;
}

void setHolder(const Name& h) {
    //holder_ = h; this won't be acceptible 
}

void setAddress (const Address& a) {
    addr_ = a;
}

void setIssueDate(const Date& d) {
    issueDate_ = d;
}

void setExpiryDate(const Date& d) {
    expiryDate_ = d;
}

void setCVV(UINT v) {
    cvv_ = v;
}
void print() const {
    cout << cardNumber_ << " ";
    holder_.print();
    cout << " ";
    addr_.print();
    cout << " ";
    issueDate_.print();
    cout << " ";
    expiryDate_.print();
    cout << " ";
    cout << cvv_;
}

};

/*Summary:
- We prefix Name holder_ with constant. Now the holder name can not be changed after construction.
- With constant prefix Name holder_ becomes constant unchangeable 
*/