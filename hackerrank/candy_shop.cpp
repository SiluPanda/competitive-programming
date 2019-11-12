#include <bits/stdc++.h>
using namespace std;
#define mod 1000000000

int pre[1000][1000];

void precompute(){
    for(int i = 0; i < 1000; i++){
        for(int j = 0; j < 1000; j++){
            if(j == 0 || i == j){
                pre[i][j] = 1;
            }
            else{
                pre[i][j] = (pre[i-1][j-1]+pre[i-1][j])%mod;
            }
        }
    }
}

int main(){
    precompute();
    int tt;
    cin >> tt;
    while(tt--){
        int n, k;
        cin >> n >> k;
        cout << pre[n+k-1][n-1] << endl;
    }
}