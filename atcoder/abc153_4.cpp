#include <bits/stdc++.h>
using namespace std;

typedef long long LL;

int main(){
    ll h;
    cin >> h;
    ll len = (int) log2(h) + 1;
    ll ans = (1LL<<len) - 1;
    cout << ans << endl;
}