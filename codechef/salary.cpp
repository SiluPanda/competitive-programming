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
        ll n;
        cin>>n;
        ll a[n];
        ll sum = 0;
        ll mini = INT_MAX;
        for(ll i = 0; i < n; i++){
            cin>>a[i];
            mini = min(mini, a[i]);
            sum += a[i];
            
        }
        cout << sum - n*mini << el;

    }
}