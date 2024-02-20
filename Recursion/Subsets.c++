#include <iostream>
#include <vector>
using namespace std;

void print( vector<int> arr){
    for ( int i=0 ; i<=arr.size()-1 ; i++){
        cout << "  " << arr[i] ;
    }
    cout << endl;
}

void print2d(  vector<vector<int>> arr){
    for ( int i=0 ; i<=arr.size()-1 ; i++){
        print(arr[i]);
    }
    cout << endl;
}


vector<vector<int>> subsets(vector<int>& nums) {

}


int main()
{
    vector <int> nums = {1 , 2 , 3};
    vector<vector<int>> ans = subsets(nums);
    cout << "Print 2D Array" << endl;
    print(ans[2]);
    return 0;
}