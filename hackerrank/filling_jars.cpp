#include <bits/stdc++.h>
using namespace std;
#define ull unsigned long long int

int main(){
    ull n, m;
    cin >> n >> m;
    ull ans = 0;
    while(m--){
        ull l, h, val;
        cin >> l >> h >> val;
        ans += (h-l+1)*val;
        
    }
    cout << ans/n << endl;
}