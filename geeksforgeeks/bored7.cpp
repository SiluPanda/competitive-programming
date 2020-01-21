#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define el "\n"

int numTimes(string A, string B){
    int n = A.length();
    int m = B.length();
    int dp[n+1][m+1] = {{0}};
    for(int i = 0; i <= n; i++){
        dp[i][0] = 1;
    }
    for(int i = 0; i <= m; i++){
        dp[0][i] = 0;
    }
    dp[0][0] = 1;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            if(A[i-1] == B[j-1]){
                dp[i][j] = dp[i-1][j]+dp[i-1][j-1];

            }
            else dp[i][j] = dp[i-1][j];
        }
    }
    return dp[n][m];

}

int main(){
    int tt;
    cin >> tt;
    while(tt--){
        int n, m;
        cin >> n >> m;
        string A, B;
        cin >> A >> B;
        cout << numTimes(A, B) << el;
    }
}