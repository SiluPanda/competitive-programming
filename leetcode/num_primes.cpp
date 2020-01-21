#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ull unsigned long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define el "\n"

int countPrimes(int n) {
    vector <bool> dp(n, 1);
    if(n < 2) return 0;
    for(int i = 2; i*i <= n; i++){
        if(dp[i]){
            for(int p = i*i; p < n; p+=i){
                dp[p] = 0;
            }
        }
    }
    //for(int i = 0; i < n; i++) cout << dp[i] << " ";
    //cout << endl;
    int ret = 0;
    for(int i = 2; i < n; i++) ret += dp[i];
    return ret;
}

int main(){
    int n;
    cin >> n;
    cout << countPrimes(n) << endl;
}
