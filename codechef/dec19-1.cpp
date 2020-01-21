#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define el "\n"

int main(){
    fastio
    int tt;
    cin >> tt;
    while(tt--){
        ll q;
        cin >> q;
        unordered_map <ll, ll> F;
        while(q--){
            ll x,y;
            cin >> x >> y;
            if(F[x] < y) F[x] = y;
        }
        ll ans = 0;
        for(auto i = F.begin(); i != F.end(); i++){
            if(i->first <= 8) ans+=i->second;
        }
        cout << ans << "\n";
    }
}