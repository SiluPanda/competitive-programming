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
        ll n, x;
        cin>>n>>x;
        ll pre[n+1];
        pre[0] = 0;
        ll num;
        cin>>num;
        pre[1] = num;
        for(ll i = 2; i < n+1; i++){
            ll tmp;
            cin>>tmp;
            pre[i] = tmp+pre[i-1];
        }
        
        
        bool ok = 0;
        for(int i = 0; i < n; i++){
            for(int j = i+1; j < n+1; j++){
                if((pre[j] - pre[i]) == x){
                    cout << i+1 << " " << j << el;
                    ok = 1;
                    break;
                }
                if((pre[j] - pre[i]) > x) break;
            }
            if(ok) break;
        }
        if(!ok) cout << -1 << el;
    }
}