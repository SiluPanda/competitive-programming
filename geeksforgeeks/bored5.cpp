#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define el "\n"

int maxPrice(int prices[], int n){
    int ret = 0;
    int dp[n+1][n+1];
    for(int i = 0; i <= n; i++){
        for(int j = 0; j <= n; j++){
            dp[i][j] = 0;
        }
    }
    for(int i = 0; i <= n; i+=1){
        for(int j = 0; j <= n; j++){
            if(i == 0 || j == 0){
                dp[i][j] = 0;
            }
            else if(i > j) dp[i][j] = dp[i-1][j];
            else dp[i][j] = max(dp[i][j-i]+prices[i-1], dp[i-1][j]);
            
        }
    }
    return dp[n][n];
}

int main(){
    int tt;
    cin >> tt;
    while(tt--){
        int n;
        cin >> n;
        int prices[n];
        for(int i = 0; i < n; i++){
            cin >> prices[i];
        }
        cout << maxPrice(prices, n) << endl;
    }
}