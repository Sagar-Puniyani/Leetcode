# include <iostream>
using namespace std;

bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
    char[] temp1 = "";
    char[] temp2 = "";

    if (word1.size() > 0 ){
        for ( string item : word1){
            temp1 += item;
        }
    }
    if (word2.size() > 0 ){
        for ( string item : word2){
            temp2 += item;
        }
    }

    if ( temp1 != temp2 ){
        return false;
    }
    else {
        return true;
    }
}

int main () {

    return 0;
}