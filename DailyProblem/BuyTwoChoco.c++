#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int buyChoco(vector<int>& prices, int money)
    {
        
        // finding minimum price chocolate 
        int min1 = INT32_MAX;
        int min2 = INT32_MAX;

        for ( int i = 0 ; i<prices.size() ; i++){
            if (prices[i] < min1){
                min2 = min1;
                min1 = prices[i];
            }
            else if (prices[i] < min2 ){
                min2 = prices[i];
            }
        }

        cout << "min1 = " << min1 << " and  min2 = " << min2 << endl;

        if ((min1 + min2) <= money ){
            money -= (min1 + min2) ;
        }
        return money;
    }

    
};


int main()
{
    Solution obj;

    vector <int> vec = {3,2,3};
    int x = obj.buyChoco(vec , 3 );
    cout << "solution = " << x << endl;
    return 0;
}
