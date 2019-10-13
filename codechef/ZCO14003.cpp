#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define fastio ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define el "\n"

int main(){
    ll n;
    cin>>n;
    ll a[n];
    for(ll i = 0; i < n; i++) cin>>a[i];
    sort(a, a+n);
    ll ma = INT_MIN;
    for(ll i = 0; i < n; i++){
        ma = max(a[i]*(n-i) , ma);
    }
    cout << ma << endl;
}