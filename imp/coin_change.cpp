#include <bits/stdc++.h>
using namespace std;
#define LL long long int

//recursive
LL num_ways(LL coins[], LL m, LL n){
    if(n == 0){
        return 1;
    }
    else if(n < 0){
        return 0;
    }
    else if(n >= 0 && m <= 0){
        return 0;
    }
    else{
        return num_ways(coins, m-1, n)+num_ways(coins, m, n-coins[m-1]);
    }
}

//DP
LL num_ways_dp(LL coins[], LL m, LL n){
    LL dp[n+1];
    memset(dp, 0, sizeof(dp));
    dp[0] = 1;
    for(LL i = 0; i < m; i++){
        for(LL j = coins[i]; j <= n; j++){
            dp[j] += dp[j-coins[i]];
        }
    }
    return dp[n];
}


int main(){
    LL n, m;
    cin >> n >> m;
    LL coins[m];
    for(int i = 0; i < m; i++){
        cin >> coins[i];
    }
    cout << num_ways_dp(coins, m, n) << endl;
}