/* To find the prime number */
#include <bits/stdc++.h>
using namespace std;

void print(vector <int> arr ){
    for(int i=0 ; i<= arr.size()-1 ; i++){
        cout << "  " << arr.at(i) << endl;
    }
    cout<<endl;
}

// To check the wheather the number is prime or not 
bool Isprime(int n){
    bool prime = true;

    for (int i = 2 ; i*i <= n ; i++){
        if (n%i == 0){
            prime = false;
        }
    }
    return prime;
}

vector <int> primeList(int n ){
    vector <int> primeNum;
    for( int i = 2 ; i < n ; i++){
        if (Isprime(i)){
            primeNum.push_back(i);
        }
    }
    return primeNum;
}


int main()
{
    bool res = Isprime(15);
    cout << "Is prime " << res << endl;

    vector <int> result = primeList(100);
    print(result);

    cout  << endl;
    
    return 0;
}