#include <iostream>
#include <vector>
using namespace std;

bool isSorted(vector <int> *arr , int size){
    // base case 
    if (size <= 1) {
        return true;
    }

    // processing 
    if (arr[0] > arr[1]){
        return false;
    }

    // recursive call
    return isSorted( arr+1 , size-1); 
}

int main()
{
    vector <int> arr = { 1,2,3,5,6,7,9};
    int size = arr.size();
    cout << "SIze = " << size << endl;
    cout << isSorted(&arr , size);
    return 0;
}