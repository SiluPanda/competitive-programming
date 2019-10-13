#include <bits/stdc++.h>
using namespace std;

bool comp(pair <int, int> a, pair <int, int> b){
    return a.second < b.second;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    int tt;
    cin>>tt;
    while(tt--){
        int n;
        cin>>n;
        vector < pair <int ,int > > v(n);
        pair <int, int> p;
        for(int i = 0; i < n; i++){
            v[i] = p;
        }
        for(int i = 0; i < n; i++){
            cin>>v[i].first;
        }
        for(int i = 0; i < n; i++){
            cin>>v[i].second;
        }
        sort(v.begin(), v.end(), comp);
        int ans = 1;
        
        int curr = v[0].second;
        int i = 1;
        while(i < n){
            if(v[i].first >= curr){
                ans++;
                curr = v[i].second;
            }
            i++;
        }
        cout << ans << endl;

    }
}

