#include <bits/stdc++.h>
using namespace std;

void print( vector<int>  & arr ){
    for (int item : arr ){
        cout << item << " ";
    }
    cout<<endl;
}

bool check ( int i , int j , int k ,int l ,  vector<int> &nums ){
    
    if( (nums[i] < nums[j] && nums[j] < nums[k]) && ( l >= k )){
        return true;
    }
    else if ( l <= k ){
        return check(i+1, j+1  ,k+1 , l , nums);
    }
    else{
        return false;
    }

}


bool increasingTriplet(vector<int>& nums) {
    int  i=0 , j=1 , k=2 , l = nums.size();
    return check(i , j , k , l , nums);
}

// i , j and k should not be in sequnce

bool checker(vector<int>& nums, int l, int r) {
    if (l >= r) {
        return false;
    }

    int mid = l + (r - l) / 2;
    int min_val = 0, max_val = 0;

    for (int s = l; s < mid; s++) {
        if (nums[s] < nums[mid]) {
            min_val = min(min_val, nums[s]);
        }
    }

    for (int s = mid + 1; s <= r; s++) {
        if (nums[s] > nums[mid]) {
            max_val = max(max_val, nums[s]);
        }
    }

    if (min_val < nums[mid] && max_val > nums[mid]) {
        return true;
    }

    else if ( min_val == 0 ){
        return checker(nums , mid , r );
    }
    else if ( max_val == 0 ){
        return checker(nums , l , mid  );
    }

    else {
        return false;
    }
}

bool increasingsTriplet(vector<int>& nums) {
    int l = 0, r = nums.size() - 1;
    return checker(nums, l, r);
}


// Another Approach 

bool triplets(vector<int> &nums ){
    int first_min = 0 , second_min   = 0;
    for (int item : nums){

    }
}


int main()
{
    vector <int> nums = {20,100,10,12,5,13};
    print(nums);
    cout << "After checking " << increasingsTriplet(nums);    
    cout <<endl << "sample checking " << ( nums[0] < nums[1] && nums[1] < nums[2]);    
    return 0;
}