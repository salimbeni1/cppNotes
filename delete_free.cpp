#include <iostream>



using namespace std;

class A {
    public:
    A():a(1){}
    ~A(){cout<<"~A()"<<endl; a = 404;}
    int a;
};

int main(){

    /*
    delete is faster than free() because an operator is always faster than a function

    delete free the allocated memory and calls destructor. 
    But free() de-allocate memory but does not call destructor.

    delete and free dealocate for the program not the OS !
    */


    A* a1 = new A();

    A* a2 = new A();

    cout<<"-1- a1 : "<<a1->a <<endl; // 1

    a1->~A(); // met a 0 les attributs

    cout<<"-2- a1 : "<<a1->a <<endl; // 0

    free(a1); // libere la memoire , le contenu est donc "Undefined Behavior"
    
    cout<<"-3- a1 : "<<a1->a <<endl; // 988968

    delete a2 ; // 

    delete a2 ; // double delete Undefined Behavior

    cout << a1 << " " << a2 << endl;

    cout<<"-4- a2 : "<<a2->a <<endl; // 0 "Undefined Behavior" ?? 

    // free(a1); cannot free twice

    // cout <<"-5- a : "<<a1->a <<endl; // 0 ?

    return 0;
}