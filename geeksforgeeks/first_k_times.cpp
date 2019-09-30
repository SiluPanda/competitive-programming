#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define el "\n"

int main(){
    fastio
    int tc;
    cin>>tc;
    while(tc--){
        int n, k;
        cin>>n>>k;
        unordered_map <int, int> f;
        bool ok = 0;
        int a[n];
        for(int i = 0; i < n; i++){
            cin>>a[i];
            f[a[i]]++;
        }
        for(int i = 0; i < n; i++){
            if(f[a[i]] == k){
                cout << a[i] << el;
                ok = 1;
                break;
            }
        }
        if(!ok) cout << -1 << el;
    }
}