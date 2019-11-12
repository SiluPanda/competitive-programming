#include <bits/stdc++.h>
using namespace std;

int pre[100001];

void precompute(){
    memset(pre, 0, sizeof(pre));
    pre[1] = 1;
    pre[2] = 1;
    pre[3] = 2;
    pre[4] = 2;
    pre[5] = 1;
    for(int i = 6; i < 100001; i++){
        pre[i] = min(pre[i-5], min(pre[i-1], pre[i-2]))+1;
    }
}

int main(){
    precompute();
    int tt;
    cin >> tt;
    while(tt--){
        int n;
        cin >> n;
        int a[n];
        int mini = INT_MAX;
        for(int i = 0; i < n; i++){
            cin >> a[i];
            mini = min(a[i], mini);
        }
        int ans = 0;
        vector <int> diff(n);
        for(int i = 0; i < n; i++){
            int idx = a[i]-mini;
            diff[i] = idx;
            ans += pre[idx];
            
        }
        int p1 = 0, p2 = 0, p3 = 0;
        for(int i = 0; i < n; i++){
            int idx = diff[i];
            p1+=(pre[idx+1]+1);
            p2+=(pre[idx+2]+1);
            p3+=(pre[idx+5]+1);
        }
        cout << min(ans, min(p1, min(p2, p3))) << endl;
    }
}
