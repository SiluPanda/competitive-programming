#include <bits/stdc++.h>
using namespace std;
#define LL long long int

LL getxor(LL n){
    LL p = n&7;
    if(p < 2) return n;
    if(p < 4) return 2;
    if(p < 6) return n+2;
    return 0;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    while(n--){
        LL l, r;
        cin >> l >> r;
        cout << (getxor(r)^getxor(l-1)) << "\n";
    }
}