/*118. Pascal's Triangle*/

#include <bits/stdc++.h>
using namespace std;
/*
Example 1:

Input: numRows = 5
Output: [[1],[1,1],[1,2,1],[1,3,3,1],[1,4,6,4,1]]
Example 2:

Input: numRows = 1
Output: [[1]]

Constraints:

1 <= numRows <= 30
*/

void print(vector <int> arr ){
    for (auto i : arr ){
        cout << "  " << i ;
    }
    cout << endl;
}

void printpascal( vector <vector <int>> arr ){
    for (auto element  : arr ){
        print(element);
    }
    cout << endl;
}


void pascal( vector <vector <int>> &arr , int num  ){
    // Base Case 
    if ( num < 0 ) return;


    // initail and ending of the pascal is 1
    arr[num].push_back(1);

    // recursive call 
    pascal( arr , num-1 );

    if ( num >= 2) {
    for ( int  i=1 ; i <= num-1 ; i++ ){
        int value  = arr[num-1][i-1] + arr[num-1][i];
        arr[num].push_back(value);
    }
    }

    if ( num != 0 )
    arr[num].push_back(1);
}


vector<vector<int>> generate(int numRows ) {
    vector < vector <int>> arr(numRows);

    pascal( arr , numRows-1 );
    return arr;

}

vector<int> getRow(int rowIndex) {
    vector<vector<int>>  arr = generate(rowIndex+1);
    return arr[rowIndex];
}


int main()
{
    vector < vector <int>> arr = generate(10);
    printpascal(arr);

    vector <int> array = getRow(14);

    cout << "-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-" << endl;
    print(array);

    
    return 0;
}