#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
    int tt;
    cin >> tt;
    while(tt--){
        ll n;
        cin >> n;
        ll a[n];
        for(ll i = 0; i < n; i++){
            cin >> a[i];
        }
        ll pre[n+1];
        pre[0] = 0;
        for(ll i = 1; i <= n; i++){
            pre[i] = pre[i-1]^a[i-1];
            
        }
        ll ans = 0;
        if((n&1) == 0){
            cout << 0;
        }
        else{
            for(ll i = 0; i <= n; i++) ans^=pre[i];
            cout << ans;
        }
        cout << "\n";
    }
}