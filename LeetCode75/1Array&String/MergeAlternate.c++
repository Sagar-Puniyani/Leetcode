#include <bits/stdc++.h>
using namespace std;
/* Merge Strings Alternately
 */


string mergeAlternately(string word1, string word2) {
    string ans;
    int i=0,j=0 ;

    while ( i<word1.size() &&  j< word2.size()  ){
    ans += word1[i++];
    ans += word2[j++];
    }

    // if word1 has remaining 
    while (i<word1.size()){
        ans += word1[i++];
    }
    
    // if word2 is remaining 
    while(j< word2.size() ){
        ans += word2[j++];
    }


    return ans;

    }

int main()
{
    string word1 = "abe";
    string word2 = "pqrs";

    cout << word1[1] << endl;
    cout << word1.size() << endl;

    string ans = mergeAlternately(word1 , word2);
    cout << "ans = " << ans << endl;
    
    return 0;
}