#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define el "\n"

bool ok(ll p[], ll c[], ll n, ll reqp, ll bud){
    if(reqp == 0) return 1;
    if(bud == 0) return 0;
    for(ll i = 0; i < n; i++){
        if(reqp <= p[i] && bud >= c[i]) return 1;
    }
    return 0;
}

int main(){
    fastio
    int tc;
    cin>>tc;
    while(tc--){
        ll x,y,bud, n;
        cin>>x>>y>>bud>>n;
        ll reqp = x-y;
        ll p[n], c[n];
        for(ll i = 0; i < n; i++){
            cin>>p[i]>>c[i];
        }
        if(ok(p, c, n, reqp, bud)) cout << "LuckyChef" << el;
        else cout << "UnluckyChef" << el;
    }
}