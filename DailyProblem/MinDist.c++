#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int GetDistance(vector<int> p1 , vector<int> p2 ){
    return max(abs(p1[0] - p2[0]) , abs(p1[1] - p2[1]));
}

int minTimeToVisitAllPoints(vector<vector<int>>& points) {
    int Time = 0;
    for ( int i=0 ; i<= points.size()-2 ; i++){
        Time += GetDistance(points[i] , points[i+1]);
    }
    return Time;
}

int main()
{
    vector <vector <int>> points = {{1,1} , {3,4} , {-1,0}};
    cout << "Time to visit All the Node are : " <<  minTimeToVisitAllPoints(points)<< endl;
    
    return 0;
}