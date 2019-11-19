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
        int a[n];
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        int dp[n];
        dp[0] = a[0];
        dp[1] = a[1];
        for(int i = 2; i < n; i++){
            dp[i] = min(dp[i-1], dp[i-2])+a[i];
        }
        cout << min(dp[n-1], dp[n-2]) << el;
    }
}