#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define fastio ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL)
#define el "\n"

int main(){
    fastio;
    ll n;
    cin >> n;
    vector <ll> v(n);
    for(ll i = 0; i < n; i++) cin >> v[i];
    cout << n << el;
    for(ll size = 2; size <= n; size++){
        ll ans = 0;
        for(ll low = 0; low <= n-size;){
            set <ll > s(v.begin()+low, v.begin()+low+size);
            if(s.size() == size) {
                ans++;
                low += size;
            }
            else low++;
        }
        cout << ans << el;
    }

    

}