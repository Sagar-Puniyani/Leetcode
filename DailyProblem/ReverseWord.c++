// Reverse Words in a String III

#include <bits/stdc++.h>
using namespace std;

string reverseWords(string s) {
    stack<char> sentence ;
    string res;

    for ( int i=0 ; i<s.size() ; i++){
        if (s[i] != ' ') sentence.push(s[i]);

        else if( s[i] == ' ') {
            while( !sentence.empty()){
                res += sentence.top();
                sentence.pop();
            }
            res += " ";
        }
    }
    while( !sentence.empty()){
        res += sentence.top();
        sentence.pop();
    }
    return res;
}

string reverseStr(string s, int k) {
    int i=0;
    int cnt=0;
    for ( int j=0 ; j<s.size() ; j++){
        cnt++;
        if ( cnt == k-1 ) {
            reverse( s.begin()+i , s.begin()+i+k);
        }
        if( cnt == (2*k)-1 || i+cnt == s.size()){
            cnt=0;
            i = j+1;
        }
    }
    return s;
}


string reverseStr1(string s , int k ){
    int i=0;
    while ( i < s.size()){
        reverse(s.begin()+i , s.begin()+i+k > s.end() ? s.end() :s.begin()+i+k );
        i += 2*k;
    }
    return s;
}

int main()
{

    string s = "Let's take LeetCode contest";
    string res = reverseWords(s);
    cout << " res = " << res << endl;
    
    string str = "abcd";
    string res2 = reverseStr1(str , 4 );
    cout << " str = " << str << endl;
    cout << " res2 = " << res2 << endl;
    
    return 0;
}