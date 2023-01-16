#include<iostream>
using namespace std;
class A {
    private:
    int x;
    protected:
    int y;
    public:
    int z;
}
class B : public A {
    private:
    int u;
    protected:
    int v;
    public:
    int w;
    void f() {
       x; 
    }
};

class C : protected A {
    private:
    int u;
    protected:
    int v;
    public:
    int w;
    void f() {
       x; 
    }
};

class D : private A {
    private:
    int u;
    protected:
    int v;
    public:
    int w;
    void f() {
       x; 
    }
};
class E: public B { public: void f() { x; u;}};
class F: public C { public: void f() { x; u;}};
class G: public D { public: void f() { x; y; z; u;}};

void f(A& a, B& b, C& c, D& d, E& e, F& f, G& g) {
    a.z;
    b.z;
    b.w;
    c.w;
    d.w;
    e.z;
    e.w;
    f.w;
    g.w;
}

int main() {
A a;
B b;
C c;
D d;
E e;
F f;
G g;
f (a, b, c, d, e, f,g);
}