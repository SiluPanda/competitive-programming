#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define el "\n"

bool comp(pair <ll, ll> a, pair <ll , ll> b){
    return a.first <= b.first;
}

int main(){
    fastio
    ll tc;
    cin>>tc;
    while(tc--){
        ll n,m,x;
        cin>>n>>m>>x;
        set <ll> st;
        for(ll i = 0; i < n; i++){
            ll num;
            cin>>num;
            st.insert(num);
        }
        ll b[m];
        for(ll i = 0; i < m; i++) cin>>b[i];
        vector < pair <ll, ll> > ans;
        
        for(ll i = m-1; i >= 0; i--){
            if(st.find(x-b[i]) != st.end()){
                pair <ll, ll> p;
                p.first = x-b[i];
                p.second = b[i];
                ans.push_back(p);
            }
        }
        sort(ans.begin(), ans.end(), comp);
        for(ll i = 0; i < ans.size(); i++){
            cout << ans[i].first << " " << ans[i].second;
            if(i != ans.size()-1){
                cout << ", ";
            }
        }
        if(ans.size() == 0) cout << -1;
        cout << el;
    }
}