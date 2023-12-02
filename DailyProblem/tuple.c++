#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Declaring tuple
    tuple <char, int, float> geek;


    // Assigning values to tuple using make_tuple()
    geek = make_tuple('a', 10, 15.5);


    // Printing initial tuple values using get()
    cout << "The initial values of tuple are : ";
    cout << get<0>(geek) << " " << get<1>(geek);
    cout << " " << get<2>(geek) << endl;


    // Use of get() to change values of tuple
    get<0>(geek) = 'b';
    get<2>(geek) =  20.5;


     // Printing modified tuple values
    cout << "The modified values of tuple are : ";
    cout << get<0>(geek) << " " << get<1>(geek);
    cout << " " << get<2>(geek) << endl;

    get<0>(geek) = 'e';
    get<1>(geek) = 28;
    cout << "The modified values of tuple are : ";
    cout << get<0>(geek) << " " << get<1>(geek);
    cout << " " << get<2>(geek) << endl;


    // making the another tuple 

    tuple < int , int , char , string > t1(1 , 5 , 'd' , "javascript ") ;

    // methods of the tuple 
//  decomposition of the tuple 

    auto [a , b , c , d ] = t1;

    cout << " a = " << a << endl;
    cout << " b = " << b << endl;
    cout << " c = " << c << endl;
    cout << " d = " << d << endl;



    return 0;
}