#include <iostream>
using namespace std;

int getSum( int *arr  , int len ){

    // base case
    if (len <= 0 ){
        return 0;
    }
    if (len == 1 ){
        return arr[0];
    }
    // processing
    int sum = arr[0];
    // recursive relation
    return sum + getSum(arr+1 , len-1);
}

int main()
{
    int arr[] = {10,20,30,40,50};
    int ans = getSum(arr , 5);
    cout << "Sum is " << ans << endl;

    return 0;
}