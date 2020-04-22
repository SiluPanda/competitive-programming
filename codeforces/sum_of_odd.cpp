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
        int n, k;
        cin >> n >> k;
        if(n >= k*k && n%2 == k%2){
            cout << "YES";
        }
        else cout << "NO";
        cout << "\n";
    }
}