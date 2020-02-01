#include <string>
#include <iostream>

using namespace std;

#define y(x) 3+x

class C {
public : 
    C(int i , ...   ){}  // a all new page just for u !!! 
    C(int i){cout << "shshshsh";}
};

struct S {
    int i ;
    bool j;
};

int main(){

    string ((x)) (("DKdk")) ;

    // string y("ddd") ; --> impossible as y(x) expands
    string (y)("ddd") ;

    y(4);

    string(de);
    string g (de);
    string{de};
    string{"hhh"};
    string{}; // {} initialisation is really confusion my mind !!!

    S s0;
    cout << s0.i<< " "<<s0.j<<"\n";

    S s1 {};
    cout << s1.i<< " "<<s1.j<<"\n";
    S s2 { 1 , true };
    cout << s2.i<< " "<<s2.j<<"\n";
    S s3 {1};
    cout << s3.i<< " "<<s3.j<<"\n";
    S s4 {666,"mm"};
    cout << s4.i<< " "<<s4.j<<"\n";



    cout << "---------\n";
    S s1m ();// function  declaration !!!
    //cout << s1m.i<< " "<<s1m.j<<"\n";
    

    cout << "---------\n";
    S s1t =  {};
    cout << s1t.i<< " "<<s1t.j<<"\n";
    S s2t =  { 1 , true };
    cout << s2t.i<< " "<<s2t.j<<"\n";
    S s3t =  {1};
    cout << s3t.i<< " "<<s3t.j<<"\n";
    S s4t = (S) (S) S{true};
    cout << s4t.i<< " "<<s4t.j<<"\n";



    cout << "---CLASS----\n";

    C c0 (); // function declaration !!! 
    C c1 { 1, true} ;
   //C c2 {};
   C c3 {c1};

   C c4 {1 ,2 ,3 ,4 ,5 };

   C c5 {1};

   //decltype(8);





    cout << x;
    return 0;

}