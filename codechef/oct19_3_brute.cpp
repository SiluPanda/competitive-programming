#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
    int tt;
    cin>>tt;
    while(tt--){
        ll n, k;
        cin>>n>>k;
        ll a[n];
        for(ll i = 0; i < n; i++){
            cin>>a[i];
        }
        for(ll i = 0; i < k; i++){
            a[i%n]^=a[n-(i%n)-1];
        }
        for(ll i = 0; i < n; i++){
            cout << a[i] << " ";
        }
        cout << endl;
    }
}