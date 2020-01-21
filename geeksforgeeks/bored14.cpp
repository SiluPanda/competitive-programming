#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define el "\n"

void solve(){
    int n, k;
    cin >> n >> k;
    int a[n];
    unordered_map <int, pair<bool, int>> F;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        F[a[i]].second++;
        F[a[i]].first = 0;
    }
    int ans = 0;
    for(auto i = F.begin(); i != F.end(); i++){
        if(i->second.first == false){
            if(i->first == k-i->first){
                ans += (i->second.second * (i->second.second-1))/2;
                i->second.first = true;
            }
            else {
                ans+=(i->second.second * F[k-i->first].second);
                F[i->first].first = true;
                F[k-i->first].first = true;

            }

        }
    }
    cout << ans << el;
    

}

int main(){
    int tt;
    cin >> tt;
    while(tt--){
        solve();
    }
}