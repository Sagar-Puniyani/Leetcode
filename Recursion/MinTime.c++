#include <iostream>
#include <cmath>
#include <vector>

using namespace std;


long double  Distacne(int a , int b  , int c , vector<int> point ){
    return abs((a*point[0] + b*point[1] + c ) / sqrt(a*a + b*b) );
}

int minTimeToVisitAllPoints(vector<vector<int>>& points) {
    
}

int main()
{
    cout << "Square Root : " << sqrt(2)<< endl;
    vector <vector <int>> points = {{1,1} , {3,4} , {-1,0}};
    vector <int> point = {-1,0};
    long double  dis = Distacne(-1,1,-1,point);
    cout << "Distance = " << dis << endl;
    return 0;
}