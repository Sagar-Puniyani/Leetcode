#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void print( vector <string> arr ){
    for (auto element : arr ){
        cout << " " << element ;
    }
    cout << endl;
}


bool isSafe(int x , int y , vector<vector < int>> arr ,  vector < vector < int >> visited , int n  ){
    if (( x>=0 && x<n) && ( y>=0 && y<n ) && visited[x][y] != 1 && arr[x][y] == 1 ){
        return true;
    }
    else 
        return false;
}



void PathInGrid(int x , int y , vector< string > & paths , vector < vector < int >>  arr, vector < vector < int >> visited ,  int n , string path){
    
    visited[x][y] = 1;
    if(visited[n-1][n-1] == 1 ){
        paths.push_back(path);
        return;
    } 


// Down
    int newx = x + 1;
    int newy = y;
    if ( isSafe(newx , newy , arr , visited , n)){
        path.push_back('D');
        PathInGrid(newx , newy , paths ,arr , visited ,n ,  path );
        path.pop_back();
    }
    
    // Left 
    newx = x;
    newy = y - 1;
    if ( isSafe(newx , newy , arr , visited , n)){
        path.push_back('L');
        PathInGrid(newx , newy , paths ,arr , visited ,n ,  path );
        path.pop_back();
    }
    
    // Right 
    newx = x;
    newy = y + 1;
    if ( isSafe(newx , newy , arr , visited , n)){
        path.push_back('R');
        PathInGrid(newx , newy , paths ,arr , visited ,n ,  path );
        path.pop_back();
    }
    
    // Up
    newx = x - 1;
    newy = y;
    if ( isSafe(newx , newy , arr , visited , n)){
        path.push_back('U');
        PathInGrid(newx , newy , paths ,arr , visited ,n ,  path );
        path.pop_back();
    }
    
    visited[x][y] = 0;

}

vector < string > searchMaze(vector < vector < int >> & arr, int n) {
    vector <string> paths;

    if (arr[0][0] == 0 ){
        return paths;
    }

    vector < vector < int >> visited = arr;
    for ( int i=0 ; i<n ; i++ ){
        for ( int j=0 ; j<n ; j++ ){
            visited[i][j] = 0;
        }
    }
    string path = "";
    PathInGrid(0 , 0 , paths , arr , visited , n , path);
    sort(paths.begin() , paths.end());
    return paths;

}


int main()
{
    vector < vector < int >>  arr = {   {1 , 0 , 0 , 0} ,
                                        {1 , 1 , 0 , 1} , 
                                        {1 , 1 , 0 , 0} , 
                                        {0 , 1 , 1 , 1}};

    
    vector<string> ans  = searchMaze(arr , 4);
    print(ans);


    return 0;
}