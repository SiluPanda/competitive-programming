#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL);
#define el "\n"

int main(){
    fastio
    int tc;
    cin>>tc;
    while(tc--){
        int n; cin>>n;
        int a[n];
        for(int i = 0; i < n; i++){
            cin>>a[i];
        }
        int k; cin>>k;
        int mp[k+1] = {0};
        for(int i = 0; i < n; i++){
            if(a[i] <= k) mp[i]++;
        }
        int ans = 0;
        for(int i  = 1; i <= k/2; i++){
            if(i == k-i) ans += (mp[i]*(mp[k-i]-1))/2;
            else ans += mp[i]*mp[k-i];
        }
        cout << ans << el;
    }

}