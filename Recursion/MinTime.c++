#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int MoveHorizontal(vector<int> &p1 , vector<int> &p2 , double dist  ){
    int factor;
    int Timer = 0;
    // left or right 
    if ( p1[0] < p2[0]){
        factor = 1;
    }
    else {
        factor = -1;
    }

    if (dist == 0 ){
        while (p1[0] == p2[0]){
            p1[0] += factor;
            Timer;
        }
        
    }
}

int MoveVertical(vector<int> &p1 , vector<int> &p2 , double dist ){
    int factor;
    int Timer = 0;
    // up or down 
    if ( p1[1] < p2[1]){
        factor = 1;
    }
    else {
        factor = -1;
    }

    if (dist == 0 ){
        while( p1[1] == p2[1]){
            p1[1] += factor;
            Timer++;
        }
    }
    else{
    }
    
}

int MoveDiagonal(vector<int> &p1 , vector<int> &p2 , double dist ){
    int factor;
    int Timer = 0;

    // up or down 
    if (p1[0] < p2[0] && p1[1] < p2[1]){
        factor = 1;
    }
    else {
        factor = -1;
    }


    // move & note Time 
    if ( dist == 0){
        while (p1[0] == p2[0] && p1[1] == p2[1]){
            p1[0] +=  factor;
            p1[1] +=  factor;
            Timer++;
        }
    }
    else {
        p1[0] +=  factor;
        p1[1] +=  factor;
        Timer++;
    }

    return Timer;
}


double MinDist( double d1 , double d2 , double d3 ){
    return min(min(d1, d2), d3);
}


double  Distacne(int a , int b  , int c , vector<int> point ){
    return abs((a*point[0] + b*point[1] + c ) / sqrt(a*a + b*b) );
}

int minTimeToVisitAllPoints(vector<vector <int>> points ){
    cout << "Min Call " << endl;
    int len = points.size();
    int Timer = 0;
    int x1 = points[0][0], y1 = points[0][1];


while (points[0][0] == points[1][0] && points[0][1] == points[1][1] && len >= 2){
// Distances 
    double distX = Distacne(1 , 0 , -1*x1 , points[1]);
    double distY = Distacne(0 , 1, -1*y1 , points[1]);
    double distD = Distacne(-1 , 1 , x1-y1, points[1]);

    double mindist = MinDist(distX , distY , distD );

    if (mindist == distX ){
        // move horizontal 
        Timer += MoveHorizontal(points[0] , points[1] , mindist);
    }
    if (mindist == distY ){
        // move vertical 
        Timer += MoveVertical(points[0] , points[1] , mindist);
    }
    if (mindist == distD ){
        // move Diagonal 
        Timer += MoveDiagonal(points[0] , points[1] , mindist);
    }
}
    return Timer + minTimeToVisitAllPoints(vector<vector<int>>(points.begin() + 1, points.end()));
}

int main()
{
    cout << "Square Root : " << sqrt(2)<< endl;
    vector <vector <int>> points = {{1,1} , {3,4} , {-1,0}};
    vector <int> point = {3,4};
    double  dis = Distacne(1,-1,0,point);
    cout << "Distance = " << dis << endl;
    int ans = minTimeToVisitAllPoints(points);
    cout << "Total Time is req = " << ans << endl;
    return 0;
}