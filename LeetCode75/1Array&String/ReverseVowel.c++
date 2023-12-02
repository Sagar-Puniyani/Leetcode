/* Reversing the vowels */
#include <bits/stdc++.h>
using namespace std;

/*
Example 1:

Input: s = "hello"
Output: "holle"
Example 2:

Input: s = "leetcode"
Output: "leotcede"

*/

bool Isvowel(char ch ){
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||  ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U'){
        return true;
    }
    else{
        return false;
    }
}


string reverseVowels(string s) {
    int i = 0 ;
    int j = s.size()-1;

    cout << " s[i] = "<<s[i] <<  endl;
    cout << " s[j] = "<< s[j] <<endl;

    while(i < j ){

        if(!Isvowel(s[i])) i++;
        if(!Isvowel(s[j])) j--;

        else if (Isvowel(s[i]) && Isvowel(s[j]) ){
            swap(s[i++] , s[j--]);
        }
    }
    
    return s;
}

// another Approach of the Stack 

string ReveringTheVowels( string  s ){
    stack <char> st;

/*Inserting All the Vowels in the String */
    for(auto i = 0 ; i<= s.size()-1 ; i++){
        if(Isvowel(s[i])){
            st.push(s[i]);
        }
    }

/* Putting All the Reversed Vowel to the String */
    for(auto i = 0 ; i<= s.size()-1 ; i++){
        if(Isvowel(s[i])){
            s[i] = st.top();
            st.pop();
        }
    }

    return s;
}

int main()
{

    string s = "hello";
    s = reverseVowels(s);
    cout << " S = " << s << endl;

    string st = "LeetCode";
    st = ReveringTheVowels(st);
    cout << " st = " << st << endl;
    
    return 0;
}