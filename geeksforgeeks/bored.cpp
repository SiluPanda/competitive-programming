#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define el "\n"

int main(){
    int tt;
    cin >> tt;
    while(tt--){
        int n;
        cin >> n;
        int dp[n+1];
        for(int i = 0; i <= n; i++) dp[i] = 100000;
        dp[n] = 0;
        for(int i = n-1; i >= 0; i--){
            if(i*2 <= n) dp[i] = min(dp[i], 1+dp[2*i]);
            dp[i] = min(dp[i], 1+dp[i+1]);
            //cout << dp[i] << endl;
        }
        cout << dp[0] << el;
    }
}