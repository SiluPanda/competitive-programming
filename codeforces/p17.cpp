#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define el "\n"

int main(){
    fastio
    int tt;
    cin >> tt;
    int curr = 0;
    int ans = INT_MIN;
    while(tt--){
        int exit, entry;
        cin >> exit >> entry;
        curr += (entry - exit);
        ans = max(curr, ans);

    }
    cout << ans << el;
}