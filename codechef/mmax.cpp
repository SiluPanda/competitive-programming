#include <bits/stdc++.h>
using namespace std;
#define ll long long int

ll getmod(string k, ll n){
    ll mod = 0;
    for(ll i = 0; i < k.length(); i++){
        int digit = k[i] - '0';
        mod = mod*10 + digit;
        int q = mod / n;
        mod = mod % n;
    }

    return mod;
}

ll fun(ll n, string k){
    ll mod = getmod(k, n);
    if(mod == n-mod){
        return 2*mod - 1;
    }
    return 2 * (min(mod, n-mod));

}

int main(){
    int tt;
    cin>>tt;
    while(tt--){
        ll n;
        cin>>n;
        string k;
        cin>>k;
        //cout << "mod is: " << getmod(k, n) << endl;
        cout << fun(n, k) << endl;
    }
}