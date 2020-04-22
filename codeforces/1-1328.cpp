#include <bits/stdc++.h>
using namespace std;

#define int long long

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int tt;
    cin >> tt;
    while(tt--){
        int a, b;
        cin >> a >> b;
        if(a%b == 0){
            cout << 0 << endl;
        }
        else cout << ((a/b)+1)*b - a << endl;
    }
}