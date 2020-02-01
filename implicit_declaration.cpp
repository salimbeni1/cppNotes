#include <vector>
#include <iostream>
#include <algorithm>
#include <array>

using namespace std;




void affiche(vector<vector<double>> M){
    for( auto i : M){
        for ( auto j : i){
            cout <<" " << j;
        }
        cout << endl;
    }

}



array<array<int , 3 > , 3  > f(int);

typedef vector<vector<double>>  MatrixD;

/*
struct Ma {
    const int a ;
    static const int b;
    array<int , Ma::b> arr;
}*/

int main(){

    int a ();
    int b ();

    cout << a <<" "<< b; 

    


    vector<vector<double>> M(1 , vector<double> (1));
    vector<double> V (1,454);
    vector<vector<double>> M2(3 , V);

    M2.push_back( (vector<double>) 0 );
    // why can t I do M2.push_back( 0 ); ?? with implicit conversion  ---> explicit constructor

    vector<int> v = (vector<int>) 9;

    

    array<int  , 5+3 > () .size()  ; 



    std::max(  1  ,  2  );

    std::cout << "\n max : " << std::max( {1 ,2 ,10 , 4} ) << "\n";

    

    affiche(M2);



    return 0;
}
