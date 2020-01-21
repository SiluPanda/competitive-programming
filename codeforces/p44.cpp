#include <bits/stdc++.h>
using namespace std;

int main(){
    int k,l,m,n,d;
    cin >> k >> l >> m >> n >> d;
    vector <int> dp(d+1, 0);
    for(int i = 0; i <= d; i += k) dp[i] = 1;
    for(int i = 0; i <= d; i += l) dp[i] = 1;
    for(int i = 0; i <= d; i += m) dp[i] = 1;
    for(int i = 0; i <= d; i += n) dp[i] = 1;

    int sum = 0;
    for(int i = 1; i <= d; i++) sum += dp[i];
    cout << sum << endl;
}