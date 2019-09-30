#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define el "\n"

bool comp(pair <int, int> a, pair <int, int> b){
    if (a.first == b.first) return a.second <= b.second;
    return a.first < b.second;
}

int main(){
    fastio
    int tc;
    cin>>tc;
    while(tc--){
        int n; cin>>n;
        pair <int, int > a[n];
        for(int i = 0; i < n; i++){
            cin>>a[i].first;
        }
        for(int i = 0; i < n; i++){
            cin>>a[i].second;
        }
        sort(a, a+n, comp);
        int ans = 1;
        vector <int> taken;
        taken.push_back(a[0].second);
        for(int i = 1; i < n; i++){
            bool ok = 0;
            for(int j = 0; j < taken.size(); j++){
                if(taken[j] <= a[i].first){
                    taken[j] = a[i].second;
                    ok = 1;
                    break;
                }
            }
            if(!ok){
                ans++;
                taken.push_back(a[i].second);
            }
        }
        cout << ans << el;
        
    }
}