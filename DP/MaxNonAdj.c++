/*198. House Robber*/ 
#include <bits/stdc++.h>
using namespace std;

/* 

Example 1:

Input: nums = [1,2,3,1]
Output: 4
Explanation: Rob house 1 (money = 1) and then rob house 3 (money = 3).
Total amount you can rob = 1 + 3 = 4.
Example 2:

Input: nums = [2,7,9,3,1]
Output: 12
Explanation: Rob house 1 (money = 2), rob house 3 (money = 9) and rob house 5 (money = 1).
Total amount you can rob = 2 + 9 + 1 = 12.

Constraints:

1 <= nums.length <= 100
0 <= nums[i] <= 400
*/

void print(vector<int> arr ) {
    for( auto i=0 ; i<arr.size() ; i++){
        cout << "  " << arr.at(i) ;
    }
    cout << endl;
}


//  top-Down Approach 

int solve (vector<int> &nums , int n , vector<int> &dp ){
    // Base Case 
    if ( n >= nums.size() ) return 0;

    // Dp has element 
    if (dp[n] != 0 ) return dp[n];

    // include and exculde 
    int include = nums[n] + solve(nums , n+2 , dp );
    int exculde = solve(nums , n+1 , dp );
    dp[n] = max ( include , exculde);
    return  dp[n];
}


int rob(vector<int>& nums) {
    int n = nums.size();
    vector <int> dp(n , 0);
    int ans = solve(nums , 0 , dp);
    print(dp);
    return ans;
}


// Tabulazation

int Robbery( vector<int> &nums){
    // Base Case 
    if ( nums.size() == 0) return 0;
    if ( nums.size() == 1) return nums[0];

    // Dp In 
    vector <int> dp(nums.size());
    dp[0] = nums[0];
    dp[1] = max(nums[0] , nums[1] );
    for ( int i=2 ; i<nums.size() ; i++){
        dp[i] = max( dp[i-1] , dp[i-2]+nums[i] );
    }
    return dp[nums.size()-1];
}


// more space Optimization 
int Robberying ( vector <int> & nums ){
    // Base Case 
    if ( nums.size() == 0) return 0;
    if ( nums.size() == 1) return nums[0];

    int prev2 = nums[0];
    int prev1 = max(nums[0] , nums[1]);
    int curr;

    for ( int i=2 ; i<nums.size() ; i++){
        curr = max ( prev1 , prev2 + nums[i]);
        prev2 = prev1;
        prev1 = curr;
    }

    return prev1;
}

// House Robbery II 
//  the house are arranged in the circular array 



int main()
{
    vector <int> arr = {183,219,57,193,94,233,202,154,65,240,97,234,100,249,186,66,90,238,168,128,177,235,50,81,185,165,217,207,88,80,112,78,135,62,228,247,211};
    vector<int> arr2 = {2,3,2};
    int res = rob(arr);
    int res1 = Robbery(arr2);
    int res2 = Robbery(arr2);
    cout << "Max Rob is : " <<  res << endl;
    cout << "Max Robery is : " <<  res1 << endl;
    cout << "Max Roberying  is : " <<  res2 << endl;

    
    return 0;
}