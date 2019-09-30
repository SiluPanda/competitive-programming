#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define el "\n"

int main(){
    fastio
    int tc;
    cin>>tc;
    while(tc--){
        ll n;
        cin>>n;
        unordered_map <ll, ll> freqa, freqb;
        ll a[n];
        for(ll i = 0; i < n; i++){
            ll num; cin>>num;
            freqa[num]++;
        }
        for(ll i = 0; i < n; i++){
            ll num; cin>>num;
            freqb[num]++;
        }
        bool ok = 1;
        for(auto it : freqa){
            if(freqb[it.first] != it.second){
                ok = 0;
                break;
            }
        }
        cout << ok << el;
    }
}