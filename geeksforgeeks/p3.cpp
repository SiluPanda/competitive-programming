#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define el "\n"

//naive
ll fun(ll a[], ll n){
    ll ans = 0;
    for(ll i = 0; i < n-1; i++){
        for(ll j = i+1; j < n; j++){
            if(a[j] >= a[i]){
                ans = max(j-i, ans);
                if(ans >= n-i-1) break;

            }
        }
    }
    return ans;
}

int main(){
    fastio
    int tt; cin>>tt;
    while(tt--){
        ll n; cin>>n;
        ll a[n];
        for(ll i = 0; i < n; i++) cin>>a[i];
        cout << fun(a, n) << "\n";
    }
}