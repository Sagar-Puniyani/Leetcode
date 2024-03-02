#include <iostream>
using namespace std; 

void reachHome(int src , int dest ){

    cout << src << endl;
    // base case 
    if (src == dest){
        cout << " At Home " << endl;
        return;
    }

    // processing 
    src ++;

    // recursive calls 
    reachHome(src , dest);
}

int main()
{
    int src = 1;
    int dest = 10;
    reachHome(src , dest);
    return 0;
}