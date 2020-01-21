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
        ll n;
        cin >> n;
        ll c1=0,c2=0;
        for(ll i = 0; i < n; i++){
            ll num;
            cin >> num;
            c1 += (num == 2);
            c2 += (num == 0);
        }
        cout << (c1*(c1-1))/2 + (c2*(c2-1))/2 << "\n";
    }
}