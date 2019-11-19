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
        ll n, k;
        cin >> n>> k;
        ll a[n];
        for(ll i = 0; i < n; i++){
            cin >> a[i];
        }
        ll curr = 0;
        bool f = 1;
        ll ind = 0;
        for(ll i = 0; i < n; i++){
            curr+=a[i];
            if(curr < k){
                f = 0;
                ind = i+1;
                break;
            }
            else curr-=k;
        }
        if(f) cout << "YES";
        else cout << "NO" << " " << ind;
        cout << el;

    }
}