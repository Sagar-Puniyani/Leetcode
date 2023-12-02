#include <bits/stdc++.h>
using namespace std;

// defining the type of the 
typedef int (* BinaryOperation ) (int , int );

int add ( int a , int b ){
    return a+b;
}

int sub( int a , int b ){
    return a-b;
}

int operations( int a , int b , BinaryOperation opearation){
    return opearation(a,b);
}


int main()
{
    cout << "Operation " << endl;
    int res = operations( 2 , 5 , add);
    int res1 = operations( 2 , 5 , sub);
    cout << "Res = " << res << endl;
    cout << "Res = " << res1 << endl;
    
    return 0;
}