#include <iostream>
using namespace std;

void reverse( int i , int j , string& s  ){
    // Base Case 
    if ( i > j ){
        return;
    }


    cout << "s[i] , s[j] " << s[i]  <<  s[j] <<  endl;
    swap(s[i] , s[j]);
    i++;
    j--;

    reverse(i , j , s);
}

void reverse1( int i , int j , vector<char>& s ){
    // Base Case 
    if ( i > j ){
        return;
    }


    cout << "s[i] , s[j] " << s[i]  <<  s[j] <<  endl;
    swap(s[i] , s[j]);
    i++;
    j--;

    reverse1(i , j , s);
} 

void reverseString(vector<char>& s) {
    reverse1(s);
}

int main()
{
    string  str = "Sagar";
    reverse( 0 , str.length() -1   , str );
    cout << "str = " << str << endl; 


    vector<char>  s  = {"h","e","l","l","o"};
    return 0;
}