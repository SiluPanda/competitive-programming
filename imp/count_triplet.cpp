#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
    ll n, r;
    cin >> n >> r;
    ll a[n];
    for(ll i = 0; i < n; i++){
        cin >> a[i];
    }
    unordered_map <ll, ll> N, M;
    ll ans = 0;
    if(r == 1){
        for(ll i = 0; i < n; i++){
            M[a[i]]++;
        }
        for(auto i = M.begin(); i != M.end(); i++){
            ll p = i->second;
            ans += (p*(p-1)*(p-2))/6;
        }
    }
    else{
        for(int i = 0; i < n; i++){
            ans += M[a[i]];
            N[a[i]*r]++;
            M[a[i]*r] += N[a[i]];
            
        }
    }
    cout << ans << endl;
}