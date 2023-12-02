#include <bits/stdc++.h>
using namespace std;

int findMaxof(vector<int> candies){
    int max=0;
    for (auto i = 0 ; i<candies.size() ; i++){
        if (candies[i] >= max){
            max = candies[i];
        }
    }
    
    return max;
}

vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
    vector<bool> vec ;
    int i = 0 ;
    int max = findMaxof(candies);
    cout << "Max is = "<< max << endl;
    while(i < candies.size() ){
        if (candies[i]+extraCandies >= max)
        vec.push_back(true);

        else 
        vec.push_back(false);

        i++;
    }

    return vec;

}

// printing the vector 
void print(vector <bool> arr ){
    for(auto i = 0 ; i<arr.size() ; i++){
        cout << "  "<< arr[i] ;
    }
    cout<<endl;
}

int main()
{
    vector <int> arr = {2,3,5,1,3};
    vector <bool> ans = kidsWithCandies(arr , 3 );

    cout << "Bool Vector is "<< endl;
    print(ans);
    
    return 0;
}