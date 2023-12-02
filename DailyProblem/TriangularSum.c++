/*2221. Find Triangular Sum of an Array*/

#include <bits/stdc++.h>
using namespace std;
/*
Example 1:


Input: nums = [1,2,3,4,5]
Output: 8
Explanation:
The above diagram depicts the process from which we obtain the triangular sum of the array.
Example 2:

Input: nums = [5]
Output: 5
Explanation:
Since there is only one element in nums, the triangular sum is the value of that element itself.*/

void print ( vector <int> arr ){
    for ( auto i : arr ){
        cout << "  " << i;
    }
    cout << endl;
}

vector<int> solve( vector<int> nums , int size){
    cout << "Solve " << size << endl;
    vector <int> arr; 

    // base case 
    if ( nums.size() <= 1 ) return nums;

    

    for ( int i=0 ; i<nums.size()-1 ; i++){
        int value = (nums[i] + nums[i+1]) % 10;
        cout << "Value " << value << endl;
        arr.push_back(value);
    }
    cout << "=============" << endl;
    print (arr);

    // recursive Call 
    arr = solve( arr , arr.size() );
    print ( arr );
    cout << endl;

    return arr ;
}


int triangularSum(vector<int>& nums) {
    cout << "Triangle " << endl;
    // Base Case 
    if (nums.size() == 1 ) return nums[0];


    print(nums);
    vector <int> ans = solve ( nums , nums.size());
    print( ans );
    return ans[0];

}


int main()
{
    vector <int> arr = {2,6,6,5,5,3,3,8,6,4,3,3,5,1,0,1,3,6,9};
    int res = triangularSum(arr);

    cout << " res = "  << res << endl;
    
    return 0;
}