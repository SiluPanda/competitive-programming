#include <bits/stdc++.h>
using namespace std;
#define ll long long int

ll fun(ll a[], ll n){
    if(n == 1){
        return 0;
    }
    if(n == 2 && a[0] != a[1]){
        return 2;
    }
    ll ans = 0;
    if(a[0] != a[1]){
        ans++;
    }
    if(a[n-1] != a[n-2]){
        ans++;
    }
    for(ll i = 1; i < n-1; i++){
        if(a[i] != a[i-1] || a[i] != a[i+1]){
            ans++;
        }
    }

    return ans;
}

int main(){
    int tt; cin>>tt;
    while(tt--){
        ll n;
        cin>>n;
        ll a[n];
        for(ll i = 0; i < n; i++){
            cin >> a[i];
        }
        cout << fun(a, n) << endl;
        
    }
}