#include <bits/stdc++.h>
using namespace std;
/*Example 1:

Input: customers = "YYNY"
Output: 2
Explanation: 
- Closing the shop at the 0th hour incurs in 1+1+0+1 = 3 penalty.
- Closing the shop at the 1st hour incurs in 0+1+0+1 = 2 penalty.
- Closing the shop at the 2nd hour incurs in 0+0+0+1 = 1 penalty.
- Closing the shop at the 3rd hour incurs in 0+0+1+1 = 2 penalty.
- Closing the shop at the 4th hour incurs in 0+0+1+0 = 1 penalty.
Closing the shop at 2nd or 4th hour gives a minimum penalty. Since 2 is earlier, the optimal closing time is 2.
Example 2:

Input: customers = "NNNNN"
Output: 0
Explanation: It is best to close the shop at the 0th hour as no customers arrive.
Example 3:

Input: customers = "YYYY"
Output: 4
Explanation: It is best to close the shop at the 4th hour as customers arrive at each hour.
 */


/* There are two Approaches 
1. Single go Pass in the String */
int bestClosingTime(string customers) {
    int score = 0 , max_score = 0 , hour = -1;

    for(auto i = 0 ; i < customers.size() ; i++){
        score += (customers[i] == 'Y') ? 1 : -1 ;

        if(score > max_score){
            max_score = score;
            hour = i;
        }
    }
    return hour +1;
}


/*2 . Prefix and Suffix Sum of the Yes And No */
int main()
{
    int res = bestClosingTime("YYNY");
    cout << "res = " << res << endl;
    
    return 0;
}