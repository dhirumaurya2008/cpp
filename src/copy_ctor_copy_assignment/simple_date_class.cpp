#include<iostream>
using namespace std;

char monthName[][4] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
char dayName[][10] = {"Monday", "Tuesday", "Wednesday", "ThurshDay", "Friday", "Saturday", "Sunday"};

class Date {
 enum Month {Jan=1, Feb, Mar, Apr, May, Jun, Jul, Aug, Sep, Oct, Nov, Dec};
 enum Day {Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday};
 typedef unsigned int UINT;
 UINT date_; Month month_; UINT year_;

 public:
 void print() {
    cout << date_ << "/" << monthName[month_-1] << "/" << year_ << endl;
   }
 Date(UINT d, UINT m, UINT y):
  date_(d),
  month_((Month)m),
  year_(y)
  {
    cout << "Ctor: " ;
    print(); 
  }

  ~Date(){
    cout << "Ctor: " ;
    print();
  }

};

int main () {
    Date d(31, 12, 1990);
    d.print();
    return 0;
}