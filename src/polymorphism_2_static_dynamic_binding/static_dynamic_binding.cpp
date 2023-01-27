#include<iostream>
using namespace std;
class B {
void f() {
    cout << "B::f() " << endl;
}

virtual void g() {
    cout << "B::g() " << endl;
}
};

class D: public B {
    void f() {
        cout << "D::f() " << endl;
    }
    virtual void g() {
    cout << "D::g() " << endl;
}
};

int main () {
   B b;
   D d;

   B *pb = &b;
   B *pd = &d; // Upcast
   
   B &rb = b;
   D &rd = d; //Upcast

   //Normal cases jiska object ussi ka method
   b.f(); // B::f()
   b.g(); //B::g()
   d.f(); //B::f()
   d.g(); //D::g

  /*
   Here, pb is B type pointer, now look for method f() in B,
   since it is non-virtual method it will invoke function based on 
   pointer type. And here binding done at compile time.
   */ 
   pb->f();  // B::f()
  
   /*
   Here, pb is B type pointer, now look for method g() in B,
   since it is virtual method it will invoke function based on 
   object which it is pointing. And here pointed object is of type B And here binding done at run time.
   */ 
   pb->g(); //B::g()  Dynamic Binding

     /*
   Here, pd is B type pointer, now look for method f() in B,
   since it is non-virtual method it will invoke function based on 
   pointer type . And here pointer type is of B And here binding done at compile time.
   So, B::f() will invoked
   */ 
   pd->f(); //B::f()

    /*
   Here, pb is B type pointer, now look for method g() in B,
   since it is virtual method it will invoke function based on 
   object which it is pointing. And here pointed object is of type D And here binding done at run time.
   */ 
   pd->g(); //D::g()

   rb.f(); // B::f()
   rb.g(); //B::g()
   rd.f(); //B::f()
   rd.g(); //D::g
}