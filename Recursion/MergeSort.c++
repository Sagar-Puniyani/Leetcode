#include <iostream>
#include <vector>
using namespace std;

vector

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
}

int main()
{
    vector <int> arr = { 10 ,2 ,67 , 8 , 45 , 80 , 67 , 90 , 80 };
    
    return 0;
}