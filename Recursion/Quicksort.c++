#include <iostream>
#include <vector>
using namespace std;


void print( vector<int> arr){
    for ( int i=0 ; i<=arr.size()-1 ; i++){
        cout << "  " << arr[i] ;
    }
    cout << endl;
}

int partition ( vector<int> &arr , int start ,  int end  ){

    int pivotElement = arr[start];

    int count = 0;  
    for ( int i= start+1 ; i<= end ; i++){
        if ( arr[i] <= pivotElement){
            count++;    
        }
    }
    int pivotIndex = start + count;
    cout << " Count " << count << endl;
    cout << "pivotElement = " << pivotElement << endl;

    swap( arr[start] , arr[pivotIndex] );
    

    int i = start , j = end ;

    while (i < pivotIndex  &&  j > pivotIndex ) {
        while  (arr[i] <= pivotElement )
            i++;

        while   ( arr[j] > pivotElement ) 
            j--;

        if  ( arr[i] >= pivotElement && arr[j] < pivotElement ){
            if (i < pivotIndex  &&  j > pivotIndex  )
                swap(arr[i++] , arr[j--]);
        }


    }


    return pivotIndex;
}

void QuickSort ( vector <int> & arr , int start , int end ) {
    if ( start >= end )
        return;

    int pivotIndex = partition(arr , start , end );
    print( arr );

    // left part 
    QuickSort(arr , start , pivotIndex -1 );

    // right part 
    QuickSort( arr , pivotIndex + 1 , end ) ;
}


int main()
{
    vector <int> arr = {38 , 27 , 43 , 3 , 9 , 82 , 10    };
    print(arr);
    QuickSort(arr ,  0  , arr.size() - 1 );
    print(arr);
    return 0;
}