#include <bits/stdc++.h>
using namespace std;
typedef long long int LL;

LL pre[128];

void precompute(){
    pre[0] = 0;
    unordered_map <LL, LL> F;
    F[0] = 1;
    for(LL i = 1; i < 128; i++){
        if(F[pre[i-1]] == 1){
            pre[i] = 0;
            F[pre[i]]++;
        }
        else{
            for(LL j = i-2; j >= 0; j--){
                if(pre[j] == pre[i-1]){
                    pre[i] = i-1-j;
                    break;
                }
            }
            F[pre[i]]++;
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    precompute();
    int tt;
    cin >> tt;
    while(tt--){
        LL n;
        cin >> n;
        LL ans = 0;
        for(LL i = n-1; i >= 0; i--){
            if(pre[i] == pre[n-1]) ans++;
        }
        cout << ans << "\n";
    }
}