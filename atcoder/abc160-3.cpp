#include <bits/stdc++.h>
using namespace std;

#define int long long

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int tot, n;
    cin >> tot >> n;
    vector <int> dis(n);
    for(int i = 0; i < n; i++){
        cin >> dis[i];
    }
    int maxi = INT_MIN;
    for(int i = 0; i < n-1; i++){
        maxi = max(maxi, dis[(i+1)]-dis[i]);
    }
    maxi = max(dis[0]+tot-dis[n-1], maxi);
    cout << tot-maxi << endl;
    
}