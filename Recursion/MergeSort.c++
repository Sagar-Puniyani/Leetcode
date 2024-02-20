#include <iostream>
#include <vector>
using namespace std;

void print( vector<int> arr){
    for ( int i=0 ; i<=arr.size()-1 ; i++){
        cout << "  " << arr[i] ;
    }
    cout << endl;
}

void Merge ( vector <int> &arr , int start , int end ){
    if ( start >= end ){
        return ;
    }

    vector <int> ans(end - start + 1 );
    int midIndex = start + ( end - start ) /2 ;

    cout << "size = " << ans.size() << endl;

    int index1 = start;
    int index2 = midIndex + 1  ;

    int mainIndex  =  0;


    while (index1 <= midIndex && index2 <= end){
        if (arr[index1] <= arr[index2] ){
            ans[mainIndex++] = arr[index1++];
        }
        else {
            ans[mainIndex++] = arr[index2++];
        }
    }

    while(index1 <= midIndex ) {
        ans[mainIndex++] = arr[index1++];
    }


    while(index2 <= end) {
        ans[mainIndex++] = arr[index2++];
    }

    mainIndex = 0;
    for ( int i = start ; i <= end ; i++){
        arr[i] = ans[mainIndex++];
    }
}

void  MergeSort( vector <int>& arr , int start  , int end ){
    // Base Case 
    if (start >= end ) {
        return ;
    } 

    int mid = start + (end - start ) / 2 ;
    
    // Left Part Sort 
    MergeSort(arr , start , mid);
    
    // Right Part Sort 
    MergeSort(arr ,mid+1 , end );

    Merge( arr ,start , end );
}

int main()
{
    vector <int> arr = { 38 , 27 , 43 , 3 , 9 , 82 , 10  };
    print(arr);
    MergeSort(arr ,  0  , arr.size() - 1 );
    print(arr);
    
    return 0;
}