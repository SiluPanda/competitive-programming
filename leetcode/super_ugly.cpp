#include <bits/stdc++.h>
using namespace std;

bool isugly(int n, vector <int> prime){
    while(n%2 == 0){
        if(prime[2] == 0){
            return false;
        }
        n /= 2;
    }
    for(int i = 3; i <= sqrt(n); i+=2){
        while(n%i == 0){
            if(prime[i] == 0){
                return false;
            }
            n /= i;
        }
    }
    if(n > 2){
        if(prime[n] == 0){
            return false;
        }
    }
    return true;
}

int nthSuperUglyNumber(int n, vector<int>& primes) {
    vector <int> prime(1001, 0);
    for(auto x : primes) prime[x] = 1;
    vector <int> ugly;
    ugly.push_back(1);
    int i = 2;
    cout << prime.at(1009) << endl;
    while(true){
        if(ugly.size() == n){
            for(auto x : ugly) cout << x << " ";
            cout << endl;
            return ugly[n-1];
        }
        if(isugly(i, prime)) ugly.push_back(i);
        i++;
    }
    return -1;
    
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    int m;
    cin >> m;
    vector <int> primes(m);
    for(int i = 0; i < m; i++){
        cin >> primes[i];
    }
    cout << nthSuperUglyNumber(n, primes) << endl;
}