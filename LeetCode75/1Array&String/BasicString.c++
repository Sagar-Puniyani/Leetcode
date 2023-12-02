#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[4] = {1,3,4,5};
    char ch[] = "abcde";

    cout<< "arr = " << arr <<endl;
    cout << "ch = " << ch << endl;

    int* p = &arr[0];
    char* c = &ch[0];

    cout << " p = " << p << endl;
    cout << " c = " << c << endl;
    cout << " ch[1] = " << ch[1] << endl;

    char temp = 'z'; 
    char *t = &temp;

    cout << " t = " << t << endl;


    return 0;
}