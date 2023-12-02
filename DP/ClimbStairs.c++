#include <bits/stdc++.h>
using namespace std;


/*Problem no 70. Climbing Stairs

Example 1:

Input: n = 2
Output: 2
Explanation: There are two ways to climb to the top.
1. 1 step + 1 step
2. 2 steps
Example 2:

Input: n = 3
Output: 3
Explanation: There are three ways to climb to the top.
1. 1 step + 1 step + 1 step
2. 1 step + 2 steps
3. 2 steps + 1 step

Constraints:

1 <= n <= 45

*/


int climbingStairs(int nstairs , int n ){
    cout << " Calling " << nstairs << " , " << n << endl;
    // base case 
    if ( n == nstairs) return 1;

    if ( n > nstairs ) return 0;

    // recursive Call
    return (climbingStairs(nstairs , n+1) + climbingStairs(nstairs  , n+2));
}

// Dp solution 
int climbingStairsDP(vector <int> &dp , int nstairs ,  int n  ){
    cout << "Calling DP "<< nstairs << " , " << n << endl;
    // Base Case 
    if( n == nstairs ) return 1;

    if ( n > nstairs ) return 0;
    

    // Cache store in DP 
    if (dp[n] != -1 ) return dp[n];
    // recursive Call 

    dp[n] =  climbingStairsDP(dp , nstairs , n+1) + climbingStairsDP(dp , nstairs  , n+2);

    return dp[n];

}


// 1 Brute Approach T.c. = O(N^2) and  S. C. = O(N)
int climbStairs(int n) {
    int ans = climbingStairs(n , 0 );
    return  ans;
}


// 2. Recursion + memorization  T.C. = O(N) and S. C. = O(N + N)
int climbStairsDP(int n ){
    vector <int> dp(n , -1);
    dp[n-1] = 1;


    // Calling the ways Counting Function 
    int ans = climbingStairsDP(dp , n , 0 );
    return  ans;
}



// 3. Spaace optimization with Tabulation  T.C. = O(N) and S.c. = O(N)
int climbStairsDPTab(int n){
    vector<int> dp(n , -1);
    dp[0] = 1;
    dp[1] = 2;

     // base case 
    if (  n == 1 || n == 2 ) return dp[n-1];

    for ( int i = 2 ; i <= n-1 ; i++){
        dp[i] = dp[i-1] + dp[i-2];
    }
    return dp[n-1];
}

int main()
{
    int res = climbStairs(10);
    int res1 = climbStairsDP(1);
    int res2 = climbStairsDPTab(44);
    cout << "No. of ways to climb the stairs : " << res << endl;
    cout << "No. of ways to climb the stairs DP  : " << res1 << endl;
    cout << "No. of ways to climb the stairs DP  : " << res2 << endl;
    
    return 0;
}