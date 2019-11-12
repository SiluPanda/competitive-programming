#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
    ll n;
    cin >> n;
    ll a[n];
    for(ll i = 0; i < n; i++) cin >> a[i];
    ll ans = 0;
    for(ll i = 0; i < n-1; i++){
        for(ll j = i+1; j < n; j++){
            ans += (a[i]* a[j]);
        }
    }
    cout << ans << endl;
}