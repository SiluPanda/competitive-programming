#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define el "\n"

int main(){
    int tc;
    cin>>tc;
    while(tc--){
        ll n,m;
        cin>>n>>m;
        ll sum = 0;
        for(ll i = 0; i < n; i++){
            ll num;
            cin>>num;
            sum += num;
        }
        if(m >= sum) cout << "Yes" << el;
        else cout << "No" << el;
    }

}