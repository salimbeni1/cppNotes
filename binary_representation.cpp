#include <iostream>
#include <string>
#include <bitset>
#include <climits>

template<typename T>
void show_binrep(const T& a)
{
    const char* beg = reinterpret_cast<const char*>(&a);
    const char* end = beg + sizeof(a);
    while(beg != end)
        std::cout << std::bitset<CHAR_BIT>(*beg++) << ' ';
    std::cout << '\n';
}

using namespace std;

int main(){

    string s = "ooo";
    char a = 'a';

    cout << ("ooo"+s) << endl;
    show_binrep("h");
    cout << ("hhhhhhpo"+a) << endl;
    show_binrep(("ooo"+a));
    cout << (s+a) <<endl;
    show_binrep((s+a));

    return 0;
}
