#include <bits/stdc++.h>
using namespace std;

/*
Example 1:

Input: flowerbed = [1,0,0,0,1], n = 1
Output: true
Example 2:

Input: flowerbed = [1,0,0,0,1], n = 2
Output: false

*/

vector<int>  countEmptyPlot(vector<int> arr ){
    int max=0 , cnt=0 , i = 0;
    vector<int> res;
    
    while(i<arr.size()){
        if(arr[i] == 0 ){
            cnt++;
        }
        else{
            res.push_back(cnt);
            cnt=0;
        }
        i++;
    }
    return res;
}

int MaxcountEmptyPlot(vector<int> res){
    int max =0 ;
    // finding the max out of them 
    for (int  j=0 ; j<res.size() ; j++){
        if(res[j] >= max){
            max = res[j];
        }
    }
    return max;
}

bool canPlaceFlowers(vector<int>& flowerbed, int n) {

    vector<int> emptyPlot = countEmptyPlot(flowerbed);
    int max = MaxcountEmptyPlot(emptyPlot);
    if(max >= n+2){
        return true;
    }

    else{
        return false;
    }

}

// optimal Solution 

bool CanBeFlowerBedPlaced(vector<int>& flowerbed, int n){
    // Trivial Case 
    if (n ==0 ) 
        return true;

    for (int i = 0 ; i<flowerbed.size() ; i++){
        if(flowerbed[i] == 0 && (i==0  || flowerbed[i-1] == 0 ) && ( flowerbed[i+1]==0 || i == flowerbed.size()-1)){
        --n;
        flowerbed[i] = 1 ;
        if( n == 0)
            return true;
        }
    }

    return false;
}




int main()
{
    vector<int> flowerbed = {1,0,0,0,0,1};
    bool ans = canPlaceFlowers(flowerbed , 1);
    bool res = CanBeFlowerBedPlaced(flowerbed , 2 );
    cout << "Is Flower Can be Placed : " << ans << " & " << res  << endl;
    
    return 0;
}