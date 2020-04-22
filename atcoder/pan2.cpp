#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve(){
    ll w, h;
    cin >> w >> h;
    if(w == 1 || h == 1){
        cout << 1 << endl;
        return;
    }
    ll num = (w*h + 1)/2;
    cout << num << endl;
    return;
}
int main(){
    solve();
}