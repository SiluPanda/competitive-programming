#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define el "\n"

int knapsack_dupli(int value[], int weight[], int W, int n){
    int dp[n+1][W+1] = {{0}};
    for(int i = 0; i <= n; i++){
        for(int j = 0; j <= W; j++){
            if(i == 0 || j == 0){
                dp[i][j] = 0;
            }
            else if(weight[i-1] > j) dp[i][j] = dp[i-1][j];
            else dp[i][j] = max(dp[i][j-weight[i-1]]+value[i-1], dp[i-1][j]);
            
        }
    }
    return dp[n][W];
}

int main(){
    int tt;
    cin >> tt;
    while(tt--){
        int n,W;
        cin >> n >> W;
        int value[n], weight[n];
        for(int i = 0; i < n; i++) cin >> value[i];
        for(int i = 0; i < n; i++) cin >> weight[i];
        cout << knapsack_dupli(value, weight, W, n) << el;
    }
}