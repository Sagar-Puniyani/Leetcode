#include <iostream>
using namespace std;

bool IsPalidrome(int i , int j , char *s ){

    // Base Case 
    if ( i > j ){
        return true ;
    }

    if ( s[i] == s[j]){
        i++;
        j--;
    return IsPalidrome(i , j , s );
    }

    else{
        return false;
    }
}

int main()
{
    char str[] = "abccba";
    bool Ans = IsPalidrome(0  ,  sizeof(str) / sizeof(str[0])  -2  , str  );
    cout << sizeof(str) / sizeof(str[0]) << endl;
    cout << "Ans  = " << Ans << endl;
    return 0;
}