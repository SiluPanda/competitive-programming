#include <bits/stdc++.h>
using namespace std;
#define mod 1000000000

int pre[1000][1000];

void populate(){
    for(int i = 0; i < 1000; i++){
        for(int j = 0; j < 1000; j++){
            if(j == 0){
                pre[i][j] = 1;
            }
            else if(i == j){
                pre[i][j] = 1;
            }
            else{
                pre[i][j] = (pre[i-1][j-1]%mod + pre[i-1][j]%mod)%mod;
            }
        }
    }
}

int main(){
    populate();
    int tt;
    cin >> tt;
    
    while(tt--){
        int n;
        cin >> n;
        for(int i = 0; i <= n; i++){
            cout << pre[n][i] << " ";
        }
        cout << endl;
    }
}