#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll get_lcm(ll a, ll b){
    return (a*b) / (__gcd(a, b));
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n, m;
    cin >> n >> m;
    ll a[n];
    for(ll i = 0; i < n; i++){
        cin >> a[i];
        a[i] >>= 1;
    }
    ll lcm = a[0];
    bool good = true;
    for(ll i = 0; i < n; i++){
        lcm = get_lcm(lcm, a[i]);
    }
    for(auto x : a){
        if(lcm/x % 2 == 0){
            good = false;
            break;
        }
    }
    if(!good){
        cout << 0 << endl;
    }
    else{
        cout << ((m / lcm)+1)/2 << endl;
    }

}