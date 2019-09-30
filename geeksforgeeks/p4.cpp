#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ull unsigned long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define el "\n"

ll fib(ll n){
    if(n == 0) return 1;
    if(n == 1) return 2;
    ll a = 1, b = 2, c = 0;
    for(ll i = 2; i <= n; i++){
        c = a+b;
        a = b;
        b = c;
    }
    return c%mod;
}

int main(){
    fastio
    int tt; cin>>tt;
    while(tt--){
        ll n; cin>>n;
        for(int i = 0; i < 100; i++) cout << fib(i) << el;

        
        
    }
}

