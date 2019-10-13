#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define fastio ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define el "\n"

int main(){
    fastio
    int tt;
    cin>>tt;
    while(tt--){
        ll n, k;
        cin>>n>>k;
        vector <ll> a(n);
        for(ll i = 0; i < n; i++) cin>>a[i];
        ll p = (k/n);
        for(ll it = 0; it < (p%3); it++){
            for(ll i = 0; i < n; i++){
                a[i%k]^=a[n-i-1];
            }
        }
        for(ll i = 0; i < (k%n); i++){
            a[i]^=a[n-i-1];
        }
        for(ll i = 0; i < n; i++){
            cout << a[i] << " ";
        }
        cout << el;
    }
}