#include <iostream>
using namespace std;


int Power( int Base , int exp ){

    if ( exp == 0 ) 
        return 1;
    
    if ( exp == 1 )
        return Base;

    if ( exp % 2 == 0 ) {
        return Power( Base , exp / 2 ) * Power( Base , exp / 2 );
    }
    else {
        exp--;
        return Base * Power( Base , exp / 2 ) * Power( Base , exp / 2 ); 
    }
}


int main()
{
    int ans = Power(3 , 11 );
    cout << ans << endl;
    return 0;
}