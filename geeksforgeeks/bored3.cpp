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
        memset(dp, 0, sizeof(dp));
        dp[0] = 1;
        int a[3] = {3,5,10};
        for(int i = 0; i < 3; i++){
            for(int j = a[i]; j <= n; j++){
                dp[j]+=dp[j-a[i]];
            }
        }
        cout << dp[n] << el;
    }
}