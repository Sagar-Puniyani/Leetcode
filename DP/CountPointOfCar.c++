/*8029. & 2848 Points That Intersect With Cars*/

#include <bits/stdc++.h>
using namespace std;

/*Example 1:

Input: nums = [[3,6],[1,5],[4,7]]
Output: 7
Explanation: All the points from 1 to 7 intersect at least one car, therefore the answer would be 7.
Example 2:

Input: nums = [[1,3],[5,8]]
Output: 7
Explanation: Points intersecting at least one car are 1, 2, 3, 5, 6, 7, 8. There are a total of 7 points, therefore the answer would be 7.


Constraints:

1 <= nums.length <= 100
nums[i].length == 2
1 <= starti <= endi <= 100*/

void print ( deque<int> arr ){
    for(int i : arr ){
        cout << "  " << i;
    }
    cout << endl;
}


void solve( deque<int> &dp ,  vector<int> &num ){
    // elements are added in front or end of the
    if ( dp.size() == 0) {
        for ( int i=num[0] ; i<=num[num.size()-1] ; i++){
            dp.push_back(i);
        }
    }
    if ( dp.size() != 0 ){
        // traversing in any kind of num 
        for ( int i=num[0] ; i<=num[num.size()-1] ; i++){
            for ( int j=0 ; j<dp.size() ; j++){
                // add in front 
                if ( i < dp[0] ) dp.push_front(i);
                
                // Add in the middle 
                if ( i < dp[dp.size()-1 ] && i > dp[0] ) {
                    dp.push_back(i);
                    sort(dp.begin(), dp.end());
                    deque<int>::iterator newEnd = unique(dp.begin(), dp.end());
                    dp.erase(newEnd, dp.end());
                };

                // add in back 
                if ( i > dp[dp.size()-1 ]) dp.push_back(i);
            }
        }
    }
}

int numberOfPoints(vector<vector<int>>& nums) {
    deque <int> dp;

    // traversing the outer vector 
    for (int i=0 ; i<nums.size() ; i++){
        solve(dp , nums[i]);
    }
    cout << "dp = " ;
    print(dp);

    return dp.size();
}

int main()
{   
    deque<int> arr = {3,4,5,6};
    arr.push_front(2);

    print(arr);
    cout << arr.size() << endl;
    deque<int>::iterator insertPosition = arr.begin();
    advance(insertPosition, 2);
    arr.insert(insertPosition,10);
    print(arr);

    vector <vector <int>> arr1 = {{3,6} , {1,5} , {4,7}};
    vector <vector <int>> arr2 = {{4,4},{9,10},{9,10},{3,8}};

    int value = numberOfPoints(arr2);
    cout << "value = " << value << endl;
    cout << "arr.front" << arr.front() << endl;
    
    return 0;
}