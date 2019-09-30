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
        ll sum = 0;
       
        for(ll i = 0; i < n-1; i++){
            ll num; cin>>num;
            sum += num;
        }
        //cout << "sum = " << sum << el;
        cout << ((n*(n+1))/2) - sum << el;
    }
}   