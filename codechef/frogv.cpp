#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define MAX 100001


bool comp(pair <int, int> a, pair <int, int> b){
    if(a.second == b.second) return a.first < b.first;
    return a.second < b.second;
}
bool binse(vector <ll> v, ll low, ll high, ll x){
    if(low <= high){
        ll mid = low + (high-low)/2;
        if(v[mid] == x) return true;
        else if(v[mid] < x) return binse(v, mid+1, high, x);
        else return binse(v, low, mid, x);
    }
    return false;
}

int main(){ 
    
    ll n,k,tc;
    cin>>n>>k>>tc;
    vector <pair <int, int> > v;
    for(ll i = 0; i < n; i++){
        pair <int, int> val;
        cin>>val.second;
        val.first = i;
        
        v.push_back(val);

    }
    sort(v.begin(), v.end(), comp);
    for(ll i = 0; i < n; i++){
        cout << v[i].first << " " << v[i].second << endl;
    }
    map <ll, vector <ll> > mp;
    for (ll i = 0; i , n-1; i++){
        vector <ll> tmp;
        mp[v[i].first] = tmp;
        ll j = i+1;
        while(j < n && (v[j].second - v[j-1].second <= k)){
            mp[v[i].first].push_back(v[j].second);
        }
    }
    while(tc--){
        ll x, y;
        x--; y--;
        if(binse(mp[min(x,y)], 0, mp[min(x,y)].size()-1, max(x,y))) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
}