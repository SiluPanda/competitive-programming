#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
    ll n, k;
    cin >> n >> k;
    ll a[n];
    for(ll i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a, a+n, greater <int>());
    ll ans = 0;
    ll mul = 1;
    for(ll i = 0; i < n; i++){
        ans+= mul*a[i];
        if((i+1)%k == 0){
            mul++;
        }

    }
    cout << ans << endl;
}