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

int main(){
    ll base, exp;
    cin>>base>>exp;
    cout << fast(base, exp) << el;
}