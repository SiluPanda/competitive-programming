#include <bits/stdc++.h>
using namespace std;
#define ll long long int

bool fun(string a, string b){
    ll lena = a.length();
    ll lenb = b.length();
    if(lena != lenb) return false;
    ll p = 0, q = 0;
    for(ll i = 0; i < lena; i++){
        if(a[i] == '1') p++;
        if(b[i] == '1') q++;
    }
    return p == q;
}

int main(){
    int tc; cin>>tc;
    while(tc--){
        ll n; cin>>n;
        string a,b;
        cin>>a>>b;
        if(fun(a, b)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}