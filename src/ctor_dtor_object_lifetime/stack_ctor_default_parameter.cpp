#include<iostream>
#include<cstring>
using namespace std;
class Stack {
    char *m_data;
    int m_top;
    public:

    Stack() { // size of date defaulted
        cout << "Stack Ctor called with Default data " << endl;
    } 
    //Array of size t allocated and set to data
    Stack(int t = 10) : m_data(new char[t]), m_top(-1) {
       cout << "Stack Ctor called with size = " << t << endl;
    }
    ~Stack () {
        cout << "Dtor gets called " << endl;
        delete [] m_data;
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
    // Initialization will be done by call Stack::Stack()
   char str[100] = "ABCDE"; int index, len = strlen(str);
   Stack s(len); //create a stack large enough for the problem
   for (index = 0; index < len; index++) {
    s.push(str[index]);
   }

   cout << "Reversal of the string" << endl;

   while (!s.empty()) {
    cout << s.top();
    s.pop();
   }

   cout << " " << endl;

   return 0;
} 

