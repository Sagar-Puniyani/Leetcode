#include <iostream>
#include <vector>
using namespace std;


void print(vector <string> arr ) {
    for ( auto element : arr ){
        cout << " " << element ;
    }
    cout << endl;
}


void Combination(int index , string digits ,  string output , vector<string> mapping  , vector<string> &ans ){
    if ( index >= digits.length() ){
        ans.push_back(output);
        return ;
    }

    int number = digits[index] - '0';
    string map = mapping[number];

    for ( int i=0 ; i<map.length() ; i++ ){
        output.push_back(map[i]);
        Combination(index+1 , digits , output , mapping , ans );
        output.pop_back();
    }
}

vector<string> letterCombinations(string digits) {
    
    
    if ( digits.empty() ){
        cout << digits.empty() << endl;
        cout << digits.length() < 0  << endl;
        return {""};
    }

    vector <string> mapping = {"" , "" , "abc" , "def" , "ghi" , "jkl" , "mno" , "pqrs" , "tuv" , "wxyz"};
    string output ;
    vector<string> ans ;
    Combination( 0 , digits ,  output , mapping , ans );

    return ans;
}

int main()
{
    string an = "67";
    cout << an.length() << endl;
    int d = an[0] - '0';
    cout << d << endl;

    vector<string> ans = letterCombinations("");
    print(ans);
    return 0;
}