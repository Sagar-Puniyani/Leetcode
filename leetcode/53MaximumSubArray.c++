#include <bits/stdc++.h>
using namespace std;

/*
    Kadane's Algo To Find the Maximum Sum Of Sub Array 

    There are Three Approach To solve The Problem 

        Approach - 1 
            T.C. = O(N^3)
            S.C. = O(1)

        Approach - 2 
            T.C. = O(N^2)
            S.C> = O(1)

        Approach - 3  --(Kadane's Algo )
            T.C. = O(N)
            S.C. = O(1)

*/

void print(vector<int> arr , int n ){
    for(int i=0 ; i<n ; i++){
		cout<<" "<< arr[i];
	}
	cout<<endl;
}



/*There Are three Steps of Kadane's Algo  

    set sum = 0 and Maxi = first element of the Array 

for (int i= 0  --> n ){

step 1 - sum = sum  + arr[i]

step 2 - maxi = max(maxi , sum )

step 3 - if(sum < 0 ) sum = 0 ;

}
*/

class Solution {
public:
    int maxSubArray(vector<int>& nums) {

        int sum = 0 ;
        int maxi = nums[0];

        for (int i=0 ; i < nums.size() ; i++){
            // step 1 
            sum += nums[i];

            // step -2 
            maxi = max(sum  , maxi );

            // step - 3 
            if(sum < 0 )
            sum = 0 ;
        }

        return maxi;
        
    }

    // Maximum Product of the Sub Array 
    // This is the Problem Number 152. Maximum Product Subarray



    int maxProduct(vector<int>& nums) {

        int letfProduct =1;
        int rightProduct =1;
        int ans = nums[0];

        for (int i = 0 ; i < nums.size() ; i++){

            letfProduct = letfProduct == 0 ? 1 : letfProduct;
            rightProduct = rightProduct == 0 ? 1 : rightProduct;

            // Starting from left
            letfProduct *= nums[i];

            // Starting From Right 
            rightProduct *= nums[nums.size()-1-i];

             // Ans Stores the Maximum Product 
            ans = max( ans , max(letfProduct , rightProduct )  );

        }

        // Returning the maximum product 
        return ans;
    }
};


int main()
{

    vector<int> arr = {2,3,-2,4};

    // Printing the Array 

    print(arr , 4);

    Solution Obj ;

    int sum  = Obj.maxSubArray(arr);
    cout << "The Sum of Maximum Sub Array "<< sum << endl;

    int product = Obj.maxProduct(arr);
    cout << "The Product of Maximum Sub Array "<< product << endl;

    
    return 0;
}