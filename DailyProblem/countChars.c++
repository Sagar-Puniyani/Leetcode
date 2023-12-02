#include <iostream>
#include <vector>
using namespace std;
int  checkword(string word , string chars );

int countCharacters(vector<string>& words, string chars) {
    int count = 0;
    for (int i=0 ; i < words.size() ; i++){
        count += checkword(words[i] , chars );
    }
    return count;
}

int  checkword(string word , string chars ){
    int len = word.size();
    int count = 0;
    for (char letter : word ){
        size_t index = chars.find(letter);
        if (chars.find(letter) != string::npos) {
            chars[index] = "-";
            count++;
        }
    }
    if (count !=  len )
        return 0;
    else
        return len;
}

int main()
{
    vector <string> words =  {"hello" , "world" , "leetcode"};
    string chars = "welldoneho-neyr";
    cout << " length is " << checkword(words[1] , chars) << endl;
    cout << " count  is " << countCharacters(words , chars) << endl;

    return 0;
}