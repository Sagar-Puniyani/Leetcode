#include <iostream>
#include <vector>
using namespace std;

void SayDigit(vector<string> words ,  int n ){
    // base case 
    if ( n == 0 )
        return;

    // processing 
    int num = n%10;
    n /= 10;

    // recursive call
    SayDigit(words , n );
    cout << words[num] << endl;
}


int main()
{
    vector <string> words = { "zero", "one" , "two" , "three" , "four" , "five" , "six" , "seven" , "eight" , "nine" , "ten"};
    int n;
    cout << "Enter the Number " ;
    cin >> n;
    SayDigit(words , n );
    return 0;
}