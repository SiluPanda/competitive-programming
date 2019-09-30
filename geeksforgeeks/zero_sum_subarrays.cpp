#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define el "\n"

//taking prefix array and counting the possible ways to pick two out of some similar vals.

int main(){
    fastio
    int tc;
    cin>>tc;
    while(tc--){
        ll n;
        cin>>n;
        ll pre[n+1];
        ll num; cin>>num;
        pre[1] = num;
        pre[0] = 0;
        for(ll i = 2; i <= n; i++){
            ll tmp;
            cin>>tmp;
            pre[i] = pre[i-1]+tmp;
        }
        unordered_map <ll, ll> mp;
        for(ll i = 0; i <= n; i++){
            mp[pre[i]]++;
        }
        ll ans = 0;
        for(auto it = mp.begin(); it != mp.end(); it++){
            ll p = it->second;
            ans += (p*(p-1))/2;
        }
        cout << ans << el;

    }
}