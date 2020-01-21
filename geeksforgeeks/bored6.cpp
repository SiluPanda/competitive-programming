#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define el "\n"

int maxStock(int prices[], int n, int k){
    int dp[n+1][k+1];
    for(int i = 0; i <= n; i++){
        for(int j = 0; j <= k; j++){
            if(i == 0 || j == 0) dp[i][j] = 0;
            else if()
        }
    }
}

int main(){
    int tt;
    cin >> tt;
    while(tt--){
        int k,n;
        cin >> k >> n;
        int prices[n];
        for(int i = 0; i < n; i++) cin >> prices[i];
        cout << maxStock(prices, n) << el;
    }
}