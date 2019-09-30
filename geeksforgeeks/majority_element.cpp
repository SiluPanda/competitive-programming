#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define el "\n"

int main(){
    int tc;
    cin>>tc;
    while(tc--){
        int n;
        cin>>n;
        map <int, int> f;
        for(int i = 0; i < n; i++){
            int num;
            cin>>num;
            f[num]++;
        }
        int ans = 0;
        int maxi = INT_MIN;
        for(auto it = f.begin(); it != f.end(); it++){
            if(it->second > maxi){
                maxi = it->second;
                ans = it->first;
            }
        }
        if(maxi <= n/2) cout << -1 << el;
        else cout << ans << el;

    }
}