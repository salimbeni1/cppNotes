#include <vector>
#include <iostream>
#include <string>

using namespace std;

vector<int> v(int = 3);

int main(){


    //using namespace std::string_literals;
    //operator""s  is from c++ 14
 
    std::string s1 = "abc\0\0def";
    std::string s2 = "abc\0\0def"s;
    std::cout << "s1: " << s1.size() << " \"" << s1 << "\"\n";
    std::cout << "s2: " << s2.size() << " \"" << s2 << "\"\n";

    int a;

    2376236128136l;

    //"sbdgdj".size();    -> char[] do not ve a method size()
    "sbdgdj"s.size();  // -> force the cast to string

    //constexpr string q1 = "jsjsj";
    //constexpr string q2 = "jsjsj"s;


    vector<int> v(a = 3);

    cout << (a = 3) << " " << v.size();

    cout << "----------" << flush << endl;

    int* i = new int(2);

    int a1 = 2;

    cout << i << endl;

    *i = a1 ;

    cout << *i << " - "<< i<< flush << endl;


    return 0;
}