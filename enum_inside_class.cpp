#include<iostream>

class A {
public:
    typedef enum {
        enum1 = 10,
        enum2 = 20
    }enumA;

void fpu(enumA a){

    fpr(a);
    fpr(enum1);
}

private :
void fpr(int a){
    std::cout<<"here"<<a<<std::endl;
}

};


int main(){
    A a;
    a.fpu(A::enum2);
    return 0;
}