

#include <iostream>
using namespace std;

class A {
    public:
    ~A(){cout<<"~A"<<endl;}
    void f(){cout<<"A.f"<<endl;}
    private:

};

class B : public A{
    public:
    void f(int a){cout<<"B.f(int)"<<endl;}
    private:

};

int main(){

    A* b = new A();
    b->A::f();
    b->A::~A();
    delete b;

    B r;
    r.A::f();
    r.A::~A();

    /*explicitley calling the destructor is not the same as delete , 
      here the destructor for r will be called twice */

    return 0;
}