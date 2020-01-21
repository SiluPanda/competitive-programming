#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define MOD 1000000007

ll fact(ll n){
    ll c = 1;
    for(int i = 2; i <= n; i++){
        c = (c*i)%MOD;
    }
    return c%MOD;
}

ll arrange(ll n){
    vector <bool> prime(n+1, true);
    prime[0] = prime[1] = false;
    for(int i = 2; i*i <= n; i++){
        if(prime[i]){
            for(int p = i*i; p <= n; p+=i){
                prime[p] = false;
            }
        }
    }
    ll x = 0;
    for(int i = 2; i <= n; i++) x += prime[i];
    return (fact(x)*fact(n-x))%MOD;
}

int main(){
    ll n;
    cin >> n;
    cout << arrange(n) << endl;
}