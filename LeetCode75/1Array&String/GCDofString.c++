#include <bits/stdc++.h>
using namespace std;


/*Example 1:

Input: str1 = "ABCABC", str2 = "ABC"
Output: "ABC"
Example 2:

Input: str1 = "ABABAB", str2 = "ABAB"
Output: "AB"
Example 3:

Input: str1 = "LEET", str2 = "CODE"
Output: ""
*/
int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

string gcdOfStrings(string str1, string str2) {
    return (str1 + str2 == str2 + str1 )
            ? str1.substr( 0 , gcd(str1.size() , str2.size()))
            :"";
}

int main()
{
    string str1 = "ABCABCABC";
    string str2 = "ABC";
    

    std::string str = "Hello, World!";
    
    // Create a string_view from a substring of str.
    std::string_view view(str.c_str() + 7, 5); // "World"
    
    // Use the string_view to print part of the string.
    std::cout << "Substring: " << view << std::endl;
    
    // You can also use string_view in functions that take it as an argument.
    // For example, a function that prints the length of the view:
    std::cout << "Length of the view: " << view.size() << std::endl;

    return 0;
}