#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define el "\n"

ll fast(ll base, ll exp){
    if(exp == 1) return base;
    else if(exp%2 == 0){
        ll bb = pow( fast(base, exp/2), 2);
        if(bb >= mod) bb = bb%mod;
        return bb;
    }
    else{
        ll bb = base*pow(fast(base, (exp-1)/2), 2);
        if(bb >= mod) bb = bb%mod;
        return bb;
    }
}

ll howmany(ll n){
    if(n == 1) return 2;
    if(n%2 == 0){
        n = n/2;

        ll p = fast(2, n);
        return (2*(p*2-1) - p)%mod;
    }
    else{
        n = (n+1)/2;
        return (2*(fast(2, n)-1))%mod;
    }
}

int main(){
    fastio;
    int tc;
    cin>>tc;
    while(tc--){
        ll n;
        cin>>n;
        cout << howmany(n) << el;
    }
}