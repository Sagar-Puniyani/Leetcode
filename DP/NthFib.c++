/*this is the Series of Dynamic Programming */

/*Nth fibbonacci Number */

#include <bits/stdc++.h>
using namespace std;


// top-down Approach { Recursion  +  Memorization }
int fib(int n , vector<int>  &dp) {
    cout << "Calling " << endl;
    //  Base Case 
    if ( n <= 1) return n;

    if (dp[n] != -1 ) return dp[n];

    dp[n] =  fib(n-1 , dp) + fib(n-2 , dp);
    return dp[n];

}

// Bottom-up Approach { Tabulation }

int fibonacci(int n , vector<int> &dp){
    cout << " Calling " << endl;
    // base case 
    dp[0] = 0;
    dp[1] = 1;

    for (int i=2 ; i<=n ; i++){
        dp[i] = dp[i-1] + dp[i-2];
    }
    return dp[n];
}


// space optimization 
int FibNum(int n ){

    // base case 
    if( n <= 1){
        return n;
    }


    int prev1 = 0;
    int prev2 = 1;
    int curr ;

    for (int i=2 ; i<=n ; i++){
        curr = prev1 + prev2;

        // shift logic 
        prev1 = prev2;
        prev2 = curr;
    }

    return prev2 ;

}

int main()
{
    int num;
    cout << "Enter The Number : " ; 
    cin >> num;

    vector<int> dp(num+1 , -1);
    int res = FibNum(num);

    cout << " fib(" << num << ") = " << res << endl;
    
    return 0;
}