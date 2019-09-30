#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define el "\n"


ll fun(ll a[], ll n, ll k){
    sort(a, a+n);
    if(k > n) return -1;
    ll low = 0, high = k-1;
    ll ans = INT_MAX;
    while(high < n){
        ans = min(ans, a[high]-a[low]);
        low++; high++;
    }
    return ans;

}

int main(){
    fastio;
    int tc;
    cin>>tc;
    while(tc--){
        ll n;
        cin>>n;
        ll a[n];
        for(ll i = 0; i < n; i++) cin>>a[i];
        
        ll k; cin>>k;
        cout << fun(a, n, k) << el;

    }
}
