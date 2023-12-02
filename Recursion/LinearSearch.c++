#include <iostream>
using namespace std;

bool LinearSearch( int* arr , int key ){

    int len = sizeof(arr) / sizeof(arr[0]);
    // Base Case 
    if (len <= 0 ){
        return false;
    }

    bool ans = false;
    if (len >= 1 && arr[0] == key ){
        ans = true;
    }

    return  ans || LinearSearch(arr+1 , key);
}

bool BinarySearch(int *arr , int key ){
    int len = sizeof(arr) / sizeof(arr[0]);
    int mid = len/2;

    // Base Case

    if(arr[mid] == key){
        return true;
    } 

    // Recursive Call 
    return  BinarySearch(arr)


}

int main()
{
    int arr[] = {11,45,65,23,95,74,7};
    bool ans = LinearSearch(arr , 7);
    cout << "Solution is " << ans << endl;
    return 0;
}