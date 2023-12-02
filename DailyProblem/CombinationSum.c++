/*377. Combination Sum IV*/

#include <bits/stdc++.h>
using namespace std;

/*Example 1:

Input: nums = [1,2,3], target = 4
Output: 7
Explanation:
The possible combination ways are:
(1, 1, 1, 1)
(1, 1, 2)
(1, 2, 1)
(1, 3)
(2, 1, 1)
(2, 2)
(3, 1)
Note that different sequences are counted as different combinations.
Example 2:

Input: nums = [9], target = 3
Output: 0

Constraints:

1 <= nums.length <= 200
1 <= nums[i] <= 1000
All the elements of nums are unique.
1 <= target <= 1000
*/

int solve ( vector<int>& nums, int target , vector <int> & dp ){
     // Base Case 
    if ( target == 0 ) return 1;
    if ( target <  0 ) return 0;

    if ( dp[target] != -1 ) return dp[target];

    int ans =0  ;
    for ( int i=0 ; i<nums.size() ; i++){

        ans += solve(nums , target-nums[i] , dp);
    }

    dp[target] = ans;
    return dp[target] ;
}

int combinationSum4(vector<int>& nums, int target) {
    vector <int> dp (target+1 , -1 );
    return solve( nums , target ,dp  );
}


int solveTab ( vector<int>& nums, int target , vector <int> & dp ){


    int ans =0  ;
    for ( int i=0 ; i<nums.size() ; i++){

        ans += solve(nums , target-nums[i] , dp);
    }

    dp[target] = ans;
    return dp[target] ;
}

int combinationSum4Tab (vector<int>& nums, int target) {
    vector <int> dp (target+1 , 0 );
    dp[0] = 1;

    for ( int i=1 ; i<= target ; i++){
        for ( int j=0 ; j<nums.size() ; j++){
            if ( i-nums[j] >= 0 )
            dp[i] += dp[i-nums[j]];
        }
    }
    return dp[target];
}

int main()
{
    vector<int> arr = {1,2,3};
    int res = combinationSum4(arr , 32 );
    cout << " Res = " << res << endl;
    int res1 = combinationSum4Tab(arr , 32 );
    cout << " ResTab  = " << res1 << endl;
    
    return 0;
}