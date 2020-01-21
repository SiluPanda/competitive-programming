#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int

int main(){
    fastio
    map <char, ll> M;
    M['T'] = 4;
    M['C'] = 6;
    M['O'] = 8;
    M['D'] = 12;
    M['I'] = 20;

    ll n, ans = 0;
    cin >> n;
    while(n--){
        string item;
        cin >> item;
        ans += M[item[0]];
    }
    cout << ans << endl;
}