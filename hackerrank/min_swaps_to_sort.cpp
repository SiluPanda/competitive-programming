#include <bits/stdc++.h>
using namespace std;
#define LL long long int

LL min_swaps(LL a[], LL n){
    pair <LL, LL> pos[n];
    for(LL i = 0; i < n; i++){
        pos[i].first = a[i];
        pos[i].second = i;
    }
    
    bool vis[n] = {0};
    sort(pos, pos+n);
    LL ans = 0;
    for(LL i = 0; i < n; i++){
        if(vis[i] || i == pos[i].second){
            continue;
        }
        LL cycle = 0;
        LL j = i;
        while(!vis[j]){
            vis[j] = 1;
            cycle++;
            j = pos[j].second;
        }
        ans += (cycle-1);
    }
    return ans;
}

bool comp(pair <LL, LL> a, pair <LL, LL> b){
    return a.first >= b.first;
}
LL min_swaps_rev(LL a[], LL n){
    vector <pair <LL, LL> > pos(n);
    for(LL i = 0; i < n; i++){
        pos[i].first = a[i];
        pos[i].second = i;
    }
    sort(pos.begin(), pos.end(), comp);
    bool vis[n] = {0};
    LL ans = 0;
    for(LL i = 0; i < n; i++){
        if(vis[i] || pos[i].second == i){
            continue;
        }
        LL cycle = 0;
        LL j = i;
        while(!vis[j]){
            cycle++;
            vis[j] = 1;
            j = pos[j].second;
        }
        ans += cycle-1;
    }
    return ans;
}

int main(){
    LL n;
    cin>>n;
    LL a[n];
    for(LL i = 0; i < n; i++) cin>>a[i];
    cout << min(min_swaps_rev(a, n), min_swaps(a, n))<< endl;
}