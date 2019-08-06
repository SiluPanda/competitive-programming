#include <bits/stdc++.h>
using namespace std;
#define ll long long int

ll fun(ll a[], ll n){
    ll num = 0, num2 = 0;
    for(ll i = 0; i < n; i++){
        if(a[i] != 0 && a[i] != 1){
            num++;
        }
        if(a[i] == 2) num2++;
    }
    return (num*(num-1) - num2*(num2-1))/2;
}

int main(){
    int tc;
    cin>>tc;
    while(tc--){
        ll n;
        cin>>n;
        ll a[n];
        for(ll i = 0; i < n; i++){
            cin>>a[i];
        }
        cout << fun(a, n) << endl;
    }
}
