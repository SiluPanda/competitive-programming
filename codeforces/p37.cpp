#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define el "\n"

int main(){
    fastio
    int n, m;
    cin >> n >> m;
    int a[m];
    for(int i = 0; i < m; i++){
        cin >> a[i];
    }
    sort(a, a+m);
    int ret = INT_MAX;
    for(int i = 0; i <= m-n; i++){
        ret = min(ret, a[i+n-1]-a[i]);
    }
    cout << ret << el;
}