#include<iostream>
#include <vector>
#include <string>


using namespace std;

string ini = "::";

class C {
public:

    C(const C& c)
        {id = c.id+"-c";cout<< "copiing " << id <<endl;}

    C(C&& c)
        {id = c.id+"-m"; cout<< "moving "<<id <<endl;}

    C(string a):id(ini+a)
        {cout<<"creating "<<id <<endl;}

    ~C()
        {cout<<"destroying "<<id <<endl;}
private:
    string id;
};

C returnC(){
    C c("test");
    return c;
}

int main() {

    C o("o");

    C a(o); 

    vector<C> v;
    v.reserve(5);

    cout << "------ push back move"<<endl<<flush;
    v.push_back(std::move(o));
    cout << "------ push back copy"<<endl<<flush;
    v.push_back(o);
    cout << "------ push back rvalue"<<endl<<flush;
    v.push_back(C("l"));
    cout << "------ emplace back"<<endl<<flush;
    v.emplace_back("k");
    cout << "------ end"<<endl<<flush;

    /* emplace_back will direcly create the Object on the vector */

    
    cout<<"llll"<<endl<<flush;
    C b(returnC());
    cout<<"llll"<<endl<<flush;

    

    return 0;
}


