#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, k;
    cin >> n >> k;
    int ans = 0;
    while(n > 0){
        n /= k;
        ans++;
    }
    cout << ans << endl;
}