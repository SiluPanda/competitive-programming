#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define MOD 1000000007
#define endl "\n"
typedef long long int ll;
typedef pair <ll, ll> pii;

int main(){
    fastio
    ll n, a, b, c;
    cin >> n >> a >> b >> c;
    vector <ll> dp(n+1, 0);
    if(a <= n) dp[a] = 1;
    if(b <= n) dp[b] = 1;
    if(c <= n) dp[c] = 1;
    for(ll i = 0; i <= n; i++){
        ll p = max(dp[max((ll)0, i-a)], max(dp[max((ll)0, i-b)], dp[max((ll)0, i-c)]));
        if(p > 0){
            dp[i] = p+1;
        }
    }
    cout << dp[n] << endl;



}

