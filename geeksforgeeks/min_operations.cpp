#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define fastio ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define el "\n"

int fun(int n){
    int dp[n+1];
    dp[n] = 0;
    for(int i = n-1; i >= 0; i--){
        if(i != 0 && 2*i <= n){
            dp[i] = min(dp[2*i], dp[i+1])+1;
        }
        else{
            dp[i] = dp[i+1]+1;
        }
    }
    for(int i = 0; i <= n; i++){
        cout << dp[i] << el;
    }
    return dp[0];

}

int main(){
    int tt;
    cin >> tt;
    while(tt--){
        int n;
        cin >> n;
        cout << fun(n) << el;
    }
}