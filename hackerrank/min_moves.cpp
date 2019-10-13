#include <bits/stdc++.h>
using namespace std;
#define maxim 1000001

int dp[maxim];

void pre_compute(){
    for(int i = 0; i < maxim; i++) dp[i] = -1;
    dp[0] = 0; dp[1] = 1, dp[2] = 2, dp[3] = 3;
    for(int i = 0; i < maxim; i++){
        if(dp[i] == -1 || dp[i] > dp[i-1]+1){
            dp[i] = dp[i-1]+1;
        }
        for(int j = 1; j <= i && j*i < maxim; j++){
            if(dp[j*i] == -1 || dp[j*i] > dp[i]+1){
                dp[j*i] = dp[i]+1;
            }
        }
    }
}

int main(){
    int n;
    cin>>n;
    pre_compute();
    
    while(n--){
        int x;
        cin>>x;

        cout << dp[x] << endl;
    }
}