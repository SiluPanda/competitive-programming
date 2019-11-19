#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define el "\n"



int main(){
    int n, m;
    cin >> n >> m;
    int a[n+1][m+1];
    int dp[n][m];
    for(int i = 0; i < n+1; i++){
        
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> a[i][j];
            dp[i][j] = 0;
        }
    }
    int maxi = INT_MIN;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(a[i][j] == 1){
                //up-left i-1, j-1;
                bool gotit = 0;
                if(i-1>=0 && j-1>=0){
                    dp[i][j] = max(dp[i][j], dp[i-1][j-1]+1);
                    gotit = 1;
                }
                //else dp[i][j] = 1;
                //up i-1
                if(i-1>=0){
                    dp[i][j] = max(dp[i][j], dp[i-1][j]+1);
                    gotit = 1;
                }
                //else dp[i][j] = 1;
                //up-left i+1 j-1
                if(j+1<n && i-1>=0){
                    dp[i][j] = max(dp[i][j], dp[i-1][j+1]+1);
                    gotit = 1;
                }
                //else dp[i][j] = 1;
                //left
                if(j-1>=0){
                    dp[i][j] = max(dp[i][j], dp[i][j-1]+1);
                    gotit = 1;
                }
                
                if(!gotit) dp[i][j] = 1;
            }
            
        }
    }
    
}