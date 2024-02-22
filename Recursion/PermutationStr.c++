#include <iostream>
#include <vector>
using namespace std;


void print2DVector(const vector<vector<int>>& vec) {
    for (const auto& row : vec) {
        for (const auto& elem : row) {
            cout << elem << ' ';
        }
        cout << '\n';
    }
}

void Permutation ( vector < vector <int>> &ans , vector <int> nums  , int index ){
    if ( index >= nums.size() ){
        ans.push_back(nums);
        return;
    }

    for ( int i= index  ; i<nums.size() ; i++){
        swap( nums[index] , nums[i] );
        Permutation(ans , nums , index + 1);
        swap(nums[index] , nums[i]);
    }
}

vector<vector<int>> permute(vector<int>& nums) {
    
    vector <vector <int>> ans;
    Permutation(  ans , nums , 0 );
    return ans;
}


int main()
{
    vector<int> nums = { 1 , 2 , 3};
    vector<vector<int>> ans = permute(nums);
    print2DVector(ans);
    return 0;
}