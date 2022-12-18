#include<iostream>
using namespace std;
class Stack {
    char m_data[100];
    int m_top;
     public:

    void init () {
        m_top = -1;
    }
    bool empty() 
    {
        return (m_top == -1);
    }

    char top () {
        return m_data[m_top];
    }

    void push (char x) {
        m_data[++m_top] = x;
    }

    void pop () {
        --m_top;
    }
};


int main ()
{
   Stack s;
   s.init(); // clean initialization
   char str[100] = "ABCDE"; int index;

   for (index = 0; index < 5; index++) {
    s.push(str[index]);
   }

   cout << "Reversal of the string" << endl;

   while (!s.empty()) {
    cout << s.top();
    s.pop();
   }

   return 0;
} 

/*
Summary :
1# There is clean initialization but it has issues 
    #a. Init has to be called before any of member function
    #b. If call at in between the it would get reset
*/
