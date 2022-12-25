#include<iostream>
using namespace std;

#include "credit_card.h"

int main () {
   // const char *cC = "534678902345678";
    CreditCard cc("534678902345678", "Dhirendra", "Maurya", 221, "Baker Street", "London", "NW1 6XE", 7, 2014, 6, 2016, 811);
    cout << endl;
    cc.print();
    cout << endl << endl;
   // cc.setHolder(Name("Beerendra", "Maurya"));
    cc.setAddress(Address(10, "Downing Street", "London", "SW1A 2AA"));
    cc.setIssueDate(Date(1, 7, 2017));
    cc.setExpiryDate(Date(1, 6, 2019));
    cc.setExpiryDate(Date(1, 6, 2019));
    cc.setCVV(127); 
    cout << endl;
    cc.print();
    cout << endl << endl;
}

/*Summary-
- Now, holder_ can not be changed.
- However, it is still possible to replace or edit the card number.This too should be disallowed.
*/

/*Summary:
 We can change - address, issue date, expiry date and cvv
 We could not change - name of holder, This should not allowed.
 */