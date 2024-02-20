#include <iostream>
#include <vector>
using namespace std;

void print( vector<int> arr){
    for ( int i=0 ; i<=arr.size()-1 ; i++){
        cout << "  " << arr[i] ;
    }
    cout << endl;
}

vector <int> Bubble( vector <int> & arr ){


    int n = arr.size();

    for (int j=0 ; j<n-1 ; j++ ){
        for ( int i=0 ; i<n-1 ; i++){
            if ( arr[i] > arr[i+1] ){
                swap(arr[i] , arr[i+1]);
            }
        }
    }

    return arr;
}


vector<int>  RecursiveBubble( vector<int> arr , int n  ){
    // Base Case 
    if ( n == 0 || n == 1 ) return arr;

    for ( int i=0 ; i<n-1 ; i++){
        if ( arr[i] > arr[i+1] ){
            swap(arr[i] , arr[i+1]);
        }
    }

    // recursive Call 
    return RecursiveBubble( arr  , n-1);
}

int main()
{
    vector <int> arr = {23 , 5,  67 , 78 ,2 , 7 , 78 , 1 , 10 , 23 };
    print(arr);
    vector <int> ans = Bubble(arr);
    print(ans);
    vector <int> ans1 = Bubble(arr);
    print(ans1);
    return 0;
}