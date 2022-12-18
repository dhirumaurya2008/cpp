#include<iostream>
using namespace std;
class Stack {
    char m_data[100];
    int m_top;
     public:

    Stack() : m_top(-1) {
       // m_top = -1;
       cout << "Stack Ctor called " << endl;
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
   Stack s; // Initialization will be done by call Stack::Stack()
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
1# Intialization done implicitly user won't need to worry about initialization 
*/
