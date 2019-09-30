#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define el "\n"

int maxLen(int a[], int n){
    for(int i = 0; i < n; i++){
        if(a[i] == 0) a[i] = -1;
    }
    int pre[n+1];
    for(int i = 0; i < n; i++){
        pre[i+1] = pre[i]+a[i];
    }
    map <int, int> mp;
    for(int i = n; i >= 0; i--){
        mp[pre[i]] = i;
    }
    int ans = 0;
    for(int i = n; i >= 0; i--){
        if(mp.find(pre[i]) != mp.end()){
            ans = max(ans, i-mp[pre[i]]);
        }
    }
    return ans;
}

int main(){
    fastio
    int tt; cin>>tt;
    while(tt--){
        int n;
        cin>>n;
        int a[n];
        for(int i = 0; i < n; i++) cin>>a[i];
        cout << maxLen(a, n) << endl;
    }
}