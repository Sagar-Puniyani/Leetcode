#include <iostream>
#include <vector>
using namespace std;

bool isSorted(vector<int>& arr) {
    // base case
    if (arr.size() <= 1) {
        return true;
    }

    // processing
    if (arr[0] > arr[1]) {
        return false;
    }

    // recursive call
    vector<int> subArr(arr.begin() + 1, arr.end());
    return isSorted(subArr);
}

int main()
{
    vector <int> arr = { 1,2,3,5,6,7,9};
    cout << "Size = " << arr.size() << endl;
    cout << isSorted(arr);
    return 0;
}git pull origin main