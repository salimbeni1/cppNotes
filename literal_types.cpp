/*

#include <limits>
const int min_int = std::numeric_limits<int>::min();
const int max_int = std::numeric_limits<int>::max();


Putting this all together, we are guaranteed that:

    - char, signed char, and unsigned char are at least 8 bits
    - signed short, unsigned short, signed int, and unsigned int are at least 16 bits
    - signed long and unsigned long are at least 32 bits
    - signed long long and unsigned long long are at least 64 bits

*/


#include <iostream>

using namespace std;

int main(){

 
    {
     cout <<"    --- Size \n" << endl;

     // sizeof( unsigned ... ) == sizeof( ... )

     cout <<"size of bool      : "<< sizeof(bool) << " byte(s)"<<endl; // the smallest addressable unit in C++ is at least 8 bits wide.
     cout <<"size of char      : "<< sizeof(char) << " byte(s)"<<endl;
     cout <<"size of int       : "<< sizeof(int) << " byte(s)"<<endl;
     cout <<"size of long      : "<< sizeof(long) << " byte(s)"<<endl;
     cout <<"size of long long : "<< sizeof(long long) << " byte(s)"<<endl;
     
     // with floating values
     cout <<"size of float     : "<< sizeof(float) << " byte(s)"<<endl;
     cout <<"size of double    : "<< sizeof(double) << " byte(s)"<<endl;


    }

    {
     cout <<"\n\n    --- Limitis \n" << endl;

     unsigned int ui = -1;
     cout << "unsigned int ui = -1                    -> ui = "<< ui <<endl;

     int i = 4294967295;
     cout << "int i = 4294967295                      -> i = "<< i <<endl;
     // only possible because in our implementation sizeof(int) == 4
     // C++ only quaranty a size of 2

     unsigned long ul = 4294967296UL;
     cout << "unsigned long ul = 4294967296UL         -> ul = "<< ul <<endl;
     // ul == 0 because in this implementation sizeof(long) == sizeof(int)

     unsigned long long ull = 4294967296UL;
     cout << "unsigned long long ull = 4294967296ULL  -> ull = "<< ull <<endl;

    }

    {
     cout << "\n\n   --- Carefull with floating notation \n";

     double d1 = 1e-10;
     double d2 = 1 + d1;
     double d3 = 1 - d1;
     cout << (d2 == d3);


    }

     


     

    return 0;

}