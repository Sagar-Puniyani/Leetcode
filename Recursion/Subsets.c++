#include <iostream>
#include <vector>
using namespace std;

void print( vector<int> arr){
    for ( int i=0 ; i<=arr.size()-1 ; i++){
        cout << "  " << arr[i] ;
    }
    cout << endl;
}

void print2DVector(const vector<vector<int>>& vec) {
    for (const auto& row : vec) {
        for (const auto& elem : row) {
            cout << elem << ' ';
        }
        cout << '\n';
    }
}

void PowerSubset(vector<int> nums , vector<int> output , vector<vector<int>> & ans  , int i  ){
    if ( i >= nums.size() ){
        ans.push_back(output);
        return;
    }

    // Excluding 
    PowerSubset(nums , output , ans , i+1);

    // Including 
    output.push_back(nums[i]);
    PowerSubset(nums , output , ans , i+1);

}



vector<vector<int>> subsets(vector<int>& nums) {

    vector<vector<int>> ans;
    vector<int> output;

    PowerSubset(nums , output , ans , 0 );
    return ans;
}


class Solution {
public:
    void helper(vector<int>& nums, vector<vector<int>>& ans, vector<int>& curr, int idx){
        ans.push_back(curr);                             
        for(int i=idx;i<nums.size();i++){                      
            if(i>idx &&  nums[i]==nums[i-1])  
            continue;                                          
            curr.push_back(nums[i]);                           
            helper(nums,ans,curr,i+1); 
            curr.pop_back();                                  
        }
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> ans; 
        vector<int> curr; 
        sort(nums.begin(),nums.end()); 

        helper(nums,ans,curr,0);                      
        return ans; 
        } 
    
};

int main()
{
    vector <int> nums = {1 , 2 , 3};
    vector<vector<int>> ans = subsets(nums);
    cout << "Print 2D Array" << endl;
    print2DVector(ans);
    return 0;
}